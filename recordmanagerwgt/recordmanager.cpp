 #include "recordmanager.h"

RecordManager::RecordManager()
{
    recordInfoVec.clear();
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况2
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
}
void RecordManager::getRecordInfoFromXML()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        if(xml.FindElem((MCD_PCSZ)"system"))
        {
            xml.IntoElem();
            while(xml.FindElem((MCD_PCSZ)"标签信息"))
            {
                RecordInfo info;
                info.UniqueID = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"ID"));
                info.EquipDate = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"插入时间"));
                info.EquipName = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"设备名称"));
                info.EquipLoc = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"设备位置"));
                info.EquipType = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"设备类型"));
                info.LabelID = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"标签编号"));
                info.MnfName = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"承制单位"));
                info.MnfCode = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"出厂编号"));
                info.MnfTime = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"出厂日期"));
                info.LoadTime = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"装车日期"));
                info.MtnTime = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"最近保养日期"));
                info.EquipSta = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"所处状态"));
//                RecordInfo resultInfo = RecordManager::instance()->findRecordInfoByID(info.UniqueID);
//                qDebug() <<RecordManager::instance()->findRecordInfoByID(info.UniqueID).UniqueID ;
                if(RecordManager::instance()->findRecordInfoByID(info.UniqueID).UniqueID == "-1")
                {
                    RecordManager::instance()->addRecordInfo(info);
                }
            }
        }
    }
    /***/
}
void RecordManager::modifyRecordInfo(RecordInfo info)
{
    findRecordInfoByID(info.UniqueID) = info;
}
RecordInfo& RecordManager::findRecordInfoByID(QString nID)
{
    for(int i = 0;i < recordInfoVec.size();i++)
    {
        if(recordInfoVec[i].UniqueID == nID)
            return recordInfoVec[i];
    }
    return tmpInfo;
}
