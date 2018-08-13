/********************************************************************************
** Form generated from reading UI file 'raiseequipwgt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAISEEQUIPWGT_H
#define UI_RAISEEQUIPWGT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaiseEquipWgt
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLineEdit *EditMacPosLB;
    QLineEdit *EditMacEleLB;
    QLineEdit *EditMacSpdLB;
    QLineEdit *EditMacTempLB;
    QLineEdit *EditLegDisLB;
    QLineEdit *EditOutLimitLB;
    QLineEdit *EditInLimitLB;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLineEdit *EditMacPosRB;
    QLineEdit *EditMacEleRB;
    QLineEdit *EditMacSpdRB;
    QLineEdit *EditMacTempRB;
    QLineEdit *EditLegDisRB;
    QLineEdit *EditOutLimitRB;
    QLineEdit *EditInLimitRB;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLineEdit *EditMacPosRF;
    QLineEdit *EditMacEleRF;
    QLineEdit *EditMacSpdRF;
    QLineEdit *EditMacTempRF;
    QLineEdit *EditLegDisRF;
    QLineEdit *EditOutLimitRF;
    QLineEdit *EditInLimitRF;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLineEdit *EditMacPosLF;
    QLineEdit *EditMacEleLF;
    QLineEdit *EditMacSpdLF;
    QLineEdit *EditMacTempLF;
    QLineEdit *EditLegDisLF;
    QLineEdit *EditOutLimitLF;
    QLineEdit *EditInLimitLF;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_6;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;

    void setupUi(QWidget *RaiseEquipWgt)
    {
        if (RaiseEquipWgt->objectName().isEmpty())
            RaiseEquipWgt->setObjectName(QString::fromUtf8("RaiseEquipWgt"));
        RaiseEquipWgt->resize(1117, 621);
        horizontalLayout = new QHBoxLayout(RaiseEquipWgt);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(RaiseEquipWgt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label);

        groupBox = new QGroupBox(RaiseEquipWgt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(500, 0));

        verticalLayout_3->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_4 = new QGroupBox(RaiseEquipWgt);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(150, 0));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        EditMacPosLB = new QLineEdit(groupBox_4);
        EditMacPosLB->setObjectName(QString::fromUtf8("EditMacPosLB"));
        EditMacPosLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacPosLB->setReadOnly(true);

        gridLayout_4->addWidget(EditMacPosLB, 0, 0, 1, 1);

        EditMacEleLB = new QLineEdit(groupBox_4);
        EditMacEleLB->setObjectName(QString::fromUtf8("EditMacEleLB"));
        EditMacEleLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacEleLB->setReadOnly(true);

        gridLayout_4->addWidget(EditMacEleLB, 1, 0, 1, 1);

        EditMacSpdLB = new QLineEdit(groupBox_4);
        EditMacSpdLB->setObjectName(QString::fromUtf8("EditMacSpdLB"));
        EditMacSpdLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacSpdLB->setReadOnly(true);

        gridLayout_4->addWidget(EditMacSpdLB, 2, 0, 1, 1);

        EditMacTempLB = new QLineEdit(groupBox_4);
        EditMacTempLB->setObjectName(QString::fromUtf8("EditMacTempLB"));
        EditMacTempLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacTempLB->setReadOnly(true);

        gridLayout_4->addWidget(EditMacTempLB, 3, 0, 1, 1);

        EditLegDisLB = new QLineEdit(groupBox_4);
        EditLegDisLB->setObjectName(QString::fromUtf8("EditLegDisLB"));
        EditLegDisLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditLegDisLB->setReadOnly(true);

        gridLayout_4->addWidget(EditLegDisLB, 4, 0, 1, 1);

        EditOutLimitLB = new QLineEdit(groupBox_4);
        EditOutLimitLB->setObjectName(QString::fromUtf8("EditOutLimitLB"));
        EditOutLimitLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditOutLimitLB->setReadOnly(true);

        gridLayout_4->addWidget(EditOutLimitLB, 5, 0, 1, 1);

        EditInLimitLB = new QLineEdit(groupBox_4);
        EditInLimitLB->setObjectName(QString::fromUtf8("EditInLimitLB"));
        EditInLimitLB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditInLimitLB->setReadOnly(true);

        gridLayout_4->addWidget(EditInLimitLB, 6, 0, 1, 1);


        gridLayout->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(RaiseEquipWgt);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(150, 0));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        EditMacPosRB = new QLineEdit(groupBox_5);
        EditMacPosRB->setObjectName(QString::fromUtf8("EditMacPosRB"));
        EditMacPosRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacPosRB->setReadOnly(true);

        gridLayout_6->addWidget(EditMacPosRB, 0, 0, 1, 1);

        EditMacEleRB = new QLineEdit(groupBox_5);
        EditMacEleRB->setObjectName(QString::fromUtf8("EditMacEleRB"));
        EditMacEleRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacEleRB->setReadOnly(true);

        gridLayout_6->addWidget(EditMacEleRB, 1, 0, 1, 1);

        EditMacSpdRB = new QLineEdit(groupBox_5);
        EditMacSpdRB->setObjectName(QString::fromUtf8("EditMacSpdRB"));
        EditMacSpdRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacSpdRB->setReadOnly(true);

        gridLayout_6->addWidget(EditMacSpdRB, 2, 0, 1, 1);

        EditMacTempRB = new QLineEdit(groupBox_5);
        EditMacTempRB->setObjectName(QString::fromUtf8("EditMacTempRB"));
        EditMacTempRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacTempRB->setReadOnly(true);

        gridLayout_6->addWidget(EditMacTempRB, 3, 0, 1, 1);

        EditLegDisRB = new QLineEdit(groupBox_5);
        EditLegDisRB->setObjectName(QString::fromUtf8("EditLegDisRB"));
        EditLegDisRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditLegDisRB->setReadOnly(true);

        gridLayout_6->addWidget(EditLegDisRB, 4, 0, 1, 1);

        EditOutLimitRB = new QLineEdit(groupBox_5);
        EditOutLimitRB->setObjectName(QString::fromUtf8("EditOutLimitRB"));
        EditOutLimitRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditOutLimitRB->setReadOnly(true);

        gridLayout_6->addWidget(EditOutLimitRB, 5, 0, 1, 1);

        EditInLimitRB = new QLineEdit(groupBox_5);
        EditInLimitRB->setObjectName(QString::fromUtf8("EditInLimitRB"));
        EditInLimitRB->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditInLimitRB->setReadOnly(true);

        gridLayout_6->addWidget(EditInLimitRB, 6, 0, 1, 1);


        gridLayout->addWidget(groupBox_5, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(RaiseEquipWgt);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(150, 0));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        EditMacPosRF = new QLineEdit(groupBox_3);
        EditMacPosRF->setObjectName(QString::fromUtf8("EditMacPosRF"));
        EditMacPosRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacPosRF->setReadOnly(true);

        gridLayout_5->addWidget(EditMacPosRF, 0, 0, 1, 1);

        EditMacEleRF = new QLineEdit(groupBox_3);
        EditMacEleRF->setObjectName(QString::fromUtf8("EditMacEleRF"));
        EditMacEleRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacEleRF->setReadOnly(true);

        gridLayout_5->addWidget(EditMacEleRF, 1, 0, 1, 1);

        EditMacSpdRF = new QLineEdit(groupBox_3);
        EditMacSpdRF->setObjectName(QString::fromUtf8("EditMacSpdRF"));
        EditMacSpdRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacSpdRF->setReadOnly(true);

        gridLayout_5->addWidget(EditMacSpdRF, 2, 0, 1, 1);

        EditMacTempRF = new QLineEdit(groupBox_3);
        EditMacTempRF->setObjectName(QString::fromUtf8("EditMacTempRF"));
        EditMacTempRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacTempRF->setReadOnly(true);

        gridLayout_5->addWidget(EditMacTempRF, 3, 0, 1, 1);

        EditLegDisRF = new QLineEdit(groupBox_3);
        EditLegDisRF->setObjectName(QString::fromUtf8("EditLegDisRF"));
        EditLegDisRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditLegDisRF->setReadOnly(true);

        gridLayout_5->addWidget(EditLegDisRF, 4, 0, 1, 1);

        EditOutLimitRF = new QLineEdit(groupBox_3);
        EditOutLimitRF->setObjectName(QString::fromUtf8("EditOutLimitRF"));
        EditOutLimitRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditOutLimitRF->setReadOnly(true);

        gridLayout_5->addWidget(EditOutLimitRF, 5, 0, 1, 1);

        EditInLimitRF = new QLineEdit(groupBox_3);
        EditInLimitRF->setObjectName(QString::fromUtf8("EditInLimitRF"));
        EditInLimitRF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditInLimitRF->setReadOnly(true);

        gridLayout_5->addWidget(EditInLimitRF, 6, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(RaiseEquipWgt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(150, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        EditMacPosLF = new QLineEdit(groupBox_2);
        EditMacPosLF->setObjectName(QString::fromUtf8("EditMacPosLF"));
        EditMacPosLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacPosLF->setReadOnly(true);

        gridLayout_3->addWidget(EditMacPosLF, 0, 0, 1, 1);

        EditMacEleLF = new QLineEdit(groupBox_2);
        EditMacEleLF->setObjectName(QString::fromUtf8("EditMacEleLF"));
        EditMacEleLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacEleLF->setReadOnly(true);

        gridLayout_3->addWidget(EditMacEleLF, 1, 0, 1, 1);

        EditMacSpdLF = new QLineEdit(groupBox_2);
        EditMacSpdLF->setObjectName(QString::fromUtf8("EditMacSpdLF"));
        EditMacSpdLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacSpdLF->setReadOnly(true);

        gridLayout_3->addWidget(EditMacSpdLF, 2, 0, 1, 1);

        EditMacTempLF = new QLineEdit(groupBox_2);
        EditMacTempLF->setObjectName(QString::fromUtf8("EditMacTempLF"));
        EditMacTempLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditMacTempLF->setReadOnly(true);

        gridLayout_3->addWidget(EditMacTempLF, 3, 0, 1, 1);

        EditLegDisLF = new QLineEdit(groupBox_2);
        EditLegDisLF->setObjectName(QString::fromUtf8("EditLegDisLF"));
        EditLegDisLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditLegDisLF->setReadOnly(true);

        gridLayout_3->addWidget(EditLegDisLF, 4, 0, 1, 1);

        EditOutLimitLF = new QLineEdit(groupBox_2);
        EditOutLimitLF->setObjectName(QString::fromUtf8("EditOutLimitLF"));
        EditOutLimitLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditOutLimitLF->setReadOnly(true);

        gridLayout_3->addWidget(EditOutLimitLF, 5, 0, 1, 1);

        EditInLimitLF = new QLineEdit(groupBox_2);
        EditInLimitLF->setObjectName(QString::fromUtf8("EditInLimitLF"));
        EditInLimitLF->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        EditInLimitLF->setReadOnly(true);

        gridLayout_3->addWidget(EditInLimitLF, 6, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_6 = new QGroupBox(RaiseEquipWgt);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(RaiseEquipWgt);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_2 = new QGridLayout(groupBox_7);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(groupBox_7);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_7);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(RaiseEquipWgt);

        QMetaObject::connectSlotsByName(RaiseEquipWgt);
    } // setupUi

    void retranslateUi(QWidget *RaiseEquipWgt)
    {
        RaiseEquipWgt->setWindowTitle(QApplication::translate("RaiseEquipWgt", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RaiseEquipWgt", "\345\215\207\350\275\246\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RaiseEquipWgt", "\345\215\207\350\275\246\350\256\276\345\244\207\346\225\210\346\236\234", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("RaiseEquipWgt", "\346\224\257\350\205\277-\345\267\246\345\220\216", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("RaiseEquipWgt", "\346\224\257\350\205\277-\345\217\263\345\220\216", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("RaiseEquipWgt", "\346\224\257\350\205\277-\345\217\263\345\211\215", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("RaiseEquipWgt", "\346\224\257\350\205\277-\345\267\246\345\211\215", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("RaiseEquipWgt", "\346\225\205\351\232\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("RaiseEquipWgt", "\346\225\205\351\232\234\347\273\237\350\256\241\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RaiseEquipWgt: public Ui_RaiseEquipWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAISEEQUIPWGT_H
