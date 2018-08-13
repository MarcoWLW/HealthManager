#ifndef VERTICALEQUIP_H
#define VERTICALEQUIP_H
#include "QString"
#include <vector>
/**struct of vertical equip*/
struct VerticalEquipInfo
{
    QString MacElec;//电机电流
    QString MacSpd;//电机转速
    QString MacTemp;//电机温度
    QString OutPre;//出油口压力
    QString OilPre;//油液压力
    QString OilTemp;//油液温度
    QString CtrlElec;//控制电流
    VerticalEquipInfo()
    {
        MacElec = "";
        MacSpd = "";
        MacTemp = "";
        OutPre = "";
        OilPre = "";
        OilTemp = "";
        CtrlElec = "";
    }
};
class VerticalEquip
{
public:
    static VerticalEquip* instance(){static VerticalEquip *p = new VerticalEquip;return p;}
    void SetCurrentData(VerticalEquipInfo *info){CurData = info;}
    VerticalEquipInfo *GetCurentData(){return CurData;}
    void AddHistoryData(VerticalEquipInfo data){HisDataVec.push_back(data);}
    void ClearHisoryData(){HisDataVec.clear();}
    std::vector<VerticalEquipInfo> &GetHistoryData(){return HisDataVec;}
private:
    VerticalEquip();
    /**personal data*/
    VerticalEquipInfo *CurData;
    std::vector<VerticalEquipInfo> HisDataVec;
};

#endif // VERTICALEQUIP_H
