class MA_H4_SAW;

class 73_H4_SAW:MA_H4_SAW
{
    displayName="[73] M739 SAW";
    baseWeapon="73_H4_SAW";
    descriptionShort="UNSC LMG";

    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_barrelMass = 15;
    ace_overheating_dispersion = 0.9;
    ace_overheating_mrbs = 3000;
};

class OPTRE_M247;

class 73_M247 : OPTRE_M247 {
        displayName="[73] M247";
        baseWeapon="73_M247";
        descriptionShort="UNSC MMG";

		ace_overheating_barrelMass = 15;
		ace_overheating_dispersion = 0.9;
		ace_overheating_mrbs = 3000;

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
            reloadTime=0.145;
            dispersion=0.00079999998;
        };
        class FullAuto: FullAuto
        {
            reloadTime=0.12;
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
