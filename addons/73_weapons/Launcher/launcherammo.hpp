class ACE_Javelin_FGM148;
class OPTRE_M41_Rocket_HEAP;
class OPTRE_M41_Rocket_HEAT_Guided;

class 73_HEAT:ACE_Javelin_FGM148{
    warheadName="TandemHEAT";
    submunitionAmmo = "ammo_Penetrator_Vorona";
    maxSpeed=250;
    irLock = 1;
    airLock = 1;
    laserLock = 0;
    nvLock = 0;
    proximityExplosionDistance = 0;
    missileLockMaxDistance = 20000;
    missileLockMinDistance = 50;
    missileKeepLockedCone = 75;
    missileLockCone = 30;
    fuseDistance = 30;
    timeToLive = 40;
    typicalSpeed = 200;
    trackOversteer = 0.9;
    sideAirFriction = 0.40000001;
    cmImmunity = 0.75;
    initTime = .5;
    class Components {
        class SensorsManagerComponent {
            class Components {
                class IRSensorComponent: SensorTemplateIR {
                    class AirTarget {
                        minRange=50;
                        maxRange=10000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };

                    class GroundTarget {
                        minRange=50;
                        maxRange=10000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };

                    maxTrackableSpeed=500;
                    angleRangeHorizontal=7;
                    angleRangeVertical=4.5;
                    maxTrackableATL=1000;
                };
            };
        };
    };
};
class 73_HEAP:OPTRE_M41_Rocket_HEAP{
    irLock = 0;
    airLock = 0;
    laserLock = 0;
    nvLock = 0;
    maxSpeed=250;
    allowAgainstInfantry = 1;
    proximityExplosionDistance = 0;
    hit = 220;
    indirectHit = 75;
    indirectHitRange = 6;
    explosive = 1;
};
class 73_HEAA:OPTRE_M41_Rocket_HEAT_Guided
{
    warheadName="TandemHEAT";
    submunitionAmmo = "ammo_Penetrator_Vorona";
    effectsMissile = "missile3";
    hit = 550;
    indirectHit = 150;
    proximityExplosionDistance = 1;
    indirectHitRange = 4;
    explosive=0.80000001;
    irLock = 1;
    airLock = 1;
    laserLock = 0;
    nvLock = 0;
    cmImmunity = 0.85;
    simulationStep = 0.0020000001;
    airFriction = 0.064999998;
    sideAirFriction = 0.20000001;
    manualControl = 1;
    maneuvrability = 28;
    maxControlRange = 30000;
    missileKeepLockedCone = 180;
    missileLockCone = 30;
    missileLockMaxDistance = 10000;
    missileLockMinDistance = 50;
    missileLockMaxSpeed = 1000;
    trackOversteer = 0.9;
    trackLead = 0.8;
    weaponLockSystem = 2;
    initTime = 0;
    thrustTime = 12;
    thrust = 120;
    maxSpeed = 400;

    class Components {
        class SensorsManagerComponent {
            class Components {
                class IRSensorComponent: SensorTemplateIR {
                    class AirTarget {
                        minRange=50;
                        maxRange=10000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };

                    class GroundTarget {
                        minRange=50;
                        maxRange=10000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };

                    maxTrackableSpeed=1000;
                    angleRangeHorizontal=7;
                    angleRangeVertical=4.5;
                    maxTrackableATL=2000;
                };
            };
        };
    };

    class ace_missileguidance {
        enabled = 0; // Enable missile guidance (0-disabled, 1-enabled)
        minDeflection = 0.00025;  // Minimum flap deflection for guidance
        maxDeflection = 0.001;  // Maximum flap deflection for guidance
        incDeflection = 0.0005;  // The increment in which deflection adjusts
        canVanillaLock = 1;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)
        defaultSeekerType = "SACLOS";  // Default seeker type
        seekerTypes[] = {"SALH", "SACLOS"};  // Seeker types available
        defaultSeekerLockMode = "LOAL";  // Default seeker lock mode
        seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available
        seekerAngle = 90;  // Angle in front of the missile which can be searched
        seekerAccuracy = 1;  // Seeker accuracy multiplier
        seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
        seekerMaxRange = 2500;  // Maximum from the missile which the seeker can visually search
        defaultAttackProfile = "LIN";  // Default attack profile
        attackProfiles[] = {"LIN", "DIR"};  // Attack profiles available
    };
};