class launch_I_Titan_short_F;

class 73_MPRL:launch_I_Titan_short_F{
		displayName = "[73] M41 SSR MAV/AW";
		author= "73rd S-4 Team";
		baseWeapon="73_MPLR";
		scope = 2;
		scopeArsenal = 2;
		enabled = 1;
		weaponInfoType = "";
		magazines[]={
			"73_HEAT",
		};
		magazineWell[] = {"73_rockets","OPTRE_M41"};
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\ExplosiveWeapons\Launcher_icon.paa";
		// modelOptics = "ace_javelin\data\reticle_titan.p3d";
		modelOptics[] 	= {"\OPTRE_Weapons\Rockets\M41_Optic_2x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_4x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_10x.p3d"};
		picture 		= "\OPTRE_weapons\rockets\icons\launcher.paa";
		model 			= "\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		handAnim[] =
		{
			"OFP2_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm",
			"Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\m41_hand_anim_Spartan.rtm"
		};
		cursor					= "OPTRE_M41R";
		pictureWire 			= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Launchers\Double.paa";
		ODST_1					= "OPTRE_ODST_HUD_AmmoCount_RL";
		Glasses					= "OPTRE_GLASS_HUD_AmmoCount_RL";
		Eye						= "OPTRE_EYE_HUD_AmmoCount_RL";
		HUD_BulletInARows		= 2;
		HUD_TotalPosibleBullet	= 2;
		cmImmunity = 1;
		hiddenSelections[]= {
			"camo",
			"camo_tubes",
			"camo_details"
		};
		hiddenSelectionsTextures[] = {
			"optre_weapons\rockets\data\launcher_co.paa",
			"optre_weapons\rockets\data\tubes_co.paa",
			"optre_weapons\rockets\data\logos_ca.paa"
		};
		modes[] = {"Direct", "TopDown"};
		class Direct: Mode_SemiAuto
		{
			displayName = "Direct seek";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			ace_missileGuidance_attackProfile = "JAV_DIR";
		};
		class TopDown: Direct {
			displayName = "Top-down seek";
			textureType = "topDown";
			ace_missileGuidance_attackProfile = "JAV_TOP";
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		canLock	= 2;
		weaponLockDelay	= 2;
		lockAcquire = 1;
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		class OpticsModes
		{
			class StepScope
			{
				opticsID															= 1;
				useModelOptics														= 1;
				opticsPPEffects[]													=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare															= 0;
				opticsZoomMin														= 0.125;
				opticsZoomMax														= 0.042;
				opticsZoomInit														= 0.125;
				distanceZoomMin														= 300;
				distanceZoomMax														= 300;
				memoryPointCamera													= "eye";
				cameraDir															= "look";
				visionMode[]														=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				//modelOptics[]                                   				= {"\OPTRE_Weapons\Rockets\M41_Optic_2x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_4x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_10x.p3d"};
				thermalMode[]														= {0,1};
				opticsDisablePeripherialVision										= 1;
				discretefov[]														= {0.125,0.0525,0.042};
				discreteInitIndex													= 0;
			};
		};

	};