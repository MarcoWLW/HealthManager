#ifndef RAISEEQUIPWGT_H
#define RAISEEQUIPWGT_H

#include <QWidget>
#include "raiseequipwgt/raiseequip.h"
#include <QTimer>
#include "mydbmanager/mydbmanager.h"
namespace Ui {
class RaiseEquipWgt;
}

class RaiseEquipWgt : public QWidget
{
    Q_OBJECT

public:
    static RaiseEquipWgt *instance(){static RaiseEquipWgt *p = new RaiseEquipWgt;return p;}
public slots:
    /**personal function*/
    void UpdateData();
private:
    explicit RaiseEquipWgt(QWidget *parent = 0);
    ~RaiseEquipWgt();
    Ui::RaiseEquipWgt *ui;



};

#endif // RAISEEQUIPWGT_H
