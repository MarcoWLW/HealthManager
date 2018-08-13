#ifndef CONTROLEQUIPMENT_H
#define CONTROLEQUIPMENT_H

#include <QWidget>
#include "controlequipment/controlequipmentinfo.h"
namespace Ui {
class controlEquipment;
}

class controlEquipment : public QWidget
{
    Q_OBJECT

public:
    static controlEquipment * instance(){static controlEquipment *p = new controlEquipment;return p;}
    void updataControlEquipment();

private:
    explicit controlEquipment(QWidget *parent = 0);
    ~controlEquipment();
    Ui::controlEquipment *ui;

};

#endif // CONTROLEQUIPMENT_H
