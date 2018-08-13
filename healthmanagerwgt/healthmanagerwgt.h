#ifndef HEALTHMANAGERWGT_H
#define HEALTHMANAGERWGT_H

#include <QWidget>
#include "maintianmanager/maintianmanager.h"

#include "recordmanagerwgt/recordmanagerwgt.h"
#include "wholeequipwgt/wholeequipwgt.h"
#include "controlequipment/controlequipment.h"
namespace Ui {
class HealthManagerWgt;
}

class HealthManagerWgt : public QWidget
{
    Q_OBJECT

public:
    explicit HealthManagerWgt(QWidget *parent = 0);
    ~HealthManagerWgt();
public slots:
    void UpdateWidgets();
private:
    Ui::HealthManagerWgt *ui;
    maintianmanager *maintianManaWgt;
    /**record management widget*/
   RecordManagerWgt *RecordWgt;
   /**whole machine monitoring widget*/
   WholeEquipWgt *MonitorWgt;
};

#endif // HEALTHMANAGERWGT_H
