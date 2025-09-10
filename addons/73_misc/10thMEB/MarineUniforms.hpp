class MA_Marine_BDU_Medium_Brown;

class 73_CEUniform_U_B: MA_Marine_BDU_Medium_Brown
{
    scope=2;
    allowedSlots[]=
    {
        "BACKPACK_SLOT"
    };
    displayName="[73] Marine Uniform";
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