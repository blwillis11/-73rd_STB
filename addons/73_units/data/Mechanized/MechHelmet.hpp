class VES_CH252_MAR_Crew;

class 73_CH252_Mech_Crew_Base:VES_CH252_MAR_Crew{
    displayName="[73] CH252C Mechanized Helmet [Base]";
    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_Base.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "V_FZ_Armor\Data\Helmets\Materials\V_CH252C.rvmat"
    };
    ace_hearing_protection=0.94999999;
    ace_hearing_lowerVolume=0.85000002;
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_Base.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Helmets\Materials\V_CH252C.rvmat"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252C_Helmet";
        Roles="Base";
    };
};
class 73_CH252_Mech_Crew_SORC:73_CH252_Mech_Crew_Base
{
    displayName="[73] CH252C Mechanized Helmet [SORC]";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_SORC.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_SORC.paa"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252C_Helmet";
        Roles="SORC";
    };
};
class 73_CH252_Mech_Crew_Lead:73_CH252_Mech_Crew_Base{
    displayName="[73] CH252C Mechanized Helmet [Lead]";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_Lead.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_Lead.paa"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252C_Helmet";
        Roles="Lead";
    };
};
class 73_CH252_Mech_Crew_OpsChief:73_CH252_Mech_Crew_Base
{
    displayName="[73] CH252C Mechanized Helmet [Ops Chief]";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_OpsChief.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_OpsChief.paa"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252C_Helmet";
        Roles="Ops Chief";
    };
};
class 73_CH252_Mech_Crew_DetachLead:73_CH252_Mech_Crew_Base{
    displayName="[73] CH252C Mechanized Helmet [Detach Lead]";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_DetachLead.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73rd_Mech_Helmet_DetachLead.paa"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252C_Helmet";
        Roles="Detach Lead";
    };
};
class 73_CH252_Mech_Crew_Morgan:73_CH252_Mech_Crew_Base{
    displayName="[73] CH252C Mechanized Helmet [Morgan]";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73_Morgan_Helmet.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73_Morgan_Helmet.paa"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_cus_CH252C_Helmet";
        Variant="Morgan";
    };
};
class 73_CH252_Mech_Crew_Mitchell:73_CH252_Mech_Crew_Base{
    displayName="[73] CH252C Mechanized Helmet [Mitchell]";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Mechanized\Helmets\73_Mitchell_Helmet.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\Mechanized\Helmets\73_Mitchell_Helmet.paa"
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_cus_CH252C_Helmet";
        Variant="Mitchell";
    };
};