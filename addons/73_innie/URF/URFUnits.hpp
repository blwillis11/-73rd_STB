class OPTRE_Ins_URF_Soldier_Base;
class 73_URFBase: OPTRE_Ins_URF_Soldier_Base
{
    faction = "73_URF";
    author="73rd S-4 Team";
    editorSubcategory = "73_Infantry_EdSubCat";
    uniformClass="73_URF_Uniform";
    model="\OPTRE_FC_Units\Marines\h3_uniform.p3d";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "73_innie\URF\data\URF_uniform_CO.paa"
    };
    weapons[]=
    {
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "Throw",
        "Put"
    };
    Items[]=
    {
        "73_Biofoam_Light","73_Biofoam_Light","73_Biofoam_Light"
    };
    RespawnItems[]=
    {
        "73_Biofoam_Light","73_Biofoam_Light","73_Biofoam_Light"
    };
    magazines[]={
    };
    respawnMagazines[]={
    };
    linkedItems[]=
    {
        "73_M52B_Armor_Vest",
        "73_CH255_Helmet_Visor",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "OPTRE_NVG"
    };
    respawnLinkedItems[]=
    {
        "73_M52B_Armor_Vest",
        "73_CH255_Helmet_Visor",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "OPTRE_NVG"
    };
    class HitPoints: HitPoints
    {
        class HitFace: HitFace
        {
        };
        class HitNeck: HitNeck
        {
            armor=3;
        };
        class HitHead: HitHead
        {
        };
        class HitPelvis: HitPelvis
        {
            armor=3;
        };
        class HitAbdomen: HitAbdomen
        {
            armor=3;
        };
        class HitDiaphragm: HitDiaphragm
        {
            armor=3;
        };
        class HitChest: HitChest
        {
            armor=3;
        };
        class HitBody: HitBody
        {
        };
        class HitArms: HitArms
        {
            armor=3;
        };
        class HitHands: HitHands
        {
            armor=3;
        };
        class HitLegs: HitLegs
        {
            armor=3;
        };
    };
};
class 73_URF_Soldier_Rifleman: 73_URFBase
{
    scope=2;
    scopeCurator=2;
    displayName="Rifleman";
    weapons[]=
    {
        "OPTRE_HMG38_Rifle",
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "OPTRE_HMG38_Rifle",
        "Throw",
        "Put"
    };
    magazines[]=
    {
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke"
    };
    respawnMagazines[]=
    {
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke"
    };
};
class 73_URF_Soldier_Medic: 73_URFBase
{
    scope=2;
    scopeCurator=2;
    displayName="Medic";
    attendant = 1;
    weapons[]=
    {
        "OPTRE_HMG38_Rifle",
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "OPTRE_HMG38_Rifle",
        "Throw",
        "Put"
    };
    magazines[]=
    {
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke"
    };
    respawnMagazines[]=
    {
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_40Rnd_30x06_Mag",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke",
        "OPTRE_M2_Smoke"
    };
    Items[]=
    {
     "73_Biofoam_Light","73_Biofoam_Light","73_Biofoam_Light", "73_Morphine", "73_Adrenaline", "73_PlasmaIV"
    };
    RespawnItems[]=
    {
     "73_Biofoam_Light","73_Biofoam_Light","73_Biofoam_Light", "73_Morphine", "73_Adrenaline", "73_PlasmaIV"
    };
};