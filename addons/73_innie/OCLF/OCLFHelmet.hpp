class OPTRE_FC_CH255_Helmet_Visor;

class 73_CH255_Helmet_Visor: OPTRE_FC_CH255_Helmet_Visor
{
    scope=1;
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_innie\OCLF\data\OCLF_helmet_CO.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\OPTRE_FC_Units\Marines\h3_helmet.p3d";
        mass=30;
        modelSides[]={6};
        passThrough=0.15000001;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_innie\OCLF\data\OCLF_helmet_CO.paa"
        };
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