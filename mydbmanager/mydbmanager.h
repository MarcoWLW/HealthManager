#ifndef MYDBMANAGER_H
#define MYDBMANAGER_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlDriverCreator>
#include <QMessageBox>
#include <QSettings>
#include <QSqlTableModel>
#include <typeinfo>
#include <raiseequipwgt/raiseequip.h>
#include <QTime>
#include <vector>
#include "chassis/chassisinfo.h"
#include <verticalequipwgt/verticalequip.h>
#include "QThread"
#include <QObject>
#include <QMutexLocker>
#include "mydefine/mydefine.h"
#include "QTimer"
#include "connectionpool/connectionpool.h"
#include "recordmanagerwgt/recordmanager.h"
/**the class of database function,we have used the maxid in sql string,
but i find put the number 0 into sql string and it will exec successfully,
so the maxid is obsoleting*/
class MyDBManager:public QObject
{
private:
    MyDBManager();
    /**config data*/
    QString IPAddress;
    QString UserName;
    QString Password;
    QString DatabaseName;
    /*****************/
    QSqlDatabase  myDb;
    std::vector<QString> sqlStrVec;
public slots:
    void onClearSqlVec(){sqlStrVec.clear();}
    void checkRecord();
public:
    QSqlDatabase &getDB(){return myDb;}
    static MyDBManager *instance(){static MyDBManager *db = new MyDBManager;return db;}
    std::vector<QString>& getSqlStrVec(){return sqlStrVec;}
    void LoadConfig();
    void ConnectDatabase();
    bool resolveError(int errorCode);
    QSqlTableModel * getModel(QString tableName);
    void writeRecordInfo(RecordInfo info);
    std::vector<RecordInfo> getRecordInfoVec();
    void removeListSame(QStringList * list);
    //获取维保资源编号
    QStringList getMaintanceResNum(QString actID);
    bool updataAct(QString actID, QString actTime,QString actLevel,QString actLog,QString actHint,QString actRct);
    QStringList jointQueryFromRaiseEquipInfo(RaiseEquipInfo data);
    QString jointQueryFromVerticalEquipInfo(VerticalEquipInfo data);
    QString jointQueryFromBatteryInfo(battery data);
    QString jointQueryFromAPUInfo(DEAPU_L data,int flag/**0 is for left and 1 is for right*/);
    QString jointQueryFromDCInfo(DC data,int flag);
    QString jointQueryFromACInfo(AC data);
    QString jointQueryFromAxleInfo(axle data,int flag);
        std::map<QString,long long> maxIDMap;
    template <typename T>
    void addSaveInfoToList (T data,int flag = 0)
    {
        mutexForAddSqlString->lock();
        QString str;
        QStringList strVec;
        if(strcmp(typeid(data).name(),typeid(VerticalEquipInfo).name()) == 0)
        {
            VerticalEquipInfo *info = (VerticalEquipInfo *)(&data);
            str = jointQueryFromVerticalEquipInfo(*info);
            sqlStrVec.push_back(str);
        }
        else if(strcmp(typeid(data).name(),typeid(RaiseEquipInfo).name()) == 0)
        {
            RaiseEquipInfo *info = (RaiseEquipInfo *)(&data);
            strVec = jointQueryFromRaiseEquipInfo(*info);
            for(int i = 0;i < strVec.size();i++)
                sqlStrVec.push_back(strVec[i]);
        }
        else if(strcmp(typeid(data).name(),typeid(battery).name()) == 0)
        {
            battery *info = (battery *)(&data);
           str =  jointQueryFromBatteryInfo(*info);
           sqlStrVec.push_back(str);
        }
        else if(strcmp(typeid(data).name(),typeid(DEAPU_L).name()) == 0)
        {
            DEAPU_L *info = (DEAPU_L *)(&data);
            str = jointQueryFromAPUInfo(*info,flag);
            sqlStrVec.push_back(str);
        }
        else if(strcmp(typeid(data).name(),typeid(DC).name()) == 0)
        {
            DC *info = (DC *)(&data);
            str = jointQueryFromDCInfo(*info,flag);
            sqlStrVec.push_back(str);
        }
        else if(strcmp(typeid(data).name(),typeid(AC).name()) == 0)
        {
            AC *info = (AC *)(&data);
            str = jointQueryFromACInfo(*info);
            sqlStrVec.push_back(str);
        }
        else if(strcmp(typeid(data).name(),typeid(axle).name()) == 0)
        {
            axle *info = (axle *)(&data);
            str = jointQueryFromAxleInfo(*info,flag);
            sqlStrVec.push_back(str);
        }
        mutexForAddSqlString->unlock();
    }
};



#endif // MYDBMANAGER_H
