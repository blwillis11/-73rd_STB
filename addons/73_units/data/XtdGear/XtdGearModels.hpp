class XtdGearModels
{
    class CfgWeapons 
    {
		class 73_ACE_CH252D_Helmet
		{
			label= "[73] CH252D Helmet";
			author="73rd S-4 Team";
			options[] = 
			{
				"Roles"
			};
			class Roles
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Roles";
                values[]= 
				{
					"Recruit",
					"Standard",
					"SORC",
					"Leadership",
					"Officer"
				};
			};
		};
		class 73_ACE_CH252C_Helmet
		{
			label= "[73] CH252C Helmet";
			author="73rd S-4 Team";
			options[] =
			{
				"Roles"
			};
			class Roles
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Roles";
                values[]=
				{
					"Base",
					"SORC",
					"Lead",
					"Ops Chief",
					"Detach Lead"
				};
			};
		};
		class 73_ACE_cus_CH252C_Helmet
		{
			label= "[73] CH252C Custom Helmet";
			author="73rd S-4 Team";
			options[] =
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variant";
                values[]=
				{
					"Morgan",
					"Mitchell"
				};
			};
		};
		class 73_ACE_cus_CH252D_Helmet
		{
			label= "[73] CH252D Helmet [Custom]";
			author="73rd S-4 Team";
			options[] =
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variant";
                values[]=
				{
				    "Price",
					"Salmon",
					"Winters",
					"Metal",
					"Solaman",
					"Vargas",
					"Mendez"
				};
			};
		};
		class 73_ACE_M52_Armor
		{
			label= "[73] M52 Vest";
			author="73rd S-4 Team";
			options[] = 
			{
				"Billet",
				"MOS"
			};
			class Billet
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Billet";
                values[]= 
				{
					"Recruit",
					"Command"
				};
			};
			class MOS
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "MOS";
				values[]=
				{
					"Basic",
					"Medic",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
		};
		class 73_ACE_M52_Armor_ACo
		{
			label= "[73] M52 Vest [ACo]";
			author="73rd S-4 Team";
			options[] = 
			{
				"Billet",
				"MOS"
			};
			class Billet
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Billet";
                values[]= 
				{
					"Standard",
					"SORC",
					"CmdSORC",
					"ACoCmd",
				};
			};
			class MOS
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "MOS";
				values[]=
				{
					"Basic",
					"SORC",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
		};
		class 73_ACE_M52_Armor_ACo1Plt
		{
			label= "[73] M52 Vest [ACo1Plt]";
			author="73rd S-4 Team";
			options[] = 
			{
				"Billet",
				"MOS"
			};
			class Billet
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Billet";
                values[]= 
				{
					"Standard",
					"SORC",
					"Lead",
					"PltSORC",
					"PltCmd",
				};
			};
			class MOS
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "MOS";
				values[]=
				{
					"Basic",
					"SORC",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
		};
		class 73_ACE_M52_Armor_ACo2Plt
		{
			label= "[73] M52 Vest [ACo2Plt]";
			author="73rd S-4 Team";
			options[] = 
			{
				"Billet",
				"MOS"
			};
			class Billet
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Billet";
                values[]= 
				{
					"Standard",
					"SORC",
					"Lead",
					"PltSORC",
					"PltCmd",
				};
			};
			class MOS
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "MOS";
				values[]=
				{
					"Basic",
					"SORC",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
		};
		class 73_ACE_ODST_BDU
		{
			label= "[73] M52D BDU";
			author="73rd S-4 Team";
			options[] =
			{
				"Camo",
				"Collar"
			};
			class Camo
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Camo";
                values[]=
				{
					"Urban",
					"Woodland",
					"Arid",
					"Winter"
				};
			};
			class Collar
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Collar";
				values[]=
				{
					"On",
					"Off"
				};
			};
		};
		class 73_ACE_Mech_BDU
		{
			label= "[73] Mechanized BDU";
			author="73rd S-4 Team";
			options[] =
			{
				"Type",
				"Collar",
				"Camo"
			};
			class Type
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Type";
                values[]=
				{
					"Light",
					"Medium",
					"Heavy",
				};
			};
			class Collar
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Collar";
				values[]=
				{
					"On",
					"Off"
				};
			};
			class Camo
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Camo";
                values[]=
                {
                    "Urban",
                    "Woodland",
                    "Arid",
                    "Winter"
                };
            };
		};
		class 73_ACE_Mech_Vest
		{
			label= "[73] Mechanized Vest";
			author="73rd S-4 Team";
			options[] =
			{
				"Type",
				"Configuration"
			};
			class Type
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Type";
                values[]=
				{
					"Light",
					"Medium",
					"Heavy",
				};
			};
			class Configuration
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Configuration";
				values[]=
				{
					"A",
					"B"
				};
			};
		};
		class 73_ACE_Dress_Uniform
		{
			label = "[73] Dress Uniform";
			author="73rd S-4 Team";
			options[] = 
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Variant";
				values[]= 
				{
					"ODST",
					"Aviation",
					"Officer",
					"B. Smith",
					"J. Knight",
					"D. Freeman",
					"L. Price",
					"B. Salmon",
					"J. Ramirez",
					"C. Barrier",
					"J. Fletcher",
					"D. Dex",
					"K. Cypher",
					"R. Deckard",
					"T. Bear",
					"C. Winters",
					"J. Mustang",
					"J. Mendez",
					"V. Tidakszel",
					"S. Cyrus",
					"P. Metal",
					"R. Solaman"
				};
			};
		};
	};
	class cfgVehicles
	{
		class 73_ACE_Rucksack
		{
			label = "[73] Rucksack";
			author="73rd S-4 Team";
			options[] = 
			{
				"Role"
			};
			class Role
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Role";
				values[] =
				{
					"Standard",
					"Medic",
					"Heavy",
					"RTO",
					"Invis",
					"Invis RTO"
				};
			};
		};
	};
};