class OPTRE_M247;

class 73_M247 : OPTRE_M247 {
        displayName="[73] M247";
        baseWeapon="73_M247";
        descriptionShort="UNSC LMG";
        magazineWell[]=
        {
//            "CBA_127x99",
            "73_LMG"
        };
        magazines[]=
        {
        "73_100rnd_M247_Mag_Tracer_Yellow"
        };
        modes[]=
        		{
        			"FullAuto",
        			"Single",
        			"close",
        			"short",
        			"medium",
        			"far"
        		};
        		magazineReloadTime=5;
        		class Single: Single
        		{
        			class StandardSound
        			{
        				begin1[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-01.ogg",
        					1,
        					1,
        					1500
        				};
        				begin2[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-02.ogg",
        					1,
        					1,
        					1500
        				};
        				begin3[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-03.ogg",
        					1,
        					1,
        					1500
        				};
        				begin4[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-04.ogg",
        					1,
        					1,
        					1500
        				};
        				begin5[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-05.ogg",
        					1,
        					1,
        					1500
        				};
        				begin6[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-06.ogg",
        					1,
        					1,
        					1500
        				};
        				begin7[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-07.ogg",
        					1,
        					1,
        					1500
        				};
        				begin8[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-08.ogg",
        					1,
        					1,
        					1500
        				};
        				begin9[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-09.ogg",
        					1,
        					1,
        					1500
        				};
        				soundBegin[]=
        				{
        					"begin1",
        					0.2,
        					"begin2",
        					0.1,
        					"begin3",
        					0.1,
        					"begin4",
        					0.1,
        					"begin5",
        					0.1,
        					"begin6",
        					0.1,
        					"begin7",
        					0.1,
        					"begin8",
        					0.1,
        					"begin9",
        					0.1
        				};
        				class SoundTails
        				{
        					class TailTrees
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*trees";
        					};
        					class TailForest
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*forest";
        					};
        					class TailInterior
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
        							1.9952624,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="interior";
        					};
        					class TailMeadows
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
        					};
        					class TailHouses
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*houses";
        					};
        				};
        			};
        			class SilencedSound: BaseSoundModeType
        			{
        				begin1[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
        					1,
        					1,
        					300
        				};
        				begin2[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
        					1,
        					1,
        					300
        				};
        				begin3[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
        					1,
        					1,
        					300
        				};
        				closure1[]={};
        				closure2[]={};
        				soundBegin[]=
        				{
        					"begin1",
        					0.33000001,
        					"begin2",
        					0.33000001,
        					"begin3",
        					0.34
        				};
        				soundClosure[]=
        				{
        					"closure1",
        					0.5,
        					"closure2",
        					0.5
        				};
        				weaponSoundEffect="DefaultRifle";
        			};
        			reloadTime=0.1;
        			dispersion=0.00079999998;
        		};
        		class FullAuto: FullAuto
        		{
        			class StandardSound
        			{
        				begin1[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-01.ogg",
        					1,
        					1,
        					1500
        				};
        				begin2[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-02.ogg",
        					1,
        					1,
        					1500
        				};
        				begin3[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-03.ogg",
        					1,
        					1,
        					1500
        				};
        				begin4[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-04.ogg",
        					1,
        					1,
        					1500
        				};
        				begin5[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-05.ogg",
        					1,
        					1,
        					1500
        				};
        				begin6[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-06.ogg",
        					1,
        					1,
        					1500
        				};
        				begin7[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-07.ogg",
        					1,
        					1,
        					1500
        				};
        				begin8[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-08.ogg",
        					1,
        					1,
        					1500
        				};
        				begin9[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-09.ogg",
        					1,
        					1,
        					1500
        				};
        				soundBegin[]=
        				{
        					"begin1",
        					0.2,
        					"begin2",
        					0.1,
        					"begin3",
        					0.1,
        					"begin4",
        					0.1,
        					"begin5",
        					0.1,
        					"begin6",
        					0.1,
        					"begin7",
        					0.1,
        					"begin8",
        					0.1,
        					"begin9",
        					0.1
        				};
        				class SoundTails
        				{
        					class TailTrees
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*trees";
        					};
        					class TailForest
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*forest";
        					};
        					class TailInterior
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
        							1.9952624,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="interior";
        					};
        					class TailMeadows
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
        					};
        					class TailHouses
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*houses";
        					};
        				};
        			};
        			class SilencedSound: BaseSoundModeType
        			{
        				begin1[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
        					1,
        					1,
        					300
        				};
        				begin2[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
        					1,
        					1,
        					300
        				};
        				begin3[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
        					1,
        					1,
        					300
        				};
        				closure1[]={};
        				closure2[]={};
        				soundBegin[]=
        				{
        					"begin1",
        					0.33000001,
        					"begin2",
        					0.33000001,
        					"begin3",
        					0.34
        				};
        				soundClosure[]=
        				{
        					"closure1",
        					0.5,
        					"closure2",
        					0.5
        				};
        				weaponSoundEffect="DefaultRifle";
        			};
        			reloadTime=0.075000003;
        			dispersion=0.0015;
        			textureType="fastAuto";
        		};
        		class close: FullAuto
        		{
        			burst=25;
        			aiRateOfFire=0.5;
        			aiRateOfFireDistance=120;
        			minRange=0;
        			minRangeProbab=0.050000001;
        			midRange=60;
        			midRangeProbab=0.69999999;
        			maxRange=120;
        			maxRangeProbab=0.039999999;
        			showToPlayer=0;
        			dispersion=0.0020000001;
        		};
        		class short: close
        		{
        			burst=25;
        			aiRateOfFire=0.5;
        			aiRateOfFireDistance=350;
        			minRange=120;
        			minRangeProbab=0.050000001;
        			midRange=180;
        			midRangeProbab=0.69999999;
        			maxRange=350;
        			maxRangeProbab=0.039999999;
        			dispersion=0.0015;
        		};
        		class medium: close
        		{
        			burst=25;
        			aiRateOfFire=1;
        			aiRateOfFireDistance=700;
        			minRange=250;
        			minRangeProbab=0.050000001;
        			midRange=500;
        			midRangeProbab=0.60000002;
        			maxRange=700;
        			maxRangeProbab=0.1;
        			dispersion=0.0012000001;
        		};
        		class far: close
        		{
        			burst=25;
        			aiRateOfFire=2;
        			aiRateOfFireDistance=1200;
        			minRange=700;
        			minRangeProbab=0.039999999;
        			midRange=1000;
        			midRangeProbab=0.5;
        			maxRange=1200;
        			maxRangeProbab=0.0099999998;
        			dispersion=0.001;
        		};
	}