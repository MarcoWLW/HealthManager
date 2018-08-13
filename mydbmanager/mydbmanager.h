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
        std::map<QString,long long> maxIDMap;
    template <typename T>
    void addSaveInfoToList (T data)
    {
        if(strcmp(typeid(data).name(),typeid(RaiseEquipInfo).name()) == 0)
        {
            MyDBManager::instance()->jointQueryFromRaiseEquipInfo(data);
        }
    }
};



#endif // MYDBMANAGER_H
