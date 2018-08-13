#ifndef CHASSIS_H
#define CHASSIS_H

#include <QWidget>
#include "chassis/chassisinfo.h"
#include <QTimer>

namespace Ui {
class chassis;
}

class chassis : public QWidget
{
    Q_OBJECT

public:
    static chassis *instance(){static chassis *p = new chassis;return p;}


public slots:
    void upData();

private:
     explicit chassis(QWidget *parent = 0);
      ~chassis();
    Ui::chassis *ui;
};

#endif // CHASSIS_H
