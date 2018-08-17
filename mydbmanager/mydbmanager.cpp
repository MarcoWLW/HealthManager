#include "mydbmanager.h"
#include "QDebug"
#include "QStringRef"
MyDBManager::MyDBManager()
{
    LoadConfig();
    maxIDMap.clear();
    mutexForAddSqlString->unlock();
    maxIDMap["qs"] = -1;
    maxIDMap["tp"] = -1;
}
bool MyDBManager::resolveError(int errorCode)
{
    if(errorCode == 2013 || errorCode == 2006 || errorCode == 2014)
    {
        mutexForAddSqlString->lock();
        myDb.close();
        ConnectDatabase();
        mutexForAddSqlString->unlock();
        return false;
    }
    else{
        return true;
    }
}
void MyDBManager::checkRecord()
{
    /**when the data of sql string is enough,push it into database,and we
    check it once during 50ms*/

    if(sqlStrVec.size() >50)
    {
        QSqlDatabase db = ConnectionPool::openConnection();
        QSqlQuery query(db);
        std::vector<QString > strVec;
        strVec.clear();
        /**WLW TODO:we should lock this step*/
        strVec.assign(sqlStrVec.begin(),
                      sqlStrVec.end());
        sqlStrVec.clear();
        /**exec sql string*/


//            if(QSqlDatabase::database().transaction()) // 启动事务操作
//            {
            // 下面执行各种数据库操作
            for(int i = 0 ;i < strVec.size();i++)
            {
                mutexForAddSqlString->lock();
                query.exec(strVec[i]);
                mutexForAddSqlString->unlock();
                qDebug() << strVec[i] << "\n" << query.lastError();
//                if(!resolveError(query.lastError().number()))
//                {
//                    QSqlQuery newQuery(db);
//                    newQuery.exec(strVec[i]);

//                }
            }
            //
//                if(!QSqlDatabase::database().commit())
//                {
//                    qDebug() << QSqlDatabase::database().lastError(); // 提交
//                    if(!QSqlDatabase::database().rollback())
//                        qDebug() << QSqlDatabase::database().lastError(); // 回滚
//                }
//                /********************/
//            }
            ConnectionPool::closeConnection(db);
    }
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
QString MyDBManager::jointQueryFromVerticalEquipInfo(VerticalEquipInfo data)
{
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_tp";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["tp"])
        maxId = maxIDMap["tp"];

    QString sqlStr = "";
    sqlStr = "insert into history_tp values(" + QString::number(0) + ",'"
                  + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+ "',";
     sqlStr += "'TP',";
     sqlStr += "'" + data.MacElec + ";" + data.MacSpd + ";" + data.MacTemp + ";" + data.OutPre + ";"
                + data.OilPre + ";" + data.OilTemp + ";" + data.CtrlElec + ";" + "'"+ ","
                 + "NULL" + ")";
    maxIDMap["qs"] = maxId;
    ConnectionPool::closeConnection(db);
    return sqlStr;
}
QStringList MyDBManager::jointQueryFromRaiseEquipInfo(RaiseEquipInfo data)
{
    QStringList list;
    list.clear();
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_qs";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["qs"])
        maxId = maxIDMap["qs"];
    for(int i = 0;i < 4;i++)
    {
        QString sqlStr = "";
        sqlStr = "insert into history_qs values(" + QString::number(0) + ","
                      +"'" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+ "',";
         if(i == 0)
             sqlStr += "'qs_LF'";
         else if (i == 1)
             sqlStr += "'qs_RF'";
         else if (i == 2)
             sqlStr += "'qs_LB'";
         else if (i == 3)
             sqlStr += "'qs_RB'";
         sqlStr += ",'" + data.MacPos[i] + ";" + data.MacElec[i] + ";" + data.MacSpd[i] + ";" + data.MacTemp[i] + ";"
          + data.MacDis[i] + ";" + data.OutLimit[i] + ";" + data.InLimit[i] + "'" + ","
          + "NULL" + ")";
        list.push_back(sqlStr);
    }
    maxIDMap["qs"] = maxId;
    ConnectionPool::closeConnection(db);
    return list;
}
QString MyDBManager::jointQueryFromBatteryInfo(battery data)
{
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_dp";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["dp"])
        maxId = maxIDMap["dp"];

    QString sqlStr = "";
    sqlStr = "insert into history_dp values(" + QString::number(0) + ",'"
                  + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+ "',";
     sqlStr += "'DP_battery','";
     sqlStr += data.soc + ";" + data.batteryVol + ";" + data.workElectricity + ";" + data.averageTemp + ";"
                + data.singleVol + ";" + data.singleTemp + "'" + ","
                 + "'NULL'" + ")";
    maxIDMap["dp"] = maxId;
    ConnectionPool::closeConnection(db);
    return sqlStr;
}
QString MyDBManager::jointQueryFromAPUInfo(DEAPU_L data,int flag)
{
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_dp";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["dp"])
        maxId = maxIDMap["dp"];

    QString sqlStr = "";
    sqlStr = "insert into history_dp values(" + QString::number(0) +  ",'"
            + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+ "',";
    if(flag == 0)
        sqlStr += "'DP_APUL'";
     else if(flag == 1)
        sqlStr += "'DP_APUR'";
     sqlStr += ",'" + data.runTime + ";" + data.engineSpeed + ";" + data.engineVol + ";" + data.engineElectricity + ";"
                + data.engineTemp + ";" + data.batteryVol + ";"+ data.oilLiquid + ";" ;
     for(int i = 0;i < data.keyTemp.size();i++)
     {
         QString str = data.keyTemp[i] ;
         sqlStr += str + ";";
     }
     sqlStr += QString( "',")+ QString("'NULL'") + QString(")");
    maxIDMap["dp"] = maxId;
    ConnectionPool::closeConnection(db);
    return sqlStr;
}
QString MyDBManager::jointQueryFromDCInfo(DC data,int flag)
{
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_dp";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["dp"])
        maxId = maxIDMap["dp"];

    QString sqlStr = "";
    sqlStr = "insert into history_dp values(" + QString::number(0) + ",'"
            + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+ "',";
    if(flag == 1)
        sqlStr += "'DP_DC1'";
     else if(flag == 2)
        sqlStr += "'DP_DC2'";
     sqlStr += ",'" + data.inputVol+ ";" + data.radiatorTemp + ";" + data.outputVol + ";" + data.outputEletricity + "',"+ "'NULL'" + ")";
    maxIDMap["dp"] = maxId;
    ConnectionPool::closeConnection(db);
    return sqlStr;
}
QString MyDBManager::jointQueryFromACInfo(AC data)
{
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_dp";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["dp"])
        maxId = maxIDMap["dp"];

    QString sqlStr = "";
    sqlStr = "insert into history_dp values(" + QString::number(0) + ",'"
            + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+ "',";
     sqlStr += "'DP_AC'";
     sqlStr += ",'" + data.inputVol+ ";" + data.inputElectricity + ";" + data.outputVol + ";" + data.outputEletricity + "',"+ "'NULL'" + ")";
    maxIDMap["dp"] = maxId;
    ConnectionPool::closeConnection(db);
    return sqlStr;
}
QString MyDBManager::jointQueryFromAxleInfo(axle data,int flag)
{
    int  maxId = -1;
    QString str = "select Max(HstNum) From history_dp";
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    query.exec(str);
    if(query.next())
    {
        maxId = query.value(0).toInt();
        maxId++;
    }
    else
    {
        qDebug() << str << query.lastError();
    }
    if(maxId < maxIDMap["dp"])
        maxId = maxIDMap["dp"];

    QString sqlStr = "";
    sqlStr = "insert into history_dp values(" + QString::number(0) + ",'"
                  + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + "',";
    if(flag == 1)
        sqlStr += "'DP_axle1'";
     else if(flag == 2)
        sqlStr += "'DP_axle2'";
    else if(flag == 3)
       sqlStr += "'DP_axle3'";
    else if(flag == 4)
       sqlStr += "'DP_axle4'";
    else if(flag == 5)
       sqlStr += "'DP_axle5'";
     sqlStr += ",'" + data.outputSpeed+ ";" + data.electricityTemp + ";" + data.driveInputVol + ";" + data.driveInputEletricity +  data.outputSpeed + "',"+ "'NULL'" + ")";
    maxIDMap["dp"] = maxId;
    ConnectionPool::closeConnection(db);
    return sqlStr;
}
void MyDBManager::ConnectDatabase()
{
    myDb = QSqlDatabase::addDatabase("QMYSQL");
//    qDebug()<<QSqlDatabase::drivers();
    myDb.setHostName(IPAddress);
    myDb.setDatabaseName(DatabaseName);
    myDb.setUserName(UserName);
    myDb.setPassword(Password);
    bool ok = myDb.open();
    if(ok){
          qDebug()<<QString("connected successfully!");
    }else{
           QMessageBox::warning(NULL,"warning","connect failed!");
    }
}
void MyDBManager::writeRecordInfo(RecordInfo info)
{
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    QString str = "select * from eqp where EqpID = '" + info.UniqueID + "'";
    query.exec(str);
    if(query.size() > 0)
    {
       str = "delete  from eqp where EqpID = '" + info.UniqueID + "'";
       query.exec(str);
    }
    QString sqlStr = "";
    sqlStr = "insert into eqp values(" + QString::number(0) + ",'"
                  + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + "','"
                    + info.UniqueID + "',"
                    + "'" + info.UniqueID + "',"
                    + "'" +info.EquipName + "',"
                    + "'" + info.MnfName + "',"
                    + "'" + info.MnfCode + "',"
                    + "'" + info.MnfTime + "',"
                    + "'" + info.LoadTime + "',"
                    + "'" + info.MtnTime + "',"
                    + "'" + info.EquipSta + "',"
                    + "'" + info.EquipLoc + "',"
                    + "'" + info.EquipVT + "',"
                    + "'" + info.EquipType +"')";

    query.exec(sqlStr);
    qDebug() << query.lastError();
    ConnectionPool::closeConnection(db);
}
std::vector<RecordInfo> MyDBManager::getRecordInfoVec()
{
    std::vector<RecordInfo> resultVec;
    resultVec.clear();
    QSqlDatabase db = ConnectionPool::openConnection();
   QSqlQuery query(db);
   QString str = "select * from eqp";
   query.exec(str);
    while(query.next())
    {
        RecordInfo info;
        info.EquipDate = query.value(1).toString();
        info.UniqueID = query.value(3).toString();
        info.EquipName = query.value(4).toString();
        info.MnfName = query.value(5).toString();
        info.MnfCode = query.value(6).toString();
        info.MnfTime = query.value(7).toString();
        info.LoadTime = query.value(8).toString();
        info.MtnTime = query.value(9).toString();
        info.EquipSta = query.value(10).toString();
        info.EquipLoc = query.value(11).toString();
        info.EquipType = query.value(13).toString();
        resultVec.push_back(info);
    }

   qDebug() << query.lastError();
   ConnectionPool::closeConnection(db);
    return resultVec;
}
QSqlTableModel * MyDBManager::getModel(QString tableName)
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable(QString("%1").arg(tableName));
    model->select();

    return model;
}
//
QStringList MyDBManager::getMaintanceResNum(QString actID)
{
    QStringList maintanceResNumList;
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    mutexForAddSqlString->lock();
    query.exec(QString("select DcsResource from decision where FDID in (select FDID from act where ActID = %1)").arg(actID));
    mutexForAddSqlString->unlock();
    while(query.next())
    {
        maintanceResNumList.append(query.value(0).toString());

    }
    removeListSame(&maintanceResNumList);
    qDebug()<<maintanceResNumList;
    ConnectionPool::closeConnection(db);
    return maintanceResNumList;

}

bool MyDBManager::updataAct(QString actID, QString actTime,QString actLevel,QString actLog,QString actHint,QString actRct)
{
    bool ok;
     QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query(db);
    mutexForAddSqlString->lock();
    ok = query.exec(QString("update act set ActualTime = '%1' where actID = %2 ").arg(actTime).arg(actID));
    qDebug()<<ok;
    ok = query.exec(QString("update act set ActualLevel = '%1' where actID = %2 ").arg(actLevel).arg(actID));
    ok = query.exec(QString("update act set ActualLog = '%1' where actID = %2 ").arg(actLog).arg(actID));
    ok = query.exec(QString("update act set ActualHit = '%1' where actID = %2 ").arg(actHint).arg(actID));
    ok = query.exec(QString("update act set ActRct = '%1' where actID = %2 ").arg(actRct).arg(actID));
        mutexForAddSqlString->unlock();
     ConnectionPool::closeConnection(db);
    return ok;
}

//qstringlist 删除相同项
void MyDBManager::removeListSame(QStringList *list)
{
    for (int i = 0; i < list->count(); i++)
    {
        for (int k = i + 1; k <  list->count(); k++)
        {
            if ( list->at(i) ==  list->at(k))
            {
                list->removeAt(k);
                k--;
            }
        }
    }
}


