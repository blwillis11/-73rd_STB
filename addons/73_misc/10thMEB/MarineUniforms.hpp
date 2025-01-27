class Rogue_CEUniform_U_B;

class 73_CEUniform_U_B: Rogue_CEUniform_U_B
{
    author="Rogue771";
    scope=2;
    allowedSlots[]=
    {
        "BACKPACK_SLOT"
    };
    displayName="[73] Marine Uniform";
    picture="\Rogue_CEMarine\ui\RogueCE.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_CEUniform_inf_B";
        containerClass="Supply90";
        mass=80;
    };
};
////////////////////////////////////////////Marine Dress Uniforms\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
class 73_Dress_Base;

class 10MEB_O_Dress_Uniform: 73_Dress_Base
{
    displayName="[10MEB] Infantry Dress Uniform [Marine]";

    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="10MEB_Dress_Uniform_v";
    };
};