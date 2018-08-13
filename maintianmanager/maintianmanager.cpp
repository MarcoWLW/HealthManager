#include "maintianmanager.h"
#include "ui_maintianmanager.h"
#include <QDebug>

maintianmanager::maintianmanager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maintianmanager)
{
    ui->setupUi(this);
    addtask_Screen = new addtask;
    initialize();

}

maintianmanager::~maintianmanager()
{
    delete ui;
}

void maintianmanager::on_pushButton_addtask_clicked()
{
    this->addtask_Screen->show();
}

void maintianmanager::initialize()
{
    actModel = new QSqlTableModel;
    actModel =  MyDBManager::instance()->getModel("act");

    int rowCount = actModel->rowCount();
    for (int i = 0; i < rowCount; i++)
    {

    }

    qDebug()<<actModel->record(0).value("ActID").toString();
}
