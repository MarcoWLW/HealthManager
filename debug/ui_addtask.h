/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addtask
{
public:
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_confirm;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *addtask)
    {
        if (addtask->objectName().isEmpty())
            addtask->setObjectName(QString::fromUtf8("addtask"));
        addtask->resize(482, 460);
        pushButton_cancel = new QPushButton(addtask);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(360, 390, 75, 23));
        pushButton_confirm = new QPushButton(addtask);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(120, 390, 75, 23));
        label = new QLabel(addtask);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 51, 21));
        comboBox = new QComboBox(addtask);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 40, 101, 21));
        label_2 = new QLabel(addtask);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 61, 21));
        comboBox_2 = new QComboBox(addtask);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(160, 110, 111, 22));
        label_3 = new QLabel(addtask);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 190, 71, 21));
        comboBox_3 = new QComboBox(addtask);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(170, 190, 69, 22));
        label_4 = new QLabel(addtask);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 80, 54, 12));
        label_5 = new QLabel(addtask);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 80, 54, 12));

        retranslateUi(addtask);

        QMetaObject::connectSlotsByName(addtask);
    } // setupUi

    void retranslateUi(QWidget *addtask)
    {
        addtask->setWindowTitle(QApplication::translate("addtask", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("addtask", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_confirm->setText(QApplication::translate("addtask", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addtask", "\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addtask", "G\346\225\205\351\232\234\350\257\212\346\226\255", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addtask", "T\346\200\247\350\203\275\351\200\200\345\214\226", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addtask", "W\347\273\264\346\212\244\344\277\235\345\205\273", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("addtask", "\344\273\273\345\212\241\346\235\245\346\272\220\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("addtask", "\344\272\272\344\270\272\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addtask", "\350\207\252\345\212\250\347\224\237\346\210\220", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("addtask", "\347\273\264\344\277\256\344\274\230\345\205\210\347\272\247\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("addtask", "\344\270\200\347\272\247", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addtask", "\344\272\214\347\272\247", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addtask", "\344\270\211\347\272\247", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("addtask", "\344\273\273\345\212\241\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addtask", "test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addtask: public Ui_addtask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
