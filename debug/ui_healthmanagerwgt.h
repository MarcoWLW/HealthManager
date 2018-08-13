/********************************************************************************
** Form generated from reading UI file 'healthmanagerwgt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALTHMANAGERWGT_H
#define UI_HEALTHMANAGERWGT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HealthManagerWgt
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *mainTabWidget;

    void setupUi(QWidget *HealthManagerWgt)
    {
        if (HealthManagerWgt->objectName().isEmpty())
            HealthManagerWgt->setObjectName(QString::fromUtf8("HealthManagerWgt"));
        HealthManagerWgt->resize(1085, 659);
        horizontalLayout = new QHBoxLayout(HealthManagerWgt);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mainTabWidget = new QTabWidget(HealthManagerWgt);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));

        horizontalLayout->addWidget(mainTabWidget);


        retranslateUi(HealthManagerWgt);

        mainTabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(HealthManagerWgt);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWgt)
    {
        HealthManagerWgt->setWindowTitle(QApplication::translate("HealthManagerWgt", "HealthManagerWgt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HealthManagerWgt: public Ui_HealthManagerWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHMANAGERWGT_H
