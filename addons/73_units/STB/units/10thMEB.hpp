class 73_10MEBBase: 73_UnitBase
{
    faction = "73_ACo";
    editorCategory = "73_10MEB";
    editorSubcategory = "73_Infantry_EdSubCat";
};
class 73_Marine_Rifleman_AT: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Rifleman [AT]";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"NSWep_MA5B","73_MPRL", "Throw", "Put"};
    respawnWeapons[] = {"NSWep_MA5B","73_MPRL", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmourPouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};
    respawnLinkedItems[] = {"Rogue_CEArmourPouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};

    magazines[] = {"NSWep_762x51_NATO","OPTRE_M41_Twin_HEAT"};
    respawnMagazines[] = {"NSWep_762x51_NATO","OPTRE_M41_Twin_HEAT"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};
class 73_Marine_Marksman: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Marksman";

    facewear = "G_Combat";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"73_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"73_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmourNSV2","Rogue_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};
    respawnLinkedItems[] = {"Rogue_CEArmourNSV2","Rogue_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};

    magazines[] = {"73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","73_15Rnd_95x40_Mag_Tracer_Yellow","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};
class 73_Marine_RTO_Operator: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine RTO Operator";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
    respawnLinkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

    magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
};
class 73_Marine_Medic: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Medic";

    facewear = "";

    attendant = 1;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmourNSPouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};
    respawnLinkedItems[] = {"Rogue_CEArmourNSPouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};

    magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
};
class 73_Marine_Grenadier: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Grenadier";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"NSWep_MA5BGL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
    respawnWeapons[] = {"NSWep_MA5BGL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"1Rnd_HE_Grenade_shell","NSWep_762x51_NATO","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"1Rnd_HE_Grenade_shell","NSWep_762x51_NATO","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
};
class 73_Marine_Rifleman: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Rifleman";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"NSWep_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
    respawnWeapons[] = {"NSWep_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"NSWep_762x51_NATO","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"NSWep_762x51_NATO","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
};
class 73_Marine_Autorifleman: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Autorifleman";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"73_M247","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"73_M247","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmourV2Pouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};
    respawnLinkedItems[] = {"Rogue_CEArmourV2Pouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};

    magazines[] = {"73_200rnd_M247_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"73_200rnd_M247_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};
class 73_Marine_Sniper: 73_10MEBBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Sniper";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "Rogue_CEUniform_U_B";
    backpack = "Rogue_CEBackpack";

    weapons[] = {"73_SRS99AM","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"73_SRS99AM","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
    respawnLinkedItems[] = {"Rogue_CEArmour","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

    magazines[] = {"73_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"73_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};