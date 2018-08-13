#ifndef THRESHOLDVALUEMANAGER_H
#define THRESHOLDVALUEMANAGER_H
#include <map>
#include <qstring.h>
#include <QMap>
struct ThresholdValueInfo
{
    /**unique id*/
    int UniqueID;
    /**paramters*/
    QString Para;
    /**status*/
    int Status;
    /**upper limit*/
    double UpperLimit;
    /**lower limit*/
    double LowerLimit;
    ThresholdValueInfo()
    {
        UniqueID = -1;
        Para = "";
        Status = -1;
        UpperLimit = -1;
        LowerLimit = -1;
    }
};

class ThresholdValueManager
{
private:
      explicit ThresholdValueManager();
      virtual ~ThresholdValueManager();
     QMap<QString,ThresholdValueInfo > ThresholdInfoMap;

public:
     QMap<QString,ThresholdValueInfo > & GetThresholdInfoMap(){return ThresholdInfoMap;}
     bool AddThresholdInfo(QString,ThresholdValueInfo);
     bool DeleteThresholdInfoByTopic(QString);
     bool ModifyThresholdInfo(QString,ThresholdValueInfo);
     struct ThresholdValueInfo GetThresholdInfoByTopic(QString);

};

#endif // THRESHOLDVALUEMANAGER_H
