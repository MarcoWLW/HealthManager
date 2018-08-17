#include "maintianmanager.h"
#include "ui_maintianmanager.h"
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>

maintianmanager::maintianmanager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maintianmanager)
{
    ui->setupUi(this);
    addtask_Screen = new addtask;
    initialize();

    connect(ui->tableWidget_task,SIGNAL(clicked(QModelIndex)),this,SLOT(clickTableWidget(QModelIndex)));
    ui->tableWidget_task->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableWidget_task->setSelectionBehavior(QAbstractItemView::SelectRows);//整行选择

}

maintianmanager::~maintianmanager()
{
    delete ui;
}

void maintianmanager::on_pushButton_addtask_clicked()
{
    this->addtask_Screen->show();
}
//初始化
void maintianmanager::initialize()
{
    actModel = new QSqlTableModel;
    actModel =  MyDBManager::instance()->getModel("act");

    //展示列表
    int rowCount = actModel->rowCount();
    for (int i = 0; i < rowCount; i++)
    {
        QStringList list;
        list.append(actModel->record(i).value("ActType").toString());
        list.append(actModel->record(i).value("ActID").toString());
        list.append(actModel->record(i).value("ActSrc").toString());
        list.append(actModel->record(i).value("DcsPRI").toString());
        list.append(actModel->record(i).value("DcsPlan").toString());
        list.append(actModel->record(i).value("DcsLevel").toString());
        list.append(actModel->record(i).value("DcsLog").toString());
        list.append(actModel->record(i).value("DcsContent").toString());
        list.append(actModel->record(i).value("ActRct").toString());

        ui->tableWidget_task->insertRow(i);
        for(int j = 0;j<9;j++)
        {
            ui->tableWidget_task->setItem(i,j,new QTableWidgetItem(list.at(j)));
        }
    }
    //步骤模块初始化
    ui->pushButton_downstep->setEnabled(false);
    ui->pushButton_upstep->setEnabled(false);

    ui->dateTimeEdit_actTime->setDateTime(QDateTime::currentDateTime());

}

//关联维保资源列表
void maintianmanager::clickTableWidget(QModelIndex index)
{
    decStep.clear();
    decStepNum.clear();
    int rowNum =  index.row();//行号
    QString actId = ui->tableWidget_task->item(rowNum,1)->text();

    QStringList maitanceResNum = MyDBManager::instance()->getMaintanceResNum(actId);
    if (maitanceResNum.size() == 0)
    {
        QMessageBox::information(NULL,QString("提示"),QString("信息有误！"));
        return;
    }
/*************/
    int  rowCountTmp = ui->tableWidget_resource->rowCount();
    for(int y = 0;y<rowCountTmp;y++)
    {
        ui->tableWidget_resource->removeRow(0);
    }
    for(int i = 0; i < maitanceResNum.size(); i++)
    {
        eqpSum = new QSqlTableModel;
        eqpSum = MyDBManager::instance()->getModel("eqpsum");
        eqpSum->setFilter(QString(" EqpID = '%1'").arg(maitanceResNum.at(i)));
        eqpSum->select();

        ui->tableWidget_resource->insertRow(i);

        ui->tableWidget_resource->setItem(i,0,new QTableWidgetItem(maitanceResNum.at(i)));
        ui->tableWidget_resource->setItem(i,1,new QTableWidgetItem(eqpSum->record(0).value("EqpTopic").toString()));
        ui->tableWidget_resource->setItem(i,2,new QTableWidgetItem(eqpSum->record(0).value("EqpCount").toString()));
        ui->tableWidget_resource->setItem(i,3,new QTableWidgetItem(eqpSum->record(0).value("EqpLoc").toString()));
        ui->tableWidget_resource->setItem(i,4,new QTableWidgetItem(eqpSum->record(0).value("eqpTyp").toString()));
    }

    /**************/
    actModel = new QSqlTableModel;
    actModel = MyDBManager::instance()->getModel("act");
    actModel->setFilter(QString("ActID = %1").arg(actId));
    actModel->select();

    QString FDID = actModel->record(0).value("FDID").toString();

    decMode = new QSqlTableModel;
    decMode = MyDBManager::instance()->getModel("decision");
    decMode->setFilter(QString("FDID = '%1'").arg(FDID));
    decMode->select();

    int decRowCount = decMode->rowCount();
    for(int i = 0; i<decRowCount; i++)
    {
        decStepNum.append(decMode->record(i).value("DcsStep").toString());//步骤序号
        decStep.append(decMode->record(i).value("DcsContent").toString());//步骤内容
    }

    displayDcsStep("1");
    ui->pushButton_downstep->setEnabled(true);
    ui->pushButton_upstep->setEnabled(true);


    ui->label_actID->setText(actId);


}

void maintianmanager::displayDcsStep(QString step)
{
    for(int i = 0; i<decStepNum.size();i++)
    {
        if(step == decStepNum.at(i))
        {
            ui->label_stepNum->setText(decStepNum.at(i));
            ui->label_stepContent->setText(decStep.at(i));
        }
    }
}




void maintianmanager::on_pushButton_downstep_clicked()
{
    QString step = ui->label_stepNum->text();
    bool ok;
    int step_int = step.toInt(&ok,10);
//    qDebug()<<step_int << decStepNum;
    if(step_int < decStepNum.size())
    {
        displayDcsStep(QString::number(step_int + 1));
    }


}

void maintianmanager::on_pushButton_upstep_clicked()
{
    QString step = ui->label_stepNum->text();
    bool ok;
    int step_int = step.toInt(&ok,10);

    if(step_int > 1)
    {
        displayDcsStep(QString::number(step_int - 1));
    }
}
//反馈确认
void maintianmanager::on_pushButton_confirm_clicked()
{

    QString actID = ui->label_actID->text();

    if(actID == "")
    {
        return;
    }

    QString  actTime = ui->dateTimeEdit_actTime->text();
    QString actlevel = ui->comboBox_actLevel->currentText();
    QString actLog = ui->comboBox_actLog->currentText();
    QString actRct = ui->comboBox_actRct->currentText();
    QString actHint = ui->textEdit_actHit->toPlainText();

    bool ok;
    ok = MyDBManager::instance()->updataAct(actID,actTime,actlevel,actLog,actHint,actRct);

    qDebug()<<ok;
    if(ok)
    {
        QMessageBox::information(NULL,QString("提示"),QString("录入成功！"));
    }
    else
    {
        QMessageBox::information(NULL,QString("提示"),QString("录入失败！"));
    }




}
