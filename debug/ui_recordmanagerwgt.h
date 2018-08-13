/********************************************************************************
** Form generated from reading UI file 'recordmanagerwgt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDMANAGERWGT_H
#define UI_RECORDMANAGERWGT_H

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
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordManagerWgt
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *StartDecernBtn;
    QPushButton *FinishDecernBtn;
    QTableWidget *LabelInfoTable;
    QPushButton *ChooseLabelBtn;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QPushButton *UpdateBtn;
    QHBoxLayout *horizontalLayout;
    QPushButton *SyncBtn;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QListWidget *RecordList;

    void setupUi(QWidget *RecordManagerWgt)
    {
        if (RecordManagerWgt->objectName().isEmpty())
            RecordManagerWgt->setObjectName(QString::fromUtf8("RecordManagerWgt"));
        RecordManagerWgt->resize(810, 491);
        gridLayout_4 = new QGridLayout(RecordManagerWgt);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(RecordManagerWgt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        StartDecernBtn = new QPushButton(groupBox);
        StartDecernBtn->setObjectName(QString::fromUtf8("StartDecernBtn"));

        gridLayout->addWidget(StartDecernBtn, 1, 1, 1, 1);

        FinishDecernBtn = new QPushButton(groupBox);
        FinishDecernBtn->setObjectName(QString::fromUtf8("FinishDecernBtn"));

        gridLayout->addWidget(FinishDecernBtn, 1, 2, 1, 1);

        LabelInfoTable = new QTableWidget(groupBox);
        LabelInfoTable->setObjectName(QString::fromUtf8("LabelInfoTable"));

        gridLayout->addWidget(LabelInfoTable, 0, 0, 1, 3);


        verticalLayout->addWidget(groupBox);

        ChooseLabelBtn = new QPushButton(RecordManagerWgt);
        ChooseLabelBtn->setObjectName(QString::fromUtf8("ChooseLabelBtn"));
        ChooseLabelBtn->setMaximumSize(QSize(120, 16777215));
        ChooseLabelBtn->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(ChooseLabelBtn);

        groupBox_2 = new QGroupBox(RecordManagerWgt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);

        UpdateBtn = new QPushButton(groupBox_2);
        UpdateBtn->setObjectName(QString::fromUtf8("UpdateBtn"));
        UpdateBtn->setMaximumSize(QSize(120, 20));

        gridLayout_2->addWidget(UpdateBtn, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SyncBtn = new QPushButton(RecordManagerWgt);
        SyncBtn->setObjectName(QString::fromUtf8("SyncBtn"));

        horizontalLayout->addWidget(SyncBtn);

        groupBox_3 = new QGroupBox(RecordManagerWgt);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        RecordList = new QListWidget(groupBox_3);
        RecordList->setObjectName(QString::fromUtf8("RecordList"));

        gridLayout_3->addWidget(RecordList, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);


        gridLayout_4->addLayout(horizontalLayout, 0, 1, 1, 1);


        retranslateUi(RecordManagerWgt);

        QMetaObject::connectSlotsByName(RecordManagerWgt);
    } // setupUi

    void retranslateUi(QWidget *RecordManagerWgt)
    {
        RecordManagerWgt->setWindowTitle(QApplication::translate("RecordManagerWgt", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RecordManagerWgt", "\346\240\207\347\255\276\344\277\241\346\201\257\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        StartDecernBtn->setText(QApplication::translate("RecordManagerWgt", "\345\274\200\345\247\213\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        FinishDecernBtn->setText(QApplication::translate("RecordManagerWgt", "\345\201\234\346\255\242\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        ChooseLabelBtn->setText(QString());
        groupBox_2->setTitle(QApplication::translate("RecordManagerWgt", "\346\240\207\347\255\276\344\277\241\346\201\257\345\206\231\345\205\245", 0, QApplication::UnicodeUTF8));
        UpdateBtn->setText(QApplication::translate("RecordManagerWgt", "\345\206\231\345\205\245", 0, QApplication::UnicodeUTF8));
        SyncBtn->setText(QApplication::translate("RecordManagerWgt", "\345\220\214\346\255\245", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("RecordManagerWgt", "\350\256\276\345\244\207\345\261\245\345\216\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RecordManagerWgt", "\350\256\276\345\244\207\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RecordManagerWgt: public Ui_RecordManagerWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDMANAGERWGT_H
