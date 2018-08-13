/********************************************************************************
** Form generated from reading UI file 'chassis.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHASSIS_H
#define UI_CHASSIS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chassis
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_batterySOC;
    QLabel *label_2;
    QLabel *label_batterySumVol;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_batteryTemp;
    QLabel *label_5;
    QLabel *label_batterySignalVol;
    QLabel *label_6;
    QLabel *label_batterySignalTemp;
    QLabel *label_batteryElectricity;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *label_runTime;
    QLabel *label_8;
    QLabel *label_engineSpeed;
    QLabel *label_10;
    QLabel *label_engineVol;
    QLabel *label_9;
    QLabel *label_engineElectricity;
    QLabel *label_11;
    QLabel *label_engineTemp;
    QLabel *label_12;
    QLabel *label_batteryVol;
    QLabel *label_13;
    QLabel *label_oilLiquid;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_7;
    QFormLayout *formLayout_3;
    QLabel *label_14;
    QLabel *label_fuleOil;
    QLabel *label_15;
    QLabel *label_engineOil;
    QLabel *label_16;
    QLabel *label_coolingLiquid;
    QLabel *label_17;
    QLabel *label_inverter;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout_4;
    QLabel *label_18;
    QLabel *label_runTime_2;
    QLabel *label_19;
    QLabel *label_engineSpeed_2;
    QLabel *label_20;
    QLabel *label_engineVol_2;
    QLabel *label_21;
    QLabel *label_engineElectricity_2;
    QLabel *label_22;
    QLabel *label_engineTemp_2;
    QLabel *label_23;
    QLabel *label_batteryVol_2;
    QLabel *label_24;
    QLabel *label_oilLiquid_2;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_8;
    QFormLayout *formLayout_5;
    QLabel *label_25;
    QLabel *label_fuleOil_2;
    QLabel *label_26;
    QLabel *label_engineOil_2;
    QLabel *label_27;
    QLabel *label_coolingLiquid_2;
    QLabel *label_28;
    QLabel *label_inverter_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_10;
    QFormLayout *formLayout_6;
    QLabel *label_29;
    QLabel *label_inputVol;
    QLabel *label_30;
    QLabel *label_radiatorTemp;
    QLabel *label_31;
    QLabel *label_outputVol;
    QLabel *label_32;
    QLabel *label_outputElectricity;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_11;
    QFormLayout *formLayout_7;
    QLabel *label_33;
    QLabel *label_inputVol_2;
    QLabel *label_34;
    QLabel *label_radiatorTemp_2;
    QLabel *label_35;
    QLabel *label_outputVol_2;
    QLabel *label_36;
    QLabel *label_outputElectricity_2;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_12;
    QFormLayout *formLayout_8;
    QLabel *label_37;
    QLabel *label_inputVolAC;
    QLabel *label_39;
    QLabel *label_inputEletricity;
    QLabel *label_38;
    QLabel *label_outputVolAC;
    QLabel *label_40;
    QLabel *label_outputElectricityAC;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser_1;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_faultMessage;
    QTextBrowser *textBrowser_faultCount;

    void setupUi(QWidget *chassis)
    {
        if (chassis->objectName().isEmpty())
            chassis->setObjectName(QString::fromUtf8("chassis"));
        chassis->resize(1081, 507);
        horizontalLayout_4 = new QHBoxLayout(chassis);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(chassis);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(8);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_batterySOC = new QLabel(groupBox_2);
        label_batterySOC->setObjectName(QString::fromUtf8("label_batterySOC"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_batterySOC);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_batterySumVol = new QLabel(groupBox_2);
        label_batterySumVol->setObjectName(QString::fromUtf8("label_batterySumVol"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_batterySumVol);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_batteryTemp = new QLabel(groupBox_2);
        label_batteryTemp->setObjectName(QString::fromUtf8("label_batteryTemp"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_batteryTemp);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_batterySignalVol = new QLabel(groupBox_2);
        label_batterySignalVol->setObjectName(QString::fromUtf8("label_batterySignalVol"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_batterySignalVol);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_batterySignalTemp = new QLabel(groupBox_2);
        label_batterySignalTemp->setObjectName(QString::fromUtf8("label_batterySignalTemp"));

        formLayout->setWidget(5, QFormLayout::FieldRole, label_batterySignalTemp);

        label_batteryElectricity = new QLabel(groupBox_2);
        label_batteryElectricity->setObjectName(QString::fromUtf8("label_batteryElectricity"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_batteryElectricity);


        horizontalLayout_5->addLayout(formLayout);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_runTime = new QLabel(groupBox_3);
        label_runTime->setObjectName(QString::fromUtf8("label_runTime"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_runTime);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        label_engineSpeed = new QLabel(groupBox_3);
        label_engineSpeed->setObjectName(QString::fromUtf8("label_engineSpeed"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label_engineSpeed);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        label_engineVol = new QLabel(groupBox_3);
        label_engineVol->setObjectName(QString::fromUtf8("label_engineVol"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, label_engineVol);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        label_engineElectricity = new QLabel(groupBox_3);
        label_engineElectricity->setObjectName(QString::fromUtf8("label_engineElectricity"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, label_engineElectricity);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        label_engineTemp = new QLabel(groupBox_3);
        label_engineTemp->setObjectName(QString::fromUtf8("label_engineTemp"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, label_engineTemp);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_12);

        label_batteryVol = new QLabel(groupBox_3);
        label_batteryVol->setObjectName(QString::fromUtf8("label_batteryVol"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, label_batteryVol);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_13);

        label_oilLiquid = new QLabel(groupBox_3);
        label_oilLiquid->setObjectName(QString::fromUtf8("label_oilLiquid"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, label_oilLiquid);


        verticalLayout_6->addLayout(formLayout_2);

        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_14);

        label_fuleOil = new QLabel(groupBox_6);
        label_fuleOil->setObjectName(QString::fromUtf8("label_fuleOil"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_fuleOil);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_15);

        label_engineOil = new QLabel(groupBox_6);
        label_engineOil->setObjectName(QString::fromUtf8("label_engineOil"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, label_engineOil);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_16);

        label_coolingLiquid = new QLabel(groupBox_6);
        label_coolingLiquid->setObjectName(QString::fromUtf8("label_coolingLiquid"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, label_coolingLiquid);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_17);

        label_inverter = new QLabel(groupBox_6);
        label_inverter->setObjectName(QString::fromUtf8("label_inverter"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, label_inverter);


        horizontalLayout_7->addLayout(formLayout_3);


        verticalLayout_6->addWidget(groupBox_6);


        horizontalLayout_6->addLayout(verticalLayout_6);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_4);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_18);

        label_runTime_2 = new QLabel(groupBox_4);
        label_runTime_2->setObjectName(QString::fromUtf8("label_runTime_2"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, label_runTime_2);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_19);

        label_engineSpeed_2 = new QLabel(groupBox_4);
        label_engineSpeed_2->setObjectName(QString::fromUtf8("label_engineSpeed_2"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, label_engineSpeed_2);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_20);

        label_engineVol_2 = new QLabel(groupBox_4);
        label_engineVol_2->setObjectName(QString::fromUtf8("label_engineVol_2"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, label_engineVol_2);

        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_21);

        label_engineElectricity_2 = new QLabel(groupBox_4);
        label_engineElectricity_2->setObjectName(QString::fromUtf8("label_engineElectricity_2"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, label_engineElectricity_2);

        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_22);

        label_engineTemp_2 = new QLabel(groupBox_4);
        label_engineTemp_2->setObjectName(QString::fromUtf8("label_engineTemp_2"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, label_engineTemp_2);

        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_23);

        label_batteryVol_2 = new QLabel(groupBox_4);
        label_batteryVol_2->setObjectName(QString::fromUtf8("label_batteryVol_2"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, label_batteryVol_2);

        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_24);

        label_oilLiquid_2 = new QLabel(groupBox_4);
        label_oilLiquid_2->setObjectName(QString::fromUtf8("label_oilLiquid_2"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, label_oilLiquid_2);


        verticalLayout_7->addLayout(formLayout_4);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_25);

        label_fuleOil_2 = new QLabel(groupBox_7);
        label_fuleOil_2->setObjectName(QString::fromUtf8("label_fuleOil_2"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, label_fuleOil_2);

        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_26);

        label_engineOil_2 = new QLabel(groupBox_7);
        label_engineOil_2->setObjectName(QString::fromUtf8("label_engineOil_2"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, label_engineOil_2);

        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_27);

        label_coolingLiquid_2 = new QLabel(groupBox_7);
        label_coolingLiquid_2->setObjectName(QString::fromUtf8("label_coolingLiquid_2"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, label_coolingLiquid_2);

        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_28);

        label_inverter_2 = new QLabel(groupBox_7);
        label_inverter_2->setObjectName(QString::fromUtf8("label_inverter_2"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, label_inverter_2);


        horizontalLayout_8->addLayout(formLayout_5);


        verticalLayout_7->addWidget(groupBox_7);


        horizontalLayout_9->addLayout(verticalLayout_7);

        groupBox_2->raise();

        horizontalLayout->addWidget(groupBox_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(groupBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_8 = new QGroupBox(chassis);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_29 = new QLabel(groupBox_8);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_29);

        label_inputVol = new QLabel(groupBox_8);
        label_inputVol->setObjectName(QString::fromUtf8("label_inputVol"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, label_inputVol);

        label_30 = new QLabel(groupBox_8);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_30);

        label_radiatorTemp = new QLabel(groupBox_8);
        label_radiatorTemp->setObjectName(QString::fromUtf8("label_radiatorTemp"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, label_radiatorTemp);

        label_31 = new QLabel(groupBox_8);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_31);

        label_outputVol = new QLabel(groupBox_8);
        label_outputVol->setObjectName(QString::fromUtf8("label_outputVol"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, label_outputVol);

        label_32 = new QLabel(groupBox_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_32);

        label_outputElectricity = new QLabel(groupBox_8);
        label_outputElectricity->setObjectName(QString::fromUtf8("label_outputElectricity"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, label_outputElectricity);


        horizontalLayout_10->addLayout(formLayout_6);


        verticalLayout_3->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(chassis);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout_11 = new QHBoxLayout(groupBox_9);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_33 = new QLabel(groupBox_9);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_33);

        label_inputVol_2 = new QLabel(groupBox_9);
        label_inputVol_2->setObjectName(QString::fromUtf8("label_inputVol_2"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, label_inputVol_2);

        label_34 = new QLabel(groupBox_9);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_34);

        label_radiatorTemp_2 = new QLabel(groupBox_9);
        label_radiatorTemp_2->setObjectName(QString::fromUtf8("label_radiatorTemp_2"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, label_radiatorTemp_2);

        label_35 = new QLabel(groupBox_9);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_35);

        label_outputVol_2 = new QLabel(groupBox_9);
        label_outputVol_2->setObjectName(QString::fromUtf8("label_outputVol_2"));

        formLayout_7->setWidget(2, QFormLayout::FieldRole, label_outputVol_2);

        label_36 = new QLabel(groupBox_9);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, label_36);

        label_outputElectricity_2 = new QLabel(groupBox_9);
        label_outputElectricity_2->setObjectName(QString::fromUtf8("label_outputElectricity_2"));

        formLayout_7->setWidget(3, QFormLayout::FieldRole, label_outputElectricity_2);


        horizontalLayout_11->addLayout(formLayout_7);


        verticalLayout_3->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(chassis);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_10);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_37 = new QLabel(groupBox_10);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_37);

        label_inputVolAC = new QLabel(groupBox_10);
        label_inputVolAC->setObjectName(QString::fromUtf8("label_inputVolAC"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, label_inputVolAC);

        label_39 = new QLabel(groupBox_10);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_39);

        label_inputEletricity = new QLabel(groupBox_10);
        label_inputEletricity->setObjectName(QString::fromUtf8("label_inputEletricity"));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, label_inputEletricity);

        label_38 = new QLabel(groupBox_10);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        formLayout_8->setWidget(2, QFormLayout::LabelRole, label_38);

        label_outputVolAC = new QLabel(groupBox_10);
        label_outputVolAC->setObjectName(QString::fromUtf8("label_outputVolAC"));

        formLayout_8->setWidget(2, QFormLayout::FieldRole, label_outputVolAC);

        label_40 = new QLabel(groupBox_10);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        formLayout_8->setWidget(3, QFormLayout::LabelRole, label_40);

        label_outputElectricityAC = new QLabel(groupBox_10);
        label_outputElectricityAC->setObjectName(QString::fromUtf8("label_outputElectricityAC"));

        formLayout_8->setWidget(3, QFormLayout::FieldRole, label_outputElectricityAC);


        horizontalLayout_12->addLayout(formLayout_8);


        verticalLayout_3->addWidget(groupBox_10);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_5 = new QGroupBox(chassis);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));

        verticalLayout_5->addWidget(groupBox_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textBrowser_1 = new QTextBrowser(chassis);
        textBrowser_1->setObjectName(QString::fromUtf8("textBrowser_1"));
        textBrowser_1->setEnabled(true);

        horizontalLayout_2->addWidget(textBrowser_1);

        textBrowser_2 = new QTextBrowser(chassis);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_2->addWidget(textBrowser_2);

        textBrowser_3 = new QTextBrowser(chassis);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        horizontalLayout_2->addWidget(textBrowser_3);

        textBrowser_4 = new QTextBrowser(chassis);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        horizontalLayout_2->addWidget(textBrowser_4);

        textBrowser_5 = new QTextBrowser(chassis);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));

        horizontalLayout_2->addWidget(textBrowser_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_5->setStretch(0, 2);
        verticalLayout_5->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBrowser_faultMessage = new QTextBrowser(chassis);
        textBrowser_faultMessage->setObjectName(QString::fromUtf8("textBrowser_faultMessage"));

        verticalLayout_4->addWidget(textBrowser_faultMessage);

        textBrowser_faultCount = new QTextBrowser(chassis);
        textBrowser_faultCount->setObjectName(QString::fromUtf8("textBrowser_faultCount"));

        verticalLayout_4->addWidget(textBrowser_faultCount);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 4);
        horizontalLayout_3->setStretch(3, 2);

        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(chassis);

        QMetaObject::connectSlotsByName(chassis);
    } // setupUi

    void retranslateUi(QWidget *chassis)
    {
        chassis->setWindowTitle(QApplication::translate("chassis", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("chassis", "\345\212\250\345\212\233\346\272\220", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("chassis", "\345\212\250\345\212\233\347\224\265\346\261\240\347\273\204", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("chassis", "\347\224\265\346\261\240\347\273\204SOC\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batterySOC->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("chassis", "\347\224\265\346\261\240\347\273\204\346\200\273\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batterySumVol->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("chassis", "\345\267\245\344\275\234\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("chassis", "\345\271\263\345\235\207\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batteryTemp->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("chassis", "\345\215\225\344\275\223\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batterySignalVol->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("chassis", "\345\215\225\344\275\223\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batterySignalTemp->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_batteryElectricity->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("chassis", "\346\237\264\347\224\265APU-\345\267\246", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("chassis", "\347\264\257\350\256\241\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_runTime->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\350\275\254\351\200\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineSpeed->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\350\276\223\345\207\272\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineVol->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineElectricity->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineTemp->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("chassis", "\347\224\265\347\223\266\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batteryVol->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("chassis", "\346\234\272\346\262\271\346\266\262\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_oilLiquid->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("chassis", "\345\205\263\351\224\256\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("chassis", "\347\207\203\346\262\271\357\274\232", 0, QApplication::UnicodeUTF8));
        label_fuleOil->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("chassis", "\346\234\272\346\262\271\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineOil->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("chassis", "\345\206\267\345\215\264\346\266\262\357\274\232", 0, QApplication::UnicodeUTF8));
        label_coolingLiquid->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("chassis", "\351\200\206\345\217\230\345\231\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_inverter->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("chassis", "\346\237\264\347\224\265APU-\345\217\263", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("chassis", "\347\264\257\350\256\241\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_runTime_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\350\275\254\351\200\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineSpeed_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\350\276\223\345\207\272\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineVol_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineElectricity_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("chassis", "\345\217\221\345\212\250\346\234\272\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineTemp_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("chassis", "\347\224\265\347\223\266\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_batteryVol_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("chassis", "\346\234\272\346\262\271\346\266\262\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_oilLiquid_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("chassis", "\345\205\263\351\224\256\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("chassis", "\347\207\203\346\262\271\357\274\232", 0, QApplication::UnicodeUTF8));
        label_fuleOil_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("chassis", "\346\234\272\346\262\271\357\274\232", 0, QApplication::UnicodeUTF8));
        label_engineOil_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("chassis", "\345\206\267\345\215\264\346\266\262\357\274\232", 0, QApplication::UnicodeUTF8));
        label_coolingLiquid_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("chassis", "\351\200\206\345\217\230\345\231\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_inverter_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("chassis", "DC/DC1", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("chassis", "\350\276\223\345\205\245\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_inputVol->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("chassis", "\346\225\243\347\203\255\345\231\250\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_radiatorTemp->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("chassis", "\350\276\223\345\207\272\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_outputVol->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("chassis", "\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_outputElectricity->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("chassis", "DC/DC2", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("chassis", "\350\276\223\345\205\245\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_inputVol_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("chassis", "\346\225\243\347\203\255\345\231\250\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_radiatorTemp_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("chassis", "\350\276\223\345\207\272\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_outputVol_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("chassis", "\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_outputElectricity_2->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("chassis", "AC/DC", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("chassis", "\350\276\223\345\205\245\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_inputVolAC->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("chassis", "\350\276\223\345\205\245\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_inputEletricity->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("chassis", "\350\276\223\345\207\272\347\224\265\345\216\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_outputVolAC->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("chassis", "\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_outputElectricityAC->setText(QApplication::translate("chassis", "test", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("chassis", "\346\225\264\350\275\246\347\273\235\347\274\230\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        textBrowser_1->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">I\350\275\264\346\225\260\346\215\256</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">II\350\275\264\346\225\260\346\215\256</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_3->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">III\350\275\264\346\225\260\346\215\256</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_4->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IV\350\275\264\346\225\260\346\215\256</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_5->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">VI\350\275\264\346\225\260\346\215\256</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_faultMessage->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\225\205\351\232\234\344\277\241\346\201\257</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_faultCount->setHtml(QApplication::translate("chassis", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\225\205\351\232\234\347\273\237\350\256\241\344\277\241\346\201\257</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chassis: public Ui_chassis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHASSIS_H
