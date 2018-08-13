#ifndef VERTICALEQUIPWGT_H
#define VERTICALEQUIPWGT_H

#include <QWidget>
#include "verticalequipwgt/verticalequip.h"
namespace Ui {
class VerticalEquipWgt;
}

class VerticalEquipWgt : public QWidget
{
    Q_OBJECT

public:
    static VerticalEquipWgt *instance(){static VerticalEquipWgt *p = new VerticalEquipWgt;return p;}
public slots:
    void updateData();
private:
    explicit VerticalEquipWgt(QWidget *parent = 0);
    ~VerticalEquipWgt();
    Ui::VerticalEquipWgt *ui;
};

#endif // VERTICALEQUIPWGT_H
