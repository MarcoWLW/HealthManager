#include "raiseequipwgt.h"
#include "ui_raiseequipwgt.h"

RaiseEquipWgt::RaiseEquipWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaiseEquipWgt)
{
    ui->setupUi(this);
}
void RaiseEquipWgt::UpdateData()
{
    if(RaiseEquip::instance()->GetCurentData() == NULL)
        return;
//    RaiseEquipInfo data = *(RaiseEquip::instance()->GetCurentData());
//   addSaveInfoToList<RaiseEquipInfo>(data);
    /**WLW TODO: add the units of data when update or display*/
    ui->EditInLimitLF->setText(QString::fromUtf8("回收极限限位：") + RaiseEquip::instance()->GetCurentData()->InLimit[0] + QString(""));
    ui->EditInLimitRF->setText(QString::fromUtf8("回收极限限位：") + RaiseEquip::instance()->GetCurentData()->InLimit[1] + QString(""));
    ui->EditInLimitLB->setText(QString::fromUtf8("回收极限限位：") + RaiseEquip::instance()->GetCurentData()->InLimit[2] + QString(""));
    ui->EditInLimitRB->setText(QString::fromUtf8("回收极限限位：") + RaiseEquip::instance()->GetCurentData()->InLimit[3] + QString(""));

    ui->EditOutLimitLF->setText(QString::fromUtf8("伸出极限限位：") + RaiseEquip::instance()->GetCurentData()->OutLimit[0] + QString(""));
    ui->EditOutLimitRF->setText(QString::fromUtf8("伸出极限限位：") + RaiseEquip::instance()->GetCurentData()->OutLimit[1] + QString(""));
    ui->EditOutLimitLB->setText(QString::fromUtf8("伸出极限限位：") + RaiseEquip::instance()->GetCurentData()->OutLimit[2] + QString(""));
    ui->EditOutLimitRB->setText(QString::fromUtf8("伸出极限限位：") + RaiseEquip::instance()->GetCurentData()->OutLimit[3] + QString(""));

    ui->EditMacSpdLF->setText(QString::fromUtf8("电机转速：") + RaiseEquip::instance()->GetCurentData()->MacSpd[0] + QString(""));
    ui->EditMacSpdRF->setText(QString::fromUtf8("电机转速：") + RaiseEquip::instance()->GetCurentData()->MacSpd[1] + QString(""));
    ui->EditMacSpdLB->setText(QString::fromUtf8("电机转速：") + RaiseEquip::instance()->GetCurentData()->MacSpd[2] + QString(""));
    ui->EditMacSpdRB->setText(QString::fromUtf8("电机转速：") + RaiseEquip::instance()->GetCurentData()->MacSpd[3] + QString(""));

    ui->EditMacPosLF->setText(QString::fromUtf8("电机位置：") + RaiseEquip::instance()->GetCurentData()->MacPos[0] + QString(""));
    ui->EditMacPosRF->setText(QString::fromUtf8("电机位置：") + RaiseEquip::instance()->GetCurentData()->MacPos[1] + QString(""));
    ui->EditMacPosLB->setText(QString::fromUtf8("电机位置：") + RaiseEquip::instance()->GetCurentData()->MacPos[2] + QString(""));
    ui->EditMacPosRB->setText(QString::fromUtf8("电机位置：") + RaiseEquip::instance()->GetCurentData()->MacPos[3] + QString(""));

    ui->EditMacEleLF->setText(QString::fromUtf8("电机电流：") + RaiseEquip::instance()->GetCurentData()->MacElec[0] + QString(""));
    ui->EditMacEleRF->setText(QString::fromUtf8("电机电流：") + RaiseEquip::instance()->GetCurentData()->MacElec[1] + QString(""));
    ui->EditMacEleLB->setText(QString::fromUtf8("电机电流：") + RaiseEquip::instance()->GetCurentData()->MacElec[2] + QString(""));
    ui->EditMacEleRB->setText(QString::fromUtf8("电机电流：") + RaiseEquip::instance()->GetCurentData()->MacElec[3] + QString(""));

    ui->EditMacTempLF->setText(QString::fromUtf8("电机温度：") + RaiseEquip::instance()->GetCurentData()->MacTemp[0] + QString(""));
    ui->EditMacTempRF->setText(QString::fromUtf8("电机温度：") + RaiseEquip::instance()->GetCurentData()->MacTemp[1] + QString(""));
    ui->EditMacTempLB->setText(QString::fromUtf8("电机温度：") + RaiseEquip::instance()->GetCurentData()->MacTemp[2] + QString(""));
    ui->EditMacTempRB->setText(QString::fromUtf8("电机温度：") + RaiseEquip::instance()->GetCurentData()->MacTemp[3] + QString(""));

    ui->EditLegDisLF->setText(QString::fromUtf8("支腿行程：") + RaiseEquip::instance()->GetCurentData()->MacDis[0] + QString(""));
    ui->EditLegDisRF->setText(QString::fromUtf8("支腿行程：") + RaiseEquip::instance()->GetCurentData()->MacDis[1] + QString(""));
    ui->EditLegDisLB->setText(QString::fromUtf8("支腿行程：") + RaiseEquip::instance()->GetCurentData()->MacDis[2] + QString(""));
    ui->EditLegDisRB->setText(QString::fromUtf8("支腿行程：") + RaiseEquip::instance()->GetCurentData()->MacDis[3] + QString(""));

}
RaiseEquipWgt::~RaiseEquipWgt()
{
    delete ui;
}
