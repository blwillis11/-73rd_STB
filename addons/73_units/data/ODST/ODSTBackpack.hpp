class 173_jumpack: NSM_neutral_XD_1_backpack
{
	author = "73rd S-4 Team";
	displayName = "[73] Series 8 Jetpack";
	scope= 2;
	scopeArsenal=2;
	NSM_jumppack_is_jumppack = 1;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 100; 
	NSM_jumppack_recharge = 1;
	NSM_jumppack_jump_types[] = {
		{
			"Forward Jump",// Name of jump
			{
				30,		//forward velo  [meters/second] (0)
				12,		//verticle velo [meters/second] (1)
				30,		//cost          [no units]      (2)
				0,		//angle         [degrees]       (3)
				0,		//directional   [bool, 0 = false, 1 = true] (4)
				0		//can prone jump [bool, 0 = false, 1 = true] (5)
			}
		},
		{
			"Short Jump",// Name of jump
			{
				10,		//forward velo  [meters/second] (0)
				12,		//verticle velo [meters/second] (1)
				20,		//cost          [no units]      (2)
				0,		//angle         [degrees]       (3)
				0,		//directional   [bool, 0 = false, 1 = true] (4)
				0		//can prone jump [bool, 0 = false, 1 = true] (5)
			}
		},
		{
			"High Jump",// Name of jump
			{
				12,		//forward velo  [meters/second] (0)
				30,		//verticle velo [meters/second] (1)
				30,		//cost          [no units]      (2)
				0,		//angle         [degrees]       (3)
				0,		//directional   [bool, 0 = false, 1 = true] (4)
				0		//can prone jump [bool, 0 = false, 1 = true] (5)
			}
		},
		{
			"Air Brakes",// Name of jump
			{
				0,		//forward velo  [meters/second] (0)
				1,		//verticle velo [meters/second] (1)
				10,		//cost          [no units]      (2)
				0,		//angle         [degrees]       (3)
				0,		//directional   [bool, 0 = false, 1 = true] (4)
				0		//can prone jump [bool, 0 = false, 1 = true] (5)
			}
		},
	};
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
	NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
	NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
	NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
	NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
	model="\OPTRE_weapons\backpacks\jetpack.p3d";
	maximumload = 200;
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"optre_weapons\backpacks\data\jetpack_co.paa"
	};
	picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
};
class 173_util_jumpack:173_jumpack {
	displayName = "[73] Series 8 Jetpack [Util]";
	maximumload = 250;
}
class 173_LR_jumpack:173_jumpack {
	displayName = "[73] Series 8 Jetpack [LR]";
	maximumload = 200;
	tf_encryptionCode="tf_west_radio_code";
	tf_dialog="rt1523g_radio_dialog";
	tf_subtype="digital_lr";
	tf_range=50000;
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio=1;
}
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
	tf_range=25000;
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
	tf_range=25000;
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio=1;
	class XtdGearInfo
	{
		model = "73_ACE_Rucksack";
		Role = "Invis RTO";
	};
};