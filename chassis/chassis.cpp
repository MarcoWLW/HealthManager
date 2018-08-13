#include "chassis.h"
#include "ui_chassis.h"
#include<QDebug>
#include <QTextCodec>

chassis::chassis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chassis)
{
    ui->setupUi(this);

}

chassis::~chassis()
{
    delete ui;
}

void chassis::upData()
{
    if(chassisinfo::instance()->getCurentData() == NULL || chassisinfo::instance()->getCurentDeapuleftData() == NULL ||
            chassisinfo::instance()->getCurentCD1Data() == NULL || chassisinfo::instance()->getCurentCD2Data() == NULL ||
            chassisinfo::instance()->getCurentACData() == NULL)
        return;
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况2
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
//display battery message
    ui->label_batterySOC->setText(chassisinfo::instance()->getCurentData()->soc);
    ui->label_batterySumVol->setText(chassisinfo::instance()->getCurentData()->batteryVol);
    ui->label_batteryElectricity->setText(chassisinfo::instance()->getCurentData()->workElectricity);
    ui->label_batteryTemp->setText(chassisinfo::instance()->getCurentData()->averageTemp);
    ui->label_batterySignalVol->setText(chassisinfo::instance()->getCurentData()->singleVol);
    ui->label_batterySignalTemp->setText(chassisinfo::instance()->getCurentData()->singleTemp);
    //display derv (柴油)left
    ui->label_runTime->setText(chassisinfo::instance()->getCurentDeapuleftData()->runTime);
    ui->label_engineSpeed->setText(chassisinfo::instance()->getCurentDeapuleftData()->engineSpeed);
    ui->label_engineVol->setText(chassisinfo::instance()->getCurentDeapuleftData()->engineVol);
    ui->label_engineElectricity->setText(chassisinfo::instance()->getCurentDeapuleftData()->engineElectricity);
    ui->label_engineTemp->setText(chassisinfo::instance()->getCurentDeapuleftData()->engineTemp);
    ui->label_batteryVol->setText(chassisinfo::instance()->getCurentDeapuleftData()->batteryVol);
    ui->label_oilLiquid->setText(chassisinfo::instance()->getCurentDeapuleftData()->oilLiquid);
     DEAPU_L * info = chassisinfo::instance()->getCurentDeapuleftData();
    ui->label_fuleOil->setText(info->keyTemp[0]);
    ui->label_engineOil->setText(info->keyTemp[1]);
    ui->label_coolingLiquid->setText(info->keyTemp[2]);
    ui->label_inverter->setText(info->keyTemp[3]);
    //display derv (柴油)right
    ui->label_runTime_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->runTime);
    ui->label_engineSpeed_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->engineSpeed);
    ui->label_engineVol_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->engineVol);
    ui->label_engineElectricity_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->engineElectricity);
    ui->label_engineTemp_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->engineTemp);
    ui->label_batteryVol_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->batteryVol);
    ui->label_oilLiquid_2->setText(chassisinfo::instance()->getCurentDeapuRightData()->oilLiquid);
    info = chassisinfo::instance()->getCurentDeapuRightData();
     ui->label_fuleOil_2->setText(info->keyTemp[0]);
     ui->label_engineOil_2->setText(info->keyTemp[1]);
     ui->label_coolingLiquid_2->setText(info->keyTemp[2]);
     ui->label_inverter_2->setText(info->keyTemp[3]);

    //display DC1 message
    ui->label_inputVol->setText(chassisinfo::instance()->getCurentCD1Data()->inputVol);
    ui->label_radiatorTemp->setText(chassisinfo::instance()->getCurentCD1Data()->radiatorTemp);
    ui->label_outputElectricity->setText(chassisinfo::instance()->getCurentCD1Data()->outputEletricity);
    ui->label_outputVol->setText(chassisinfo::instance()->getCurentCD1Data()->outputVol);

    //display DC2 message
    ui->label_inputVol_2->setText(chassisinfo::instance()->getCurentCD2Data()->inputVol);
    ui->label_radiatorTemp_2->setText(chassisinfo::instance()->getCurentCD2Data()->radiatorTemp);
    ui->label_outputElectricity_2->setText(chassisinfo::instance()->getCurentCD2Data()->outputEletricity);
    ui->label_outputVol_2->setText(chassisinfo::instance()->getCurentCD2Data()->outputVol);

    //display AC message
    ui->label_inputVolAC->setText(chassisinfo::instance()->getCurentACData()->inputVol);
    ui->label_inputEletricity->setText(chassisinfo::instance()->getCurentACData()->inputElectricity);
    ui->label_outputVolAC->setText(chassisinfo::instance()->getCurentACData()->outputVol);
    ui->label_outputElectricityAC->setText(chassisinfo::instance()->getCurentACData()->outputEletricity);

    //display axle message
    ui->textBrowser_1->setText("I轴数据：\n输出转速："+chassisinfo::instance()->getCurentAxleData()->outputSpeed+"\n"+
                               "电机温度："+chassisinfo::instance()->getCurentAxleData()->electricityTemp+"\n"+
                               "驱动器电压："+chassisinfo::instance()->getCurentAxleData()->driveInputVol+"\n"+
                               "驱动器电流："+chassisinfo::instance()->getCurentAxleData()->driveInputEletricity+"\n"+
                               "逆变器温度："+chassisinfo::instance()->getCurentAxleData()->inverterTemp+"\n");
    //display axle2 message
    ui->textBrowser_2->setText("I轴数据：\n输出转速："+chassisinfo::instance()->getCurentAxle2Data()->outputSpeed+"\n"+
                               "电机温度："+chassisinfo::instance()->getCurentAxle2Data()->electricityTemp+"\n"+
                               "驱动器电压："+chassisinfo::instance()->getCurentAxle2Data()->driveInputVol+"\n"+
                               "驱动器电流："+chassisinfo::instance()->getCurentAxle2Data()->driveInputEletricity+"\n"+
                               "逆变器温度："+chassisinfo::instance()->getCurentAxle2Data()->inverterTemp+"\n");
    //display axle3 message
    ui->textBrowser_3->setText("I轴数据：\n输出转速："+chassisinfo::instance()->getCurentAxle3Data()->outputSpeed+"\n"+
                               "电机温度："+chassisinfo::instance()->getCurentAxle3Data()->electricityTemp+"\n"+
                               "驱动器电压："+chassisinfo::instance()->getCurentAxle3Data()->driveInputVol+"\n"+
                               "驱动器电流："+chassisinfo::instance()->getCurentAxle3Data()->driveInputEletricity+"\n"+
                               "逆变器温度："+chassisinfo::instance()->getCurentAxle3Data()->inverterTemp+"\n");
    //display axle4 message
    ui->textBrowser_4->setText("I轴数据：\n输出转速："+chassisinfo::instance()->getCurentAxle4Data()->outputSpeed+"\n"+
                               "电机温度："+chassisinfo::instance()->getCurentAxle4Data()->electricityTemp+"\n"+
                               "驱动器电压："+chassisinfo::instance()->getCurentAxle4Data()->driveInputVol+"\n"+
                               "驱动器电流："+chassisinfo::instance()->getCurentAxle4Data()->driveInputEletricity+"\n"+
                               "逆变器温度："+chassisinfo::instance()->getCurentAxle4Data()->inverterTemp+"\n");
    //display axle5 message
    ui->textBrowser_5->setText("I轴数据：\n输出转速："+chassisinfo::instance()->getCurentAxle5Data()->outputSpeed+"\n"+
                               "电机温度："+chassisinfo::instance()->getCurentAxle5Data()->electricityTemp+"\n"+
                               "驱动器电压："+chassisinfo::instance()->getCurentAxle5Data()->driveInputVol+"\n"+
                               "驱动器电流："+chassisinfo::instance()->getCurentAxle5Data()->driveInputEletricity+"\n"+
                               "逆变器温度："+chassisinfo::instance()->getCurentAxle5Data()->inverterTemp+"\n");

}
