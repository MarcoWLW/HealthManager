#include "addtask.h"
#include "ui_addtask.h"

addtask::addtask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addtask)
{
    ui->setupUi(this);
}

addtask::~addtask()
{
    delete ui;
}
//取消按钮
void addtask::on_pushButton_cancel_clicked()
{
    this->close();
}
