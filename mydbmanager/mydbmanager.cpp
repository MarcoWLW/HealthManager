#include "mydbmanager.h"
#include "QDebug"
#include "QStringRef"
MyDBManager::MyDBManager()
{
    LoadConfig();
    maxIDMap.clear();
    maxIDMap["qs"] = -1;
}
void MyDBManager::LoadConfig()
{
    QSettings config("./config/databaseConfig.ini",QSettings::IniFormat);
    config.beginGroup("DatabaseConfig");
    IPAddress = config.value(("address")).toString();
    UserName = config.value("username").toString();
    Password = config.value("password").toString();
    DatabaseName = config.value("databasename").toString();

}
QStringList MyDBManager::jointQueryFromRaiseEquipInfo(RaiseEquipInfo data)
{
    QStringList list;
    list.clear();
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_qs";
    QSqlQuery query;
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    if(maxId < maxIDMap["qs"])
        maxId = maxIDMap["qs"];
    else
    {
        qDebug() << query.lastError();
    }
    for(int i = 0;i < 4;i++)
    {
        QString sqlStr = "";
        sqlStr = "insert into history_qs values(" + QString::number(maxId++) + ","
                      + QTime::currentTime().toString()+ ",";
         if(i == 0)
             sqlStr += "qs_LF";
         else if (i == 1)
             sqlStr += "qs_RF";
         else if (i == 2)
             sqlStr += "qs_LB";
         else if (i == 3)
             sqlStr += "qs_RB";
         sqlStr += data.MacPos[i] + ";" + data.MacElec[i] + ";" + data.MacSpd[i] + ";" + data.MacTemp[i] + ";"
          + data.MacDis[i] + ";" + data.OutLimit[i] + ";" + data.InLimit[i] + ";" + ","
          + "NULL" + ")";
        list.push_back(sqlStr);
    }
    maxIDMap["qs"] = maxId;
    return list;
}

void MyDBManager::ConnectDatabase()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(IPAddress);
    db.setDatabaseName(DatabaseName);
    db.setUserName(UserName);
    db.setPassword(Password);
    bool ok = db.open();
    if(ok){
          qDebug()<<QString("connected successfully!");
    }else{
           QMessageBox::warning(NULL,"warning","connect failed!");
    }
}
QSqlTableModel * MyDBManager::getModel(QString tableName)
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable(QString("%1").arg(tableName));
    model->select();
    return model;
}
