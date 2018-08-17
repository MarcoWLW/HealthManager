#-------------------------------------------------
#
# Project created by QtCreator 2018-07-31T13:26:08
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HealthManager
TEMPLATE = app


SOURCES += main.cpp\
    addtask/addtask.cpp \
    healthmanagerwgt/healthmanagerwgt.cpp \
    maintianmanager/maintianmanager.cpp \
    raiseequipwgt/raiseequipwgt.cpp \
    recordmanagerwgt/recordmanagerwgt.cpp \
    chassis/chassis.cpp \
    controlequipment/controlequipment.cpp \
    verticalequipwgt/verticalequipwgt.cpp \
    wholeequipwgt/wholeequipwgt.cpp \
    mydbmanager/mydbmanager.cpp \
    thresholdvaluemanager/thresholdvaluemanager.cpp \
    markup/Markup.cpp \
    raiseequipwgt/raiseequip.cpp\ 
    verticalequipwgt/verticalequip.cpp\
    dataacquisitionthread/dataacquisitionthread.cpp \
    chassis/chassisinfo.cpp \
    recordmanagerwgt/recordmanager.cpp \
    controlequipment/controlequipmentinfo.cpp \
    mydefine/mydefine.cpp \
    connectionpool/connectionpool.cpp

HEADERS  +=    addtask/addtask.h \
    healthmanagerwgt/healthmanagerwgt.h \
    maintianmanager/maintianmanager.h \
    raiseequipwgt/raiseequipwgt.h \
    recordmanagerwgt/recordmanagerwgt.h \
    chassis/chassis.h \
    controlequipment/controlequipment.h \
    verticalequipwgt/verticalequipwgt.h \
    wholeequipwgt/wholeequipwgt.h \
    mydbmanager/mydbmanager.h \
    thresholdvaluemanager/thresholdvaluemanager.h \
    markup/Markup.h \
    dataacquisitionthread/dataacquisitionthread.h \
    verticalequipwgt/verticalequip.h\
     raiseequipwgt/raiseequip.h \
    chassis/chassisinfo.h \
    recordmanagerwgt/recordmanager.h \
    controlequipmentinfo.h \
    controlequipment/controlequipmentinfo.h \
    mydefine/mydefine.h \
    connectionpool/connectionpool.h

FORMS    +=    addtask/addtask.ui \
    healthmanagerwgt/healthmanagerwgt.ui \
    maintianmanager/maintianmanager.ui \
    raiseequipwgt/raiseequipwgt.ui \
    recordmanagerwgt/recordmanagerwgt.ui \
    chassis/chassis.ui \
    controlequipment/controlequipment.ui \
    verticalequipwgt/verticalequipwgt.ui \
    wholeequipwgt/wholeequipwgt.ui
