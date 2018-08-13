#ifndef CONTROLEQUIPMENTINFO_H
#define CONTROLEQUIPMENTINFO_H

#include <QString>
//calculate(计算) unit message
struct calculateUnit
{
    QString reignState;
    QString powerState;
    QString cpuTemp;
    QString cardVol;
    QString networkVol;
    QString cpuVol;
};
//calculate store message
struct calculateStore
{
    QString reignState;
    QString powerState;
    QString cpuTemp;
    QString cardVol;
    QString networkVol;
    QString controlVol;
};
//calculate exchange message
struct calculateExchange
{
    QString reignState;
    QString powerState;
    QString mainboardTemp;
    QString cardVol;
    QString cpuVol;
    QString phyVol;
};
//information interface message
struct interfaceEquip
{
    QString inputVol;
    QString cpuTemp;
    QString boardVol;
    QString BiosVol;
};


class controlequipmentinfo
{    
public:
    static controlequipmentinfo * instance(){static controlequipmentinfo *p = new controlequipmentinfo;return p;}

    void setCurentCalculateMsg(calculateUnit * info){calculateUnitInfo = info;}
    calculateUnit * getCurenCalculateMsg(){return calculateUnitInfo;}

    void setCurentCalculate2Msg(calculateUnit * info){calculateUnitInfo2 = info;}
    calculateUnit * getCurenCalculate2Msg(){return calculateUnitInfo2;}

    void setCurentCalculate3Msg(calculateUnit * info){calculateUnitInfo3 = info;}
    calculateUnit * getCurenCalculate3Msg(){return calculateUnitInfo3;}

    void setCurentExchange(calculateExchange * info){calculateExcInfo = info;}
    calculateExchange * getCurentExchange(){return calculateExcInfo;}

    void setCurentExchange2(calculateExchange * info){calculateExcInfo = info;}
    calculateExchange * getCurentExchange2(){return calculateExcInfo;}

    void setCurentStore (calculateStore * info){caluclateStore = info;}
    calculateStore * getCurentStore(){return caluclateStore;}

    void setCurentInterfaceMsg(interfaceEquip * info){interfaceEquipMsg = info;}
    interfaceEquip * getCurentInterfaceMsg(){return interfaceEquipMsg;}

    void setCurentInterfaceMsg2(interfaceEquip * info){interfaceEquipMsg2 = info;}
    interfaceEquip * getCurentInterfaceMsg2(){return interfaceEquipMsg2;}

private:

    calculateUnit * calculateUnitInfo;
    calculateUnit * calculateUnitInfo2;
    calculateUnit * calculateUnitInfo3;
    calculateExchange * calculateExcInfo;
    calculateExchange * calculateExcInfo2;
    calculateStore * caluclateStore;
    interfaceEquip * interfaceEquipMsg;
    interfaceEquip * interfaceEquipMsg2;


    controlequipmentinfo();
};

#endif // CONTROLEQUIPMENTINFO_H
