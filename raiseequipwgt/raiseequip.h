#ifndef RAISEEQUIP_H
#define RAISEEQUIP_H
#include <QString>
#include <vector>
#include <QObject>
/**升车设备*/
struct RaiseEquipInfo
{
    /**数组中排列顺序按照 LF RF LB RB */
    std::vector<QString> MacPos;//电机位置
    std::vector<QString> MacElec;//电机电流
    std::vector<QString>  MacSpd;//电机转速
    std::vector<QString>  MacTemp;//电机温度
    std::vector<QString> MacDis;//支腿行程
    std::vector<QString> OutLimit;//伸出极限限位
    std::vector<QString> InLimit;//回收极限限位
    QString LevelNess;
};
class RaiseEquip
{
public:
    static RaiseEquip *instance(){static RaiseEquip *p = new RaiseEquip;return p;}
    void SetCurrentData(RaiseEquipInfo *info){CurData = info;}
    RaiseEquipInfo *GetCurentData(){return CurData;}
    void AddHistoryData(RaiseEquipInfo data){HisDataVec.push_back(data);}
    void ClearHisoryData(){HisDataVec.clear();}
    std::vector<RaiseEquipInfo> &GetHistoryData(){return HisDataVec;}
private:
    RaiseEquipInfo *CurData;
    std::vector<RaiseEquipInfo> HisDataVec;
    RaiseEquip();
};

#endif // RAISEEQUIP_H
