#ifndef MAINTIANMANAGER_H
#define MAINTIANMANAGER_H

#include <QWidget>
#include "addtask/addtask.h"
#include "mydbmanager/mydbmanager.h"
#include <QStringList>

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
    //展示步骤
    void displayDcsStep(QString step);


private slots:
    //新建按钮
    void on_pushButton_addtask_clicked();
    //点击表格
    void clickTableWidget(QModelIndex index);

    void on_pushButton_downstep_clicked();

    void on_pushButton_upstep_clicked();

    void on_pushButton_confirm_clicked();

private:
    Ui::maintianmanager *ui;

    addtask *addtask_Screen;

    QSqlTableModel * actModel;//故障处理
    QSqlTableModel * eqpSum;//电子履历
    QSqlTableModel * decMode;//决策处理

    QStringList decStep;//维修步骤
    QStringList decStepNum;//维修步骤序号

};

#endif // MAINTIANMANAGER_H
