class 73_Rucksack: MA_M56S_Rucksack
{
	author="73rd S-4 Team";
	displayName = "[73] ODST Rucksack";
	scope= 2;
	scopeArsenal=2;
	hiddenSelectionsTextures[]=
	{
		"73_units\data\ODST\Backpack\ODST_Ruck_co.paa",
		"73_units\data\ODST\Backpack\Attachments\Backpack_Radio_Green_co.paa"
	};
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "Standard";
	};
};
class 73_Rucksack_med: MA_M56S_Rucksack_Medic
{
	author="73rd S-4 Team";
	displayName = "[73] ODST Rucksack [Medic]";
	scope= 2;
	scopeArsenal=2;
	hiddenSelectionsTextures[]=
	{
		"73_units\data\ODST\Backpack\Medical_ODST_Ruck_co.paa",
		"73_units\data\ODST\Backpack\Attachments\Backpack_Radio_Green_co.paa"
	};
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "Medic";
	};
};
class 73_Rucksack_hev: MA_M56S_Rucksack
{
	author="73rd S-4 Team";
	displayName = "[73] ODST Rucksack [Heavy]";
	scope= 2;
	scopeArsenal=2;
	maximumLoad = 400;
	hiddenSelectionsTextures[]=
	{
		"73_units\data\ODST\Backpack\ODST_Ruck_co.paa",
		"73_units\data\ODST\Backpack\Attachments\Backpack_Radio_Green_co.paa"
	};
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "Heavy";
	};
};

class 73_Rucksack_rto: MA_M56S_Rucksack_ODST_Radio
{
	displayName = "[73] ODST Rucksack [RTO]";
	author="73rd S-4 Team";
	scope=2;
	scopeArsenal=2;
	hiddenSelectionsTextures[]=
	{
		"73_units\data\ODST\Backpack\ODST_Ruck_co.paa",
		"73_units\data\ODST\Backpack\Attachments\Backpack_Radio_Green_co.paa"
	};
	tf_encryptionCode="tf_west_radio_code";
	tf_dialog="rt1523g_radio_dialog";
	tf_subtype="digital_lr";
	tf_range=45000;
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio=1;
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "RTO";
	};
};
//*****************************************************************************************************************************\\	
class 73_Rucksack_invis: MA_M56S_Rucksack
{
	displayName = "[73] No Backpack";
	model = "\A3\weapons_f\empty";
	scope= 2;
	scopeArsenal=2;
	hiddenSelectionsTextures[]=
	{
		"",
		""
	};
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "Invis";
	};
};
class 73_Rucksack_invis_rto: 73_Rucksack_invis
{
	displayName = "[73] No Backpack (RTO)";
	tf_encryptionCode="tf_west_radio_code";
	tf_dialog="rt1523g_radio_dialog";
	tf_subtype="digital_lr";
	tf_range=45000;
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio=1;
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "Invis RTO";
	};
};