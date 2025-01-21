class OPTRE_FC_CH255_Helmet_Visor;

class 73_CH255_Helmet_Visor: OPTRE_FC_CH255_Helmet_Visor
{
    scope=1;
    hiddenSelectionsTextures[]=
    {
        "73_innie\URF\data\URF_helmet_CO.paa"
    };
    class ItemInfo: HeadgearItem
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=10;
                passThrough=0.1;
            };
        };
    };
};