/********************************************************************************
** Form generated from reading UI file 'verticalequipwgt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERTICALEQUIPWGT_H
#define UI_VERTICALEQUIPWGT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerticalEquipWgt
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLineEdit *EditMacEle;
    QLineEdit *EditMacSpd;
    QLineEdit *EditMacTemp;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLineEdit *EditPressure;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_4;
    QLineEdit *EditCtrlEle;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QLineEdit *EditOilPres;
    QLineEdit *EditOilTemp;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_9;
    QGroupBox *groupBox_10;

    void setupUi(QWidget *VerticalEquipWgt)
    {
        if (VerticalEquipWgt->objectName().isEmpty())
            VerticalEquipWgt->setObjectName(QString::fromUtf8("VerticalEquipWgt"));
        VerticalEquipWgt->resize(1040, 650);
        horizontalLayout_3 = new QHBoxLayout(VerticalEquipWgt);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(VerticalEquipWgt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(450, 0));

        horizontalLayout_3->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_2 = new QGroupBox(VerticalEquipWgt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(VerticalEquipWgt);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));

        horizontalLayout->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_4 = new QGroupBox(VerticalEquipWgt);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));

        verticalLayout->addWidget(groupBox_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_5 = new QGroupBox(VerticalEquipWgt);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMaximumSize(QSize(16777215, 200));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        EditMacEle = new QLineEdit(groupBox_5);
        EditMacEle->setObjectName(QString::fromUtf8("EditMacEle"));
        EditMacEle->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout->addWidget(EditMacEle, 0, 0, 1, 1);

        EditMacSpd = new QLineEdit(groupBox_5);
        EditMacSpd->setObjectName(QString::fromUtf8("EditMacSpd"));
        EditMacSpd->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout->addWidget(EditMacSpd, 1, 0, 1, 1);

        EditMacTemp = new QLineEdit(groupBox_5);
        EditMacTemp->setObjectName(QString::fromUtf8("EditMacTemp"));
        EditMacTemp->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout->addWidget(EditMacTemp, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(VerticalEquipWgt);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMaximumSize(QSize(16777215, 200));
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        EditPressure = new QLineEdit(groupBox_6);
        EditPressure->setObjectName(QString::fromUtf8("EditPressure"));
        EditPressure->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout_2->addWidget(EditPressure, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_6);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_7 = new QGroupBox(VerticalEquipWgt);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_4 = new QGridLayout(groupBox_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        EditCtrlEle = new QLineEdit(groupBox_7);
        EditCtrlEle->setObjectName(QString::fromUtf8("EditCtrlEle"));
        EditCtrlEle->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout_4->addWidget(EditCtrlEle, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(VerticalEquipWgt);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        EditOilPres = new QLineEdit(groupBox_8);
        EditOilPres->setObjectName(QString::fromUtf8("EditOilPres"));
        EditOilPres->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout_3->addWidget(EditOilPres, 0, 0, 1, 1);

        EditOilTemp = new QLineEdit(groupBox_8);
        EditOilTemp->setObjectName(QString::fromUtf8("EditOilTemp"));
        EditOilTemp->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));

        gridLayout_3->addWidget(EditOilTemp, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_8);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_9 = new QGroupBox(VerticalEquipWgt);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));

        verticalLayout_4->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(VerticalEquipWgt);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));

        verticalLayout_4->addWidget(groupBox_10);


        horizontalLayout_3->addLayout(verticalLayout_4);


        retranslateUi(VerticalEquipWgt);

        QMetaObject::connectSlotsByName(VerticalEquipWgt);
    } // setupUi

    void retranslateUi(QWidget *VerticalEquipWgt)
    {
        VerticalEquipWgt->setWindowTitle(QApplication::translate("VerticalEquipWgt", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("VerticalEquipWgt", "\350\265\267\347\253\226\350\256\276\345\244\207\346\225\210\346\236\234\345\233\276", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("VerticalEquipWgt", "\346\227\240\346\235\206\350\205\224", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("VerticalEquipWgt", "\346\234\211\346\235\206\350\205\224", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("VerticalEquipWgt", "\347\273\204\346\210\220\345\233\276", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("VerticalEquipWgt", "\347\224\265\346\234\272", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("VerticalEquipWgt", "\346\266\262\345\216\213\346\263\265", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("VerticalEquipWgt", "\346\257\224\344\276\213\351\230\200", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("VerticalEquipWgt", "\346\266\262\345\216\213\346\262\271\347\256\261", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("VerticalEquipWgt", "\346\225\205\351\232\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("VerticalEquipWgt", "\346\225\205\351\232\234\347\273\237\350\256\241\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VerticalEquipWgt: public Ui_VerticalEquipWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTICALEQUIPWGT_H
