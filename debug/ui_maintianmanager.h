/********************************************************************************
** Form generated from reading UI file 'maintianmanager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTIANMANAGER_H
#define UI_MAINTIANMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_maintianmanager
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_task;
    QPushButton *pushButton_addtask;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QComboBox *comboBox;
    QGroupBox *groupBox_resource;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_advise;
    QPushButton *pushButton_upstep;
    QPushButton *pushButton_downstep;
    QLabel *label;
    QGroupBox *groupBox_back;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_confirm;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox_back_rank;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QLabel *label_9;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *maintianmanager)
    {
        if (maintianmanager->objectName().isEmpty())
            maintianmanager->setObjectName(QString::fromUtf8("maintianmanager"));
        maintianmanager->resize(1028, 619);
        horizontalLayout_3 = new QHBoxLayout(maintianmanager);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_task = new QGroupBox(maintianmanager);
        groupBox_task->setObjectName(QString::fromUtf8("groupBox_task"));
        pushButton_addtask = new QPushButton(groupBox_task);
        pushButton_addtask->setObjectName(QString::fromUtf8("pushButton_addtask"));
        pushButton_addtask->setGeometry(QRect(420, 270, 75, 23));
        tableWidget = new QTableWidget(groupBox_task);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 70, 411, 192));
        label_2 = new QLabel(groupBox_task);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 30, 61, 16));
        comboBox = new QComboBox(groupBox_task);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 30, 81, 21));

        horizontalLayout_2->addWidget(groupBox_task);

        groupBox_resource = new QGroupBox(maintianmanager);
        groupBox_resource->setObjectName(QString::fromUtf8("groupBox_resource"));
        textEdit = new QTextEdit(groupBox_resource);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 50, 381, 221));

        horizontalLayout_2->addWidget(groupBox_resource);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_advise = new QGroupBox(maintianmanager);
        groupBox_advise->setObjectName(QString::fromUtf8("groupBox_advise"));
        pushButton_upstep = new QPushButton(groupBox_advise);
        pushButton_upstep->setObjectName(QString::fromUtf8("pushButton_upstep"));
        pushButton_upstep->setGeometry(QRect(400, 220, 75, 23));
        pushButton_downstep = new QPushButton(groupBox_advise);
        pushButton_downstep->setObjectName(QString::fromUtf8("pushButton_downstep"));
        pushButton_downstep->setGeometry(QRect(400, 260, 75, 23));
        label = new QLabel(groupBox_advise);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 60, 291, 151));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(groupBox_advise);

        groupBox_back = new QGroupBox(maintianmanager);
        groupBox_back->setObjectName(QString::fromUtf8("groupBox_back"));
        label_3 = new QLabel(groupBox_back);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 30, 71, 16));
        label_4 = new QLabel(groupBox_back);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 30, 54, 12));
        pushButton_confirm = new QPushButton(groupBox_back);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(410, 250, 75, 23));
        label_5 = new QLabel(groupBox_back);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 60, 54, 12));
        label_6 = new QLabel(groupBox_back);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 90, 81, 21));
        comboBox_back_rank = new QComboBox(groupBox_back);
        comboBox_back_rank->setObjectName(QString::fromUtf8("comboBox_back_rank"));
        comboBox_back_rank->setGeometry(QRect(130, 90, 91, 22));
        label_7 = new QLabel(groupBox_back);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 130, 91, 16));
        comboBox_2 = new QComboBox(groupBox_back);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(120, 120, 101, 22));
        label_8 = new QLabel(groupBox_back);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 180, 81, 20));
        comboBox_3 = new QComboBox(groupBox_back);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(120, 180, 111, 22));
        label_9 = new QLabel(groupBox_back);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(280, 40, 54, 12));
        textEdit_2 = new QTextEdit(groupBox_back);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(280, 60, 181, 151));

        horizontalLayout->addWidget(groupBox_back);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(maintianmanager);

        QMetaObject::connectSlotsByName(maintianmanager);
    } // setupUi

    void retranslateUi(QWidget *maintianmanager)
    {
        maintianmanager->setWindowTitle(QApplication::translate("maintianmanager", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_task->setTitle(QApplication::translate("maintianmanager", "\344\273\273\345\212\241\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        pushButton_addtask->setText(QApplication::translate("maintianmanager", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("maintianmanager", "\344\273\273\345\212\241\346\235\245\346\272\220\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("maintianmanager", "\345\205\250\351\203\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\344\272\272\344\270\272\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\350\207\252\345\212\250\347\224\237\346\210\220", 0, QApplication::UnicodeUTF8)
        );
        groupBox_resource->setTitle(QApplication::translate("maintianmanager", "\344\277\235\351\232\234\350\265\204\346\272\220\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("maintianmanager", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\274\226\345\217\267</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\206\263\347\255\226</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_advise->setTitle(QApplication::translate("maintianmanager", "\347\273\264\344\277\256\346\255\245\351\252\244\345\273\272\350\256\256", 0, QApplication::UnicodeUTF8));
        pushButton_upstep->setText(QApplication::translate("maintianmanager", "\344\270\212\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
        pushButton_downstep->setText(QApplication::translate("maintianmanager", "\344\270\213\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("maintianmanager", "\346\265\213\350\257\225  \347\254\254\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
        groupBox_back->setTitle(QApplication::translate("maintianmanager", "\345\256\236\346\226\275\345\217\215\351\246\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("maintianmanager", "\344\272\213\344\273\266\346\240\207\350\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("maintianmanager", "test", 0, QApplication::UnicodeUTF8));
        pushButton_confirm->setText(QApplication::translate("maintianmanager", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("maintianmanager", "\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("maintianmanager", "\347\273\264\344\277\256\347\272\247\345\210\253\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_back_rank->clear();
        comboBox_back_rank->insertItems(0, QStringList()
         << QApplication::translate("maintianmanager", "\347\216\260\345\234\272\347\272\247", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\345\220\216\351\200\201\347\272\247", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("maintianmanager", "\347\273\264\344\277\256\347\261\273\345\210\253\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("maintianmanager", "\344\277\256\345\244\215\346\200\247\347\273\264\344\277\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\351\242\204\351\230\262\346\200\247\347\273\264\344\277\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\347\273\264\346\212\244\344\277\235\345\205\273", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("maintianmanager", "\347\273\264\344\277\256\347\273\223\346\236\234\345\217\215\351\246\210\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("maintianmanager", "\345\267\262\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\345\277\275\347\225\245\350\257\245\351\241\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("maintianmanager", "\345\206\263\347\255\226\346\234\211\350\257\257", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("maintianmanager", "\347\273\264\344\277\256\345\206\205\345\256\271\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class maintianmanager: public Ui_maintianmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTIANMANAGER_H
