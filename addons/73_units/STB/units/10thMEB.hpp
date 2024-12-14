class 73_10MEBBase: 73_UnitBase
{
    faction = "73_ACo";
    editorCategory = "73_10MEB";
    editorSubcategory = "73_Infantry_EdSubCat";
};
class 73_Marine_Rifleman_AT: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Marine Rifleman [AT]";

    editorSubcategory = "73_10th_MEB_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_Rogue_CEUniform_U_B";
    backpack = "73_73_Marine_Rifleman_AT1_backpack";

    weapons[] = {"NSWep_MA5B","73_MPRL", "Throw", "Put"};
    respawnWeapons[] = {"NSWep_MA5B","73_MPRL", "Throw", "Put"};

    linkedItems[] = {"Rogue_CEArmourPouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};
    respawnLinkedItems[] = {"Rogue_CEArmourPouch","Rogue_CEHelmetV2","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};

    magazines[] = {"NSWep_762x51_NATO","OPTRE_M41_Twin_HEAT"};
    respawnMagazines[] = {"NSWep_762x51_NATO","OPTRE_M41_Twin_HEAT"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};