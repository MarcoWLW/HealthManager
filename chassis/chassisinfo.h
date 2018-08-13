#ifndef CHASSISINFO_H
#define CHASSISINFO_H

#include <vector>
#include <QString>

//battery message
struct battery
{
    QString soc;
    QString batteryVol;
    QString workElectricity;
    QString averageTemp;
    QString singleVol;
    QString singleTemp;
};
struct DEAPU_L
{
    QString runTime;//运行时间
    QString engineSpeed;//发动机转速
    QString engineVol;//发动机输出电压
    QString engineElectricity;//发动机输出电流
    QString engineTemp;//发动机温度
    QString batteryVol;//电瓶电压
    QString oilLiquid;//机油液位
    std::vector<QString> keyTemp;//关键温度
};
struct DC
{
    QString inputVol;
    QString radiatorTemp;//散热器温度
    QString outputVol;
    QString outputEletricity;
};
struct AC
{
    QString inputVol;
    QString inputElectricity;
    QString outputVol;
    QString outputEletricity;
};
//轴
struct axle
{
    QString outputSpeed;
    QString electricityTemp;
    QString driveInputVol;
    QString driveInputEletricity;
    QString inverterTemp;

};

class chassisinfo
{
public:
    static chassisinfo *instance(){static chassisinfo *p = new chassisinfo;return p;}
    void setCurentMsg(battery *info){batteryMessageCurent = info;}
    battery *getCurentData(){return batteryMessageCurent;}

    void setCurentDeapuMsg(DEAPU_L *info){deapuLeftMsg = info;}
    DEAPU_L *getCurentDeapuleftData(){return deapuLeftMsg;}

    void setCurentDeapuRightMsg(DEAPU_L *info){deapuRightMsg = info;}
    DEAPU_L *getCurentDeapuRightData(){return deapuRightMsg;}

    void setCurentDC1Msg(DC *info){DC1 = info;}
    DC * getCurentCD1Data(){return DC1;}

    void setCurentDC2Msg(DC *info){DC2 = info;}
    DC * getCurentCD2Data(){return DC2;}

    void setCurentACMsg(AC *info){acMsg = info;}
    AC * getCurentACData(){return acMsg;}

    void setCurentAxleMsg(axle *info){axleMsg = info;}
    axle * getCurentAxleData(){return axleMsg;}

    void setCurentAxleMsg2(axle *info){axleMsg2 = info;}
    axle * getCurentAxle2Data(){return axleMsg2;}

    void setCurentAxleMsg3(axle *info){axleMsg3 = info;}
    axle * getCurentAxle3Data(){return axleMsg3;}

    void setCurentAxleMsg4(axle *info){axleMsg4 = info;}
    axle * getCurentAxle4Data(){return axleMsg4;}

    void setCurentAxleMsg5(axle *info){axleMsg5 = info;}
    axle * getCurentAxle5Data(){return axleMsg5;}

private:
    battery * batteryMessageCurent;
    DEAPU_L * deapuLeftMsg;
    DEAPU_L * deapuRightMsg;
    DC * DC1;
    DC * DC2;
    AC * acMsg;
    axle * axleMsg;
    axle * axleMsg2;
    axle * axleMsg3;
    axle * axleMsg4;
    axle * axleMsg5;
   // std::vector<battery> hisDataVec;
    chassisinfo();
};

#endif // CHASSISINFO_H
