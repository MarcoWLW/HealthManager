#include "dataacquisitionthread.h"
#include "string.h"
#include <QDebug>
#include <iostream>
#include <stdlib.h>
#include <QTextCodec>
DataAcquisitionThread::DataAcquisitionThread()
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//设置编码格式
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
}
void DataAcquisitionThread::run()
{

    /**读取数据*/
    while(1)
    {
        /**get data*/
        GetRaiseEquipData();
        getBatteryMessage();
        getVerticalEquipData();
        getDeapuLeftmsg();
        getDeapuRightMsg();
        getDC1Msg();
        getDC2Msg();
        getACMsg();
        getAxleMsg();
        getCalculateMsg();
        getExchangeMsg();
        getStoreMsg();
        getInterfaceMsg();
        /***/
        msleep(500);
    }
}
void DataAcquisitionThread::GetRaiseEquipData()
{
    /**WLW TODO:we should get data from internet */
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        if(xml.FindElem((MCD_PCSZ)"system"))
        {
            xml.IntoElem();
            if(xml.FindElem((MCD_PCSZ)"升车设备"))
            {
                RaiseEquipInfo *info = new RaiseEquipInfo;
                QStringList list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"回收极限限位")).split(',');
                info->InLimit.assign(list.begin(),list.end());
                list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"伸出极限限位")).split(',');
                info->OutLimit.assign(list.begin(),list.end());
                list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机位置")).split(',');
                info->MacPos.assign(list.begin(),list.end());
                list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机电流")).split(',');
                info->MacElec.assign(list.begin(),list.end());
                list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机转速")).split(',');
                info->MacSpd.assign(list.begin(),list.end());
                list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机温度")).split(',');
                info->MacTemp.assign(list.begin(),list.end());
                list =  QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"支腿行程")).split(',');
                info->MacDis.assign(list.begin(),list.end());
               RaiseEquip::instance()->SetCurrentData(info);
               MyDBManager::instance()->addSaveInfoToList<RaiseEquipInfo>(*info);
            }
        }
    }
    /***/
}
void DataAcquisitionThread::getVerticalEquipData()
{
    /**WLW TODO:we should get data from internet */
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        if(xml.FindElem((MCD_PCSZ)"system"))
        {
            xml.IntoElem();
            if(xml.FindElem((MCD_PCSZ)"起竖设备"))
            {
                /***/
                VerticalEquipInfo *info = new VerticalEquipInfo;
                info->CtrlElec = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"控制电流"));
                info->MacSpd = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机转速"));
                info->MacTemp = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机温度"));
                info->OutPre = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"出油口压力"));
                info->OilPre = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"油液压力"));
                info->OilTemp = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"油液温度"));
                info->MacElec = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"电机电流"));
                VerticalEquip::instance()->SetCurrentData(info);
                MyDBManager::instance()->addSaveInfoToList(*info);
            }
        }
    }
}
 //get chassis battery message
void DataAcquisitionThread::getBatteryMessage()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"动力电池组"))
            {
                struct battery *info = new battery;

                xml.IntoElem();
                xml.FindChildElem("电池组soc");
               info->soc = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电池组总电压");
                info->batteryVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("工作电流");
                info->workElectricity = QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"状态"))+QString::fromUtf8("、")+ QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("平均温度");
                info->averageTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("单体电压");
                info->singleVol = QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"最高"))+QString::fromUtf8("、")+QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"最低"));
                xml.FindChildElem("单体电流");
                info->singleTemp = QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"最高"))+QString::fromUtf8("、")+QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"最低"));
                chassisinfo::instance()->setCurentMsg(info);
            }
        }
    }
}
//get DEAPU left message
void DataAcquisitionThread::getDeapuLeftmsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"柴电APU左"))
            {
                struct DEAPU_L *info = new DEAPU_L;
                QStringList list;
                xml.IntoElem();
                xml.FindChildElem("累计运行时间");
                info->runTime = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发动机转速");
                info->engineSpeed = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发电机输出电压");
                info->engineVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发电机输出电流");
                info->engineElectricity = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发电机温度");
                info->engineTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电瓶电压");
                info->batteryVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("机油液位");
                info->oilLiquid = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("关键温度");
                xml.IntoElem();
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"燃油")));
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"机油")));
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"冷却液")));
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"逆变器")));
                info->keyTemp.assign(list.begin(),list.end());
                chassisinfo::instance()->setCurentDeapuMsg(info);
            }
        }
    }
}
//get DEAPU right message
void DataAcquisitionThread::getDeapuRightMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"柴电APU右"))
            {
                struct DEAPU_L *info = new DEAPU_L;
                QStringList list;
                xml.IntoElem();
                xml.FindChildElem("累计运行时间");
                info->runTime = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发动机转速");
                info->engineSpeed = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发电机输出电压");
                info->engineVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发电机输出电流");
                info->engineElectricity = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("发电机温度");
                info->engineTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电瓶电压");
                info->batteryVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("机油液位");
                info->oilLiquid = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("关键温度");
                xml.IntoElem();
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"燃油")));
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"机油")));
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"冷却液")));
                list.append(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"逆变器")));
                info->keyTemp.assign(list.begin(),list.end());
                chassisinfo::instance()->setCurentDeapuRightMsg(info);
            }
        }
    }
}
//
void DataAcquisitionThread::getDC1Msg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"DC"))
            {
                xml.IntoElem();
                if(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"id")) == "1")
                {
                    struct DC*info = new DC;
                    xml.FindChildElem("输入电压");
                    info->inputVol = QString::fromStdString(xml.GetChildData());
                    xml.FindChildElem("散热器温度");
                    info->radiatorTemp = QString::fromStdString(xml.GetChildData());
                    xml.FindChildElem("输出电压");
                    info->outputVol = QString::fromStdString(xml.GetChildData());
                    xml.FindChildElem("输出电流");
                    info->outputEletricity = QString::fromStdString(xml.GetChildData());
                    chassisinfo::instance()->setCurentDC1Msg(info);
                }
            }
        }
    }
}
void DataAcquisitionThread::getDC2Msg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"DC"))
            {
                xml.IntoElem();
                if(QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"id")) == "2")
                {
                    struct DC *info = new DC;
                    xml.FindChildElem("输入电压");
                    info->inputVol = QString::fromStdString(xml.GetChildData());
                    xml.FindChildElem("散热器温度");
                    info->radiatorTemp = QString::fromStdString(xml.GetChildData());
                    xml.FindChildElem("输出电压");
                    info->outputVol = QString::fromStdString(xml.GetChildData());
                    xml.FindChildElem("输出电流");
                    info->outputEletricity = QString::fromStdString(xml.GetChildData());
                    chassisinfo::instance()->setCurentDC2Msg(info);
                }
                xml.OutOfElem();
            }
        }
    }
}
//get AC message
void DataAcquisitionThread::getACMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"AC"))
            {
                xml.IntoElem();
                struct AC *info = new AC;
                xml.FindChildElem("输入电压");
                info->inputVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("输入电流");
                info->inputElectricity = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("输出电压");
                info->outputVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("输出电流");
                info->outputEletricity = QString::fromStdString(xml.GetChildData());
                chassisinfo::instance()->setCurentACMsg(info);
            }
        }
    }
}
//get axle message
void DataAcquisitionThread::getAxleMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"底盘"))
        {
            xml.IntoElem();
            while (xml.FindChildElem((MCD_CSTR)"轴"))
            {
                xml.IntoElem();
                struct axle *info = new axle;
                xml.FindChildElem("输出转速");
                info->outputSpeed = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电机温度");
                info->electricityTemp = QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"左") + "/"+
                                                               xml.GetChildAttrib((MCD_PCSZ)"右"));
                xml.FindChildElem("驱动器输入电压");
                info->driveInputVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("驱动器输入电流");
                info->driveInputEletricity = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("逆变器温度");
                info->inverterTemp = QString::fromStdString(xml.GetChildAttrib((MCD_PCSZ)"左") + "/"+
                                                            xml.GetChildAttrib((MCD_PCSZ)"右"));

                QString tmp = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"id"));
                if(tmp == "1")
                {
                    chassisinfo::instance()->setCurentAxleMsg(info);
                }
                else if(tmp == "2")
                {
                    chassisinfo::instance()->setCurentAxleMsg2(info);
                }
                else if(tmp == "3")
                {
                    chassisinfo::instance()->setCurentAxleMsg3(info);
                }
                else if(tmp == "4")
                {
                    chassisinfo::instance()->setCurentAxleMsg4(info);
                }
                else if(tmp == "5")
                {
                    chassisinfo::instance()->setCurentAxleMsg5(info);
                }

                xml.OutOfElem();
            }
        }
    }
}

void DataAcquisitionThread::getCalculateMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"控制设备"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"主机计算单元"))
            {
                xml.IntoElem();

                struct calculateUnit  * info = new calculateUnit;
                xml.FindChildElem("在位状态");
                info->reignState = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电源状态");
                info->powerState = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("CPU温度");
                info->cpuTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("板卡供电电压");
                info->cardVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("网络芯片供电电压");
                info->networkVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("CPU供电电压");
                info->cpuVol = QString::fromStdString(xml.GetChildData());

                QString tmp = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"id"));
                if(tmp == "1")
                {
                    controlequipmentinfo::instance()->setCurentCalculateMsg(info);
                }
                else if(tmp == "2")
                {
                    controlequipmentinfo::instance()->setCurentCalculate2Msg(info);
                }
                else if(tmp == "3")
                {
                    controlequipmentinfo::instance()->setCurentCalculate3Msg(info);
                }
                xml.OutOfElem();

            }
        }
    }
}
//
void DataAcquisitionThread::getExchangeMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"控制设备"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"主机交换单元"))
            {
                xml.IntoElem();

                struct calculateExchange * info = new calculateExchange;
                xml.FindChildElem("在位状态");
                info->reignState = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电源状态");
                info->powerState = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("主板温度");
                info->mainboardTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("板卡供电电压");
                info->cardVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("CPU供电电压");
                info->cpuVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("PHY供电电压");
                info->phyVol = QString::fromStdString(xml.GetChildData());

                QString tmp = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"id"));
                if(tmp == "1")
                {
                    controlequipmentinfo::instance()->setCurentExchange(info);
                }
                else if(tmp == "2")
                {
                    controlequipmentinfo::instance()->setCurentExchange2(info);
                }
                xml.OutOfElem();
            }
        }
    }
}
//
void DataAcquisitionThread::getStoreMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"控制设备"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"主机储存单元"))
            {
                xml.IntoElem();

                struct calculateStore * info = new calculateStore;
                xml.FindChildElem("在位状态");
                info->reignState = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("电源状态");
                info->powerState = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("CPU温度");
                info->cpuTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("板卡供电电压");
                info->cardVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("网络芯片供电电压");
                info->networkVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("控制器供电电压");
                info->controlVol = QString::fromStdString(xml.GetChildData());
                controlequipmentinfo::instance()->setCurentStore(info);
            }
        }
    }
}

void DataAcquisitionThread::getInterfaceMsg()
{
    CMarkup xml;
    if(xml.Load("./data/healthmanager.xml"))
    {
        while(xml.FindChildElem((MCD_CSTR)"控制设备"))
        {
            xml.IntoElem();
            while(xml.FindChildElem((MCD_CSTR)"信息接口设备"))
            {
                xml.IntoElem();

                struct interfaceEquip * info = new interfaceEquip;
                xml.FindChildElem("输入电压");
                info->inputVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("cpu温度");
                info->cpuTemp = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("主板供电电压");
                info->boardVol = QString::fromStdString(xml.GetChildData());
                xml.FindChildElem("BIOS电池电压");
                info->BiosVol = QString::fromStdString(xml.GetChildData());

                QString tmp = QString::fromStdString(xml.GetAttrib((MCD_PCSZ)"id"));
                if(tmp == "1")
                {
                    controlequipmentinfo::instance()->setCurentInterfaceMsg(info);
                }
                else if(tmp == "2")
                {
                    controlequipmentinfo::instance()->setCurentInterfaceMsg2(info);
                }
                xml.OutOfElem();
            }
        }
    }
}




