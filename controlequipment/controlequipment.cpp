#include "controlequipment.h"
#include "ui_controlequipment.h"
#include <QDebug>
#include <QTextCodec>

controlEquipment::controlEquipment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::controlEquipment)
{
    ui->setupUi(this);
}

controlEquipment::~controlEquipment()
{
    delete ui;
}

void controlEquipment::updataControlEquipment()
{
    if(controlequipmentinfo::instance()->getCurenCalculateMsg() == NULL ||controlequipmentinfo::instance()->getCurenCalculate2Msg() == NULL
            ||controlequipmentinfo::instance()->getCurenCalculate3Msg() == NULL)
        return;
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况2
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    //display  calculate message1
    ui->label_calculateState1->setText(controlequipmentinfo::instance()->getCurenCalculateMsg()->reignState);
    ui->label_calculatePowerState1->setText(controlequipmentinfo::instance()->getCurenCalculateMsg()->powerState);
    ui->label_calculateCpuTemp1->setText(controlequipmentinfo::instance()->getCurenCalculateMsg()->cpuTemp);
    ui->label_calculateCardVol1->setText(controlequipmentinfo::instance()->getCurenCalculateMsg()->cardVol);
    ui->label_calculateNetworkChipVol1->setText(controlequipmentinfo::instance()->getCurenCalculateMsg()->networkVol);
    ui->label_calculateCpuVol->setText(controlequipmentinfo::instance()->getCurenCalculateMsg()->cpuVol);
    //display  calculate message2
    ui->label_calculateState1_2->setText(controlequipmentinfo::instance()->getCurenCalculate2Msg()->reignState);
    ui->label_calculatePowerState1_2->setText(controlequipmentinfo::instance()->getCurenCalculate2Msg()->powerState);
    ui->label_calculateCpuTemp1_2->setText(controlequipmentinfo::instance()->getCurenCalculate2Msg()->cpuTemp);
    ui->label_calculateCardVol1_2->setText(controlequipmentinfo::instance()->getCurenCalculate2Msg()->cardVol);
    ui->label_calculateNetworkChipVol1_2->setText(controlequipmentinfo::instance()->getCurenCalculate2Msg()->networkVol);
    ui->label_calculateCpuVol_2->setText(controlequipmentinfo::instance()->getCurenCalculate2Msg()->cpuVol);
    //display  calculate message3
    ui->label_calculateState1_3->setText(controlequipmentinfo::instance()->getCurenCalculate3Msg()->reignState);
    ui->label_calculatePowerState1_3->setText(controlequipmentinfo::instance()->getCurenCalculate3Msg()->powerState);
    ui->label_calculateCpuTemp1_3->setText(controlequipmentinfo::instance()->getCurenCalculate3Msg()->cpuTemp);
    ui->label_calculateCardVol1_3->setText(controlequipmentinfo::instance()->getCurenCalculate3Msg()->cardVol);
    ui->label_calculateNetworkChipVol1_3->setText(controlequipmentinfo::instance()->getCurenCalculate3Msg()->networkVol);
    ui->label_calculateCpuVol_3->setText(controlequipmentinfo::instance()->getCurenCalculate3Msg()->cpuVol);
    //display calculate exchange unit message
    ui->label_exchangeState->setText(controlequipmentinfo::instance()->getCurentExchange()->reignState);
    ui->label_powerStateExchange->setText(controlequipmentinfo::instance()->getCurentExchange()->powerState);
    ui->label_mainboardTempExchange->setText(controlequipmentinfo::instance()->getCurentExchange()->mainboardTemp);
    ui->label_cardVolExchange->setText(controlequipmentinfo::instance()->getCurentExchange()->cardVol);
    ui->label_cpuVolExchange->setText(controlequipmentinfo::instance()->getCurentExchange()->cpuVol);
    ui->label_phyVolExchange->setText(controlequipmentinfo::instance()->getCurentExchange()->phyVol);

    //display calculate exchange2 unit message
    ui->label_exchangeState_2->setText(controlequipmentinfo::instance()->getCurentExchange2()->reignState);
    ui->label_powerStateExchange_2->setText(controlequipmentinfo::instance()->getCurentExchange2()->powerState);
    ui->label_mainboardTempExchange_2->setText(controlequipmentinfo::instance()->getCurentExchange2()->mainboardTemp);
    ui->label_cardVolExchange_2->setText(controlequipmentinfo::instance()->getCurentExchange()->cardVol);
    ui->label_cpuVolExchange_2->setText(controlequipmentinfo::instance()->getCurentExchange2()->cpuVol);
    ui->label_phyVolExchange_2->setText(controlequipmentinfo::instance()->getCurentExchange2()->phyVol);

    //display calculate store
    ui->label_storeState->setText(controlequipmentinfo::instance()->getCurentStore()->reignState);
    ui->label_storePowerState->setText(controlequipmentinfo::instance()->getCurentStore()->powerState);
    ui->label_storeCpuTemp->setText(controlequipmentinfo::instance()->getCurentStore()->cpuTemp);
    ui->label_storeCardVol->setText(controlequipmentinfo::instance()->getCurentStore()->cardVol);
    ui->label_storeNetworkVol->setText(controlequipmentinfo::instance()->getCurentStore()->networkVol);
    ui->label_storeControlVol->setText(controlequipmentinfo::instance()->getCurentStore()->controlVol);

    //diplay interface equipment message
    ui->label_inputVol->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg()->inputVol);
    ui->label_interfaceCpuTemp->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg()->cpuTemp);
    ui->label_interfaceBoardVol->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg()->boardVol);
    ui->label_interfaceBiosVol->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg()->BiosVol);
    //diplay interface equipment message2
    ui->label_inputVol_2->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg2()->inputVol);
    ui->label_interfaceCpuTemp_2->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg2()->cpuTemp);
    ui->label_interfaceBoardVol_2->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg2()->boardVol);
    ui->label_interfaceBiosVol_2->setText(controlequipmentinfo::instance()->getCurentInterfaceMsg2()->BiosVol);



}
