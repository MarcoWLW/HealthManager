#include "healthmanagerwgt.h"
#include "ui_healthmanagerwgt.h"
HealthManagerWgt::HealthManagerWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HealthManagerWgt)
{
    ui->setupUi(this);
    /**set size */
//    this->setMaximumSize(1600,1000);
//    this->setMinimumSize(1600,1000);
    /**finish set size */
    /**add widget of whole machine monitoring*/
    this->MonitorWgt = new WholeEquipWgt;
    ui->mainTabWidget->addTab(this->MonitorWgt,QString::fromUtf8("全车监控"));
    /**finish add*/
    maintianManaWgt = new maintianmanager;
    //ui->tabWidget->insertTab(1,maintianManaWgt,tr("维修管理"));
    ui->mainTabWidget->addTab(maintianManaWgt,QString::fromUtf8("维修管理"));

    /**add widget of record management*/
    this->RecordWgt = new RecordManagerWgt;
    ui->mainTabWidget->addTab(this->RecordWgt,QString::fromUtf8("履历管理"));
    /**finish add widget*/
    /**update all widgets*/
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(UpdateWidgets()));
    timer->start(50);
    /*************************/
    ui->mainTabWidget->setCurrentIndex(0);
}
void HealthManagerWgt::UpdateWidgets()
{
    /**WLW ZXL TODO: update*/
    RaiseEquipWgt::instance()->UpdateData();
    chassis::instance()->upData();
    VerticalEquipWgt::instance()->updateData();
    controlEquipment::instance()->updataControlEquipment();

}
HealthManagerWgt::~HealthManagerWgt()
{
    delete ui;
}
