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
#include <verticalequipwgt/verticalequip.h>
class MyDBManager
{

private:
    MyDBManager();
    /**config data*/
    QString IPAddress;
    QString UserName;
    QString Password;
    QString DatabaseName;
    /*****************/
    QSqlDatabase  db;
public:
    static MyDBManager *instance(){static MyDBManager *db = new MyDBManager;return db;}
    void LoadConfig();
    void ConnectDatabase();
    QSqlTableModel * getModel(QString tableName);
    QStringList jointQueryFromRaiseEquipInfo(RaiseEquipInfo data);
    QString jointQueryFromVerticalEquipInfo(VerticalEquipInfo data);
        std::map<QString,long long> maxIDMap;
    template <typename T>
    void addSaveInfoToList (T data)
    {
        if(strcmp(typeid(data).name(),typeid(VerticalEquipInfo).name()) == 0)
        {
            VerticalEquipInfo *info = (VerticalEquipInfo *)(&data);
            jointQueryFromVerticalEquipInfo(*info);
        }
        if(strcmp(typeid(data).name(),typeid(RaiseEquipInfo).name()) == 0)
        {
            RaiseEquipInfo *info = (RaiseEquipInfo *)(&data);
            jointQueryFromRaiseEquipInfo(*info);
        }
    }
};



#endif // MYDBMANAGER_H
