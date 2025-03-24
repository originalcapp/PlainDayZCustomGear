class CfgPatches
{
    class PlainDayZGearHead
	{
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Pants",
            "DZ_Characters_Tops",
            "DZ_Gear_Containers",
            "DZ_Characters_Headgear",
            "DZ_Data"
        };
    };
};
class DefaultAction;
class CfgVehicles
{
    class BaseballCap_ColorBase;
    class plain_dayz_baseballcap: BaseballCap_ColorBase
	{
		displayName="Plain DayZ Custom BaseballCap";
		descriptionShort="";
		scope = 2;
		absorbency=0.0;
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\HeadGear\plain_dayz_baseballcap.paa",
            "PlainDayZCustomGear\Data\HeadGear\plain_dayz_baseballcap.paa",
            "PlainDayZCustomGear\Data\HeadGear\plain_dayz_baseballcap.paa"
        };
	};
};