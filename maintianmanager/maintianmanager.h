#ifndef MAINTIANMANAGER_H
#define MAINTIANMANAGER_H

#include <QWidget>
#include "addtask/addtask.h"
#include "mydbmanager/mydbmanager.h"

namespace Ui {
class maintianmanager;
}

class maintianmanager : public QWidget
{
    Q_OBJECT

public:
    explicit maintianmanager(QWidget *parent = 0);
    ~maintianmanager();

    //初始化
    void initialize();


private slots:
    //新建按钮
    void on_pushButton_addtask_clicked();

private:
    Ui::maintianmanager *ui;

    addtask *addtask_Screen;

    QSqlTableModel * actModel;

};

#endif // MAINTIANMANAGER_H
