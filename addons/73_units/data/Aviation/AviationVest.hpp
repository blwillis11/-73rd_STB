//aviation Vest

class 73_M56_Light: MA_M56R_Light_Vest
{
	author="73rd S-4 Team";
	displayName="[73] M56 Armor [Pilot]";
	scope=2;
	scopeArsenal=2;
	hiddenSelectionsTextures[]=
	{
		"73_units\data\Aviation\Vest\H3_Aviation_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
		"73_units\data\Aviation\Vest\H3_Aviation_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
		"73_units\data\ODST\Vest\Thigh_Pouch_co.paa",		//camo3 (Thigh Pouch)
		"73_units\data\ODST\Vest\Reach_Armor_Upper_co.paa",    //camo4 (Reach Upper Armor)
		"73_units\data\ODST\Vest\Reach_Armor_Lower_co.paa",    //camo5 (Reach Lower Armor)
		"73_units\data\ODST\Vest\Canisters_co.paa",      //camo6 (Canisters)
		"73_units\data\ODST\Vest\Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
		"73_units\data\ODST\Vest\Sniper_co.paa", 	//camo8 (Sniper Shoulders)
		"73_units\data\ODST\Vest\CQB_co.paa", 	 //camo9 (CQB Shoulders)
		"73_units\data\ODST\Vest\Shoulder_Radio_Green_co.paa"	 //camo10 (Shoulder Radio)
	};
	class ItemInfo: ItemInfo
	{
		vestType="Rebreather";
		
	};
	class XtdGearInfo
	{
		Model="73_ACE_M56_Armor";
		Variant="Standard";
		Roles="Aviation";
	};
};