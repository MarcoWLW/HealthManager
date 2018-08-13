#include "verticalequipwgt.h"
#include "ui_verticalequipwgt.h"

VerticalEquipWgt::VerticalEquipWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerticalEquipWgt)
{
    ui->setupUi(this);
}
void VerticalEquipWgt::updateData()
{
    if(VerticalEquip::instance()->GetCurentData() == NULL)
        return;
    ui->EditCtrlEle->setText(QString::fromUtf8("控制电流：")+VerticalEquip::instance()->GetCurentData()->CtrlElec + QString(""));
    ui->EditMacEle->setText(QString::fromUtf8("电机电流：")+VerticalEquip::instance()->GetCurentData()->MacElec + QString(""));
    ui->EditMacSpd->setText(QString::fromUtf8("电机转速：")+VerticalEquip::instance()->GetCurentData()->MacSpd + QString(""));
    ui->EditMacTemp->setText(QString::fromUtf8("电机温度：")+VerticalEquip::instance()->GetCurentData()->MacTemp + QString(""));
    ui->EditPressure->setText(QString::fromUtf8("出油口压力：")+VerticalEquip::instance()->GetCurentData()->OutPre + QString(""));
    ui->EditOilPres->setText(QString::fromUtf8("油液压力：")+VerticalEquip::instance()->GetCurentData()->OilPre + QString(""));
    ui->EditOilTemp->setText(QString::fromUtf8("油液温度：")+VerticalEquip::instance()->GetCurentData()->OilTemp + QString(""));
}
VerticalEquipWgt::~VerticalEquipWgt()
{
    delete ui;
}
