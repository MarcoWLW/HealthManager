#include "wholeequipwgt.h"
#include "ui_wholeequipwgt.h"

WholeEquipWgt::WholeEquipWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WholeEquipWgt)
{
    ui->setupUi(this);
    /**init all of widgets*/
   CtrlEquipWgt = controlEquipment::instance();
    ChassisWgt = chassis::instance();
     RaiseWgt = RaiseEquipWgt::instance();
     VerticalWgt = VerticalEquipWgt::instance();
    /*********************/

     /**init signals*/
     connect(ui->BtnChassis,SIGNAL(clicked(bool)),this,SLOT(onBtnchassisClicked()));
     connect(ui->BtnCtrlEquip,SIGNAL(clicked(bool)),this,SLOT(onBtnctrlequipClicked()));
     connect(ui->BtnRaiseEquip,SIGNAL(clicked(bool)),this,SLOT(onBtnraiseequipClicked()));
     connect(ui->BtnVerticalEquip,SIGNAL(clicked(bool)),this,SLOT(onBtnverticalequipClicked()));
     /**************/

}

WholeEquipWgt::~WholeEquipWgt()
{
    delete ui;
}

void WholeEquipWgt::onBtnchassisClicked()
{
    this->ChassisWgt->show();
}

void WholeEquipWgt::onBtnctrlequipClicked()
{
    this->CtrlEquipWgt->show();
}

void WholeEquipWgt::onBtnverticalequipClicked()
{
    this->VerticalWgt->show();
}

void WholeEquipWgt::onBtnraiseequipClicked()
{
    this->RaiseWgt->show();
}
