/********************************************************************************
** Form generated from reading UI file 'wholeequipwgt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHOLEEQUIPWGT_H
#define UI_WHOLEEQUIPWGT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WholeEquipWgt
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *BtnChassis;
    QProgressBar *progressBarChassis;
    QPushButton *BtnCtrlEquip;
    QProgressBar *progressBarCtrlEquip;
    QPushButton *BtnVerticalEquip;
    QProgressBar *progressBarVerticalEquip;
    QPushButton *BtnRaiseEquip;
    QProgressBar *progressBarRaiseEquip;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QListWidget *listWidgetError;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QListWidget *listWidgetDecision;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *WholeEquipWgt)
    {
        if (WholeEquipWgt->objectName().isEmpty())
            WholeEquipWgt->setObjectName(QString::fromUtf8("WholeEquipWgt"));
        WholeEquipWgt->resize(1088, 644);
        horizontalLayout = new QHBoxLayout(WholeEquipWgt);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(WholeEquipWgt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(250, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        BtnChassis = new QPushButton(groupBox);
        BtnChassis->setObjectName(QString::fromUtf8("BtnChassis"));

        gridLayout->addWidget(BtnChassis, 0, 0, 1, 1);

        progressBarChassis = new QProgressBar(groupBox);
        progressBarChassis->setObjectName(QString::fromUtf8("progressBarChassis"));
        progressBarChassis->setValue(24);

        gridLayout->addWidget(progressBarChassis, 0, 1, 1, 1);

        BtnCtrlEquip = new QPushButton(groupBox);
        BtnCtrlEquip->setObjectName(QString::fromUtf8("BtnCtrlEquip"));

        gridLayout->addWidget(BtnCtrlEquip, 1, 0, 1, 1);

        progressBarCtrlEquip = new QProgressBar(groupBox);
        progressBarCtrlEquip->setObjectName(QString::fromUtf8("progressBarCtrlEquip"));
        progressBarCtrlEquip->setValue(24);

        gridLayout->addWidget(progressBarCtrlEquip, 1, 1, 1, 1);

        BtnVerticalEquip = new QPushButton(groupBox);
        BtnVerticalEquip->setObjectName(QString::fromUtf8("BtnVerticalEquip"));

        gridLayout->addWidget(BtnVerticalEquip, 2, 0, 1, 1);

        progressBarVerticalEquip = new QProgressBar(groupBox);
        progressBarVerticalEquip->setObjectName(QString::fromUtf8("progressBarVerticalEquip"));
        progressBarVerticalEquip->setValue(24);

        gridLayout->addWidget(progressBarVerticalEquip, 2, 1, 1, 1);

        BtnRaiseEquip = new QPushButton(groupBox);
        BtnRaiseEquip->setObjectName(QString::fromUtf8("BtnRaiseEquip"));

        gridLayout->addWidget(BtnRaiseEquip, 3, 0, 1, 1);

        progressBarRaiseEquip = new QProgressBar(groupBox);
        progressBarRaiseEquip->setObjectName(QString::fromUtf8("progressBarRaiseEquip"));
        progressBarRaiseEquip->setValue(24);

        gridLayout->addWidget(progressBarRaiseEquip, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(WholeEquipWgt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(250, 16777215));

        verticalLayout->addWidget(groupBox_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(WholeEquipWgt);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(300, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidgetError = new QListWidget(groupBox_3);
        listWidgetError->setObjectName(QString::fromUtf8("listWidgetError"));

        gridLayout_2->addWidget(listWidgetError, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(WholeEquipWgt);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(300, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        listWidgetDecision = new QListWidget(groupBox_4);
        listWidgetDecision->setObjectName(QString::fromUtf8("listWidgetDecision"));

        gridLayout_3->addWidget(listWidgetDecision, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(WholeEquipWgt);

        QMetaObject::connectSlotsByName(WholeEquipWgt);
    } // setupUi

    void retranslateUi(QWidget *WholeEquipWgt)
    {
        WholeEquipWgt->setWindowTitle(QApplication::translate("WholeEquipWgt", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("WholeEquipWgt", "\347\212\266\346\200\201\346\200\273\350\247\210", 0, QApplication::UnicodeUTF8));
        BtnChassis->setText(QApplication::translate("WholeEquipWgt", "\345\272\225\347\233\230", 0, QApplication::UnicodeUTF8));
        BtnCtrlEquip->setText(QApplication::translate("WholeEquipWgt", "\346\216\247\345\210\266\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        BtnVerticalEquip->setText(QApplication::translate("WholeEquipWgt", "\350\265\267\347\253\226\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        BtnRaiseEquip->setText(QApplication::translate("WholeEquipWgt", "\345\215\207\350\275\246\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("WholeEquipWgt", "\350\275\246\350\276\206\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("WholeEquipWgt", "\346\225\205\351\232\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("WholeEquipWgt", "\345\206\263\347\255\226\346\224\257\346\214\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WholeEquipWgt: public Ui_WholeEquipWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHOLEEQUIPWGT_H
