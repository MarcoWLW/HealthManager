#ifndef WHOLEEQUIPWGT_H
#define WHOLEEQUIPWGT_H
/**全车监控子界面*/
#include <QWidget>
#include "controlequipment/controlequipment.h"
#include "chassis/chassis.h"
#include "raiseequipwgt/raiseequipwgt.h"
#include "verticalequipwgt/verticalequipwgt.h"

namespace Ui {
class WholeEquipWgt;
}

class WholeEquipWgt : public QWidget
{
    Q_OBJECT

public:
    explicit WholeEquipWgt(QWidget *parent = 0);
    ~WholeEquipWgt();

private slots:
    void onBtnchassisClicked();

    void onBtnctrlequipClicked();

    void onBtnverticalequipClicked();

    void onBtnraiseequipClicked();

private:
    /**子窗体集合*/
    controlEquipment *CtrlEquipWgt;
     chassis * ChassisWgt;
     RaiseEquipWgt *RaiseWgt;
     VerticalEquipWgt *VerticalWgt;
     /*******************************/
    Ui::WholeEquipWgt *ui;
};

#endif // WHOLEEQUIPWGT_H
