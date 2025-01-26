class OPTRE_FC_M52B_Armor_Vest;
class 73_M52B_Armor_Vest: OPTRE_FC_M52B_Armor_Vest
{
    author="73rd S-4 Team";
    scope=2;
    displayName="[73] OCLF Armour";
    hiddenSelectionsTextures[]=
    {
        "\73_innie\OCLF\data\OCLF_vest_co.paa"
    };
    class HitpointsProtectionInfo
    {
        class Neck
        {
            hitpointName="HitNeck";
            armor=15;
            passThrough=0.1;
        };
        class Legs
        {
            hitpointName="HitLegs";
            armor=10;
            passThrough=0.1;
        };
        class Arms
        {
            hitpointName="HitArms";
            armor=20;
            passThrough=0.1;
        };
        class Hands
        {
            hitpointName="HitHands";
            armor=10;
            passThrough=0.1;
        };
        class Chest
        {
            hitpointName="HitChest";
            armor=20;
            passThrough=0.1;
        };
        class Diaphragm
        {
            hitpointName="HitDiaphragm";
            armor=20;
            passThrough=0.1;
        };
        class Abdomen
        {
            hitpointName="HitAbdomen";
            armor=20;
            passThrough=0.1;
        };
        class Body
        {
            hitpointName="HitBody";
            armor=20;
            passThrough=0.1;
        };
    };
};