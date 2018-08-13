#ifndef DATAACQUISITIONMANAGER_H
#define DATAACQUISITIONMANAGER_H

#include <qthread.h>
#include <stdlib.h>
#include "stddef.h"
#include <stdio.h>
#include "markup/Markup.h"
#include "raiseequipwgt/raiseequip.h"
#include "verticalequipwgt/verticalequip.h"
#include "chassis/chassis.h"
#include "controlequipment/controlequipmentinfo.h"
#include "qstringlist.h"
#include "mydbmanager/mydbmanager.h"
class DataAcquisitionThread : public QThread
{
public:
    DataAcquisitionThread();
private:
    virtual void run();
    void getVerticalEquipData();
    void GetRaiseEquipData();
    void getBatteryMessage();
    void getDeapuLeftmsg();
    void getDeapuRightMsg();
    void getDC1Msg();
    void getDC2Msg();
    void getACMsg();
    void getAxleMsg();
    void getCalculateMsg();
    void getExchangeMsg();
    void getStoreMsg();
    void getInterfaceMsg();
};

#endif // DATAACQUISITIONMANAGER_H
