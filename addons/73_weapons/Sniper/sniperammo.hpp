class nswep_m232_145x114_APFSDS;
class NSWep_M232_145x114_APFSDS_TG;
class NSWep_M232_145x114_APFSDS_TR;
class NSWep_M232_145x114_APFSDS_TC;
class NSWep_M232_145x114_APFSDS_TIR;

class 73_M232_145x114_APFSDS:nswep_m232_145x114_APFSDS
{
    ACE_ballisticCoefficients= "[0.757]"
    ACE_muzzleVelocities[] = {1400,1400};
}
class 73_M232_145x114_APFSDS_TG:nswep_m232_145x114_APFSDS_TG
{
    ACE_ballisticCoefficients= "[0.757]"
    ACE_muzzleVelocities[] = {1400,1400};
}
class 73_M232_145x114_APFSDS_TR:NSWep_M232_145x114_APFSDS_TR
{
    ACE_ballisticCoefficients= "[0.757]"
    ACE_muzzleVelocities[] = {1400,1400};
}
class 73_M232_145x114_APFSDS_TC:NSWep_M232_145x114_APFSDS_TC
{
    ACE_ballisticCoefficients= "[0.757]"
    ACE_muzzleVelocities[] = {1400,1400};
}
class 73_M232_145x114_APFSDS_TIR:NSWep_M232_145x114_APFSDS_TIR
{
    ACE_ballisticCoefficients= "[0.757]"
    ACE_muzzleVelocities[] = {1400,1400};
}
class 73_M232_145x114_APFSDS_Stun:NSWep_M232_145x114_APFSDS_TC
{
    ACE_ballisticCoefficients= "[0.757]"
    ACE_muzzleVelocities[] = {1400,1400};
    ACE_damageType="stun";
    hit=99;
}