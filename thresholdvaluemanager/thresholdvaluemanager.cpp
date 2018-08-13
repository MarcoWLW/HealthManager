#include "thresholdvaluemanager.h"

ThresholdValueManager::ThresholdValueManager()
{
    /**personal init*/
    ThresholdInfoMap.clear();
}
ThresholdValueManager::~ThresholdValueManager()
{

}
bool ThresholdValueManager::AddThresholdInfo(QString TopicName, ThresholdValueInfo Info)
{
    if(ThresholdInfoMap.find(TopicName) == ThresholdInfoMap.end())
    {
        ThresholdInfoMap[TopicName] = Info;
        return true;
    }
    return false;
}
bool ThresholdValueManager::DeleteThresholdInfoByTopic(QString TopicName)
{
    if(ThresholdInfoMap.find(TopicName) != ThresholdInfoMap.end())
    {
        ThresholdInfoMap.erase(ThresholdInfoMap.find(TopicName));
        return true;
    }
    return false;
}
bool ThresholdValueManager::ModifyThresholdInfo(QString TopicName, ThresholdValueInfo Info)
{
    if(ThresholdInfoMap.find(TopicName) != ThresholdInfoMap.end())
    {
        ThresholdInfoMap[TopicName] = Info;
        return true;
    }
    return false;
}
struct ThresholdValueInfo ThresholdValueManager::GetThresholdInfoByTopic(QString TopicName)
{
    if(ThresholdInfoMap.find(TopicName) != ThresholdInfoMap.end())
    {
        return ThresholdInfoMap[TopicName] ;
    }
    return ThresholdValueInfo();
}
