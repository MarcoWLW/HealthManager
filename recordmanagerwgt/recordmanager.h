#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H
#include <QString>
#include "vector"
#include <stdlib.h>
#include "stddef.h"
#include <stdio.h>
#include "markup/Markup.h"
#include "qstringlist.h"
#include <qtextcodec.h>
#include <QDebug>
struct RecordInfo
{
    QString UniqueID;    //唯一标识
    QString EquipName; //设备名称
    QString EquipNum;  //设备数量
    QString EquipLoc;    //设备位置
    QString EquipType;  //设备类型
    QString EquipDate;  //插入时间
    QString LabelID;         //标签编号
    QString MnfName;    //承制单位
    QString MnfCode;    //出厂编号
    QString MnfTime;    //出厂日期
    QString LoadTime;   //装车日期
    QString MtnTime;    //最近保养日期
    QString EquipSta;   //所处状态
    QString EquipVT;    //插入时间？
      RecordInfo()
      {
          UniqueID = "-1";
          EquipName = "";
          EquipNum = "";
          EquipLoc= "";
          EquipType = "";
          EquipDate = "";
          LabelID = "";
          MnfName = "";
          MnfCode = "";
          MnfTime = "";
          LoadTime = "";
          MtnTime = "";
          EquipSta = "";
          EquipVT = "";
      }
};
class RecordManager
{
public:
    static RecordManager *instance(){static RecordManager *p = new RecordManager;return p;}
    /**TEST function**/
    void getRecordInfoFromXML();
    void addRecordInfo(RecordInfo info){recordInfoVec.push_back(info);}
    void modifyRecordInfo(RecordInfo info);
    RecordInfo& findRecordInfoByID(QString nID);

    std::vector<RecordInfo> &getRecordInfoVec(){return recordInfoVec;}
private:
    RecordInfo tmpInfo;
    RecordManager();
    std::vector<RecordInfo> recordInfoVec;
};

#endif // RECORDMANAGER_H
