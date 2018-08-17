#include "recordmanagerwgt.h"
#include "ui_recordmanagerwgt.h"

RecordManagerWgt::RecordManagerWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordManagerWgt)
{
    curRow = -1;
    ui->setupUi(this);
    connect(ui->StartDecernBtn,SIGNAL(clicked(bool)),this,SLOT(onStartdecernbtnClicked()));
    connect(ui->ChooseLabelBtn,SIGNAL(clicked(bool)),this,SLOT(onChooselabelbtnClicked()));
    connect(ui->LabelInfoTable,SIGNAL(itemClicked(QTableWidgetItem*)),this,SLOT(onLabelinfotableItemclicked(QTableWidgetItem *)));
    connect(ui->UpdateBtn,SIGNAL(clicked(bool)),this,SLOT(onUpdatebtnClicked()));
    connect(ui->SyncBtn,SIGNAL(clicked(bool)),this,SLOT(onSyncbtnClicked()));
    /**set table readonly*/
     ui->LabelInfoTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
//     ui->LabelInfoTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    QTableWidget *tableWidget = ui->LabelInfoTable;
    tableWidget->setColumnCount(12);
    tableWidget->setRowCount(10);
     tableWidget->setWindowTitle("QTableWidget & Item");

     header<<"ID"<<QString::fromUtf8("设备名称")
          <<QString::fromUtf8("设备位置")
         <<QString::fromUtf8("设备类型")
        <<QString::fromUtf8("插入时间")
       <<QString::fromUtf8("标签编号")
      <<QString::fromUtf8("承制单位")
     <<QString::fromUtf8("出厂编号")
     <<QString::fromUtf8("出厂日期")
     <<QString::fromUtf8("装车日期")
     <<QString::fromUtf8("最近保养时间")
     <<QString::fromUtf8("所处状态");
/*************************************/
     defVec.clear();
     defVec.push_back(QString::fromUtf8("ID"));
     defVec.push_back(QString::fromUtf8("设备名称"));
     defVec.push_back(QString::fromUtf8("设备位置"));
     defVec.push_back(QString::fromUtf8("设备类型"));
     defVec.push_back(QString::fromUtf8("插入时间"));
     defVec.push_back(QString::fromUtf8("所处状态"));
     defVec.push_back(QString::fromUtf8("标签编号"));
     defVec.push_back(QString::fromUtf8("承制单位"));
     defVec.push_back(QString::fromUtf8("出厂编号"));
     defVec.push_back(QString::fromUtf8("所处状态"));
     defVec.push_back(QString::fromUtf8("出厂日期"));
     defVec.push_back(QString::fromUtf8("装车日期"));
     defVec.push_back(QString::fromUtf8("最近保养时间"));
     defVec.push_back(QString::fromUtf8("所处状态"));

     /*************************************/
     tableWidget->setHorizontalHeaderLabels(header);
     tableWidget->verticalHeader()->setVisible(false);

}

RecordManagerWgt::~RecordManagerWgt()
{
    delete ui;
}
/**obsoleting funtion i do not know the reason that it does not work ....*/
 QStringList RecordManagerWgt::getConfigInfoByTopic(QString str)
 {
//     CMarkup xml;
//     QStringList list ;
//     list.clear();
//     if(xml.Load("./data/RecordConfig.xml"))
//     {
//         if(xml.FindElem((MCD_PCSZ)"system"))
//         {
//             xml.IntoElem();
//             if(xml.FindElem((MCD_PCSZ)str.toStdString().c_str()))
//             {
//                 /***/
//                 list = QString::fromStdString(xml.GetData()).split(',');

//             }
//         }
//     }
//     return list;
 }
void RecordManagerWgt::updateTable()
{
     QTableWidget *tableWidget = ui->LabelInfoTable;
     std::vector<RecordInfo> vec = RecordManager::instance()->getRecordInfoVec();
     for(int i = 0;i <vec.size();i++)
     {
           RecordInfo info = vec[i];
          tableWidget->setItem(i,0,new QTableWidgetItem(info.UniqueID));
          tableWidget->setItem(i,1,new QTableWidgetItem(info.EquipName));
          tableWidget->setItem(i,2,new QTableWidgetItem(info.EquipLoc));
          tableWidget->setItem(i,3,new QTableWidgetItem(info.EquipType));
          tableWidget->setItem(i,4,new QTableWidgetItem(info.EquipDate));
          tableWidget->setItem(i,5,new QTableWidgetItem(info.LabelID));
          tableWidget->setItem(i,6,new QTableWidgetItem(info.MnfName));
          tableWidget->setItem(i,7,new QTableWidgetItem(info.MnfCode));
          tableWidget->setItem(i,8,new QTableWidgetItem(info.MnfTime));
          tableWidget->setItem(i,9,new QTableWidgetItem(info.LoadTime));
          tableWidget->setItem(i,10,new QTableWidgetItem(info.MtnTime));
          tableWidget->setItem(i,11,new QTableWidgetItem(info.EquipSta));

     }
     tableWidget->show();

}
void RecordManagerWgt::onStartdecernbtnClicked()
{
    RecordManager::instance()->getRecordInfoFromXML();
    updateTable();
}

void RecordManagerWgt::onChooselabelbtnClicked()
{

    if(this->curRow == -1)
        return;
    ui->RecordEditTable->setRowCount(1);
    ui->RecordEditTable->setColumnCount(12);
    ui->RecordEditTable->verticalHeader()->setVisible(false);
    ui->RecordEditTable->setHorizontalHeaderLabels(header);
    for(int i = 0;i < 12;i++)
    {
        QComboBox *box = new QComboBox;
        CMarkup xml;
        QStringList list ;
        list.clear();
        if(xml.Load("./data/RecordConfig.xml"))
        {
            if(xml.FindElem((MCD_PCSZ)"system"))
            {
                xml.IntoElem();
                if(xml.FindElem((MCD_PCSZ)defVec[i].toStdString().c_str()))
                {
                    /***/
                    list = QString::fromStdString(xml.GetData()).split(',');

                }
            }
        }
        box->addItem(ui->LabelInfoTable->item(this->curRow,i)->text());
        box->addItems(list);
        box->setCurrentIndex(0);
//        ui->RecordEditTable->setItem(0,i, new QTableWidgetItem(*(ui->LabelInfoTable->item(this->curRow,i))));
        ui->RecordEditTable->setCellWidget(0,i,box);
    }
}

void RecordManagerWgt::onLabelinfotableItemclicked(QTableWidgetItem *item)
{
    ui->LabelInfoTable->selectRow(item->row());
    this->curRow = item->row();
}

void RecordManagerWgt::onUpdatebtnClicked()
{

    RecordInfo info;
    info.UniqueID = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,0)))->currentText();
    info.EquipName = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,1)))->currentText();
    info.EquipLoc =((QComboBox *)(ui->RecordEditTable->cellWidget(0,2)))->currentText();
    info.EquipType = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,3)))->currentText();
    info.EquipDate = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,4)))->currentText();
    info.LabelID = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,5)))->currentText();
    info.MnfName = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,6)))->currentText();
    info.MnfCode = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,7)))->currentText();
    info.MnfTime = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,8)))->currentText();
    info.LoadTime =((QComboBox *)(ui->RecordEditTable->cellWidget(0,9)))->currentText();
    info.MtnTime = ((QComboBox *)(ui->RecordEditTable->cellWidget(0,10)))->currentText();
    info.EquipSta =((QComboBox *)(ui->RecordEditTable->cellWidget(0,11)))->currentText();
    RecordManager::instance()->modifyRecordInfo(info);
    updateTable();
    for(int i = 0;i < RecordManager::instance()->getRecordInfoVec().size();i++)
    {
        MyDBManager::instance()->writeRecordInfo(RecordManager::instance()->getRecordInfoVec()[i]);
    }
    /**write to database*/
}

void RecordManagerWgt::onSyncbtnClicked()
{

    ui->RecordList->setColumnCount(12);
    ui->RecordList->verticalHeader()->setVisible(false);
    ui->RecordList->setHorizontalHeaderLabels(header);
    QTableWidget *tableWidget = ui->RecordList;
    std::vector<RecordInfo> vec =  MyDBManager::instance()->getRecordInfoVec();
        ui->RecordList->setRowCount(vec.size());
    for(int i = 0;i <vec.size();i++)
    {
          RecordInfo info = vec[i];
         tableWidget->setItem(i,0,new QTableWidgetItem(info.UniqueID));
         tableWidget->setItem(i,1,new QTableWidgetItem(info.EquipName));
         tableWidget->setItem(i,2,new QTableWidgetItem(info.EquipLoc));
         tableWidget->setItem(i,3,new QTableWidgetItem(info.EquipType));
         tableWidget->setItem(i,4,new QTableWidgetItem(info.EquipDate));
         tableWidget->setItem(i,5,new QTableWidgetItem(info.LabelID));
         tableWidget->setItem(i,6,new QTableWidgetItem(info.MnfName));
         tableWidget->setItem(i,7,new QTableWidgetItem(info.MnfCode));
         tableWidget->setItem(i,8,new QTableWidgetItem(info.MnfTime));
         tableWidget->setItem(i,9,new QTableWidgetItem(info.LoadTime));
         tableWidget->setItem(i,10,new QTableWidgetItem(info.MtnTime));
         tableWidget->setItem(i,11,new QTableWidgetItem(info.EquipSta));

    }
    tableWidget->show();

}
