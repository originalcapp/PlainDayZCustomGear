class CfgPatches
{
    class PlainDayZdonoGearGloves
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
class CfgVehicles
{
    class Clothing;
    class TacticalGloves_ColorBase;
    class diddybod_gloves: TacticalGloves_ColorBase
    {
        displayName="Diddy-Bod`s Tactical Gloves";
        descriptionShort=;
        scope=2;
        varWetMax=0.2;
		itemSize[]={2,2};
		heatIsolation = 0.8;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Gloves\diddybod_tacgloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\diddybod_tacgloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\diddybod_tacgloves.paa"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1,{"DZ\Characters\gloves\data\TacticalGloves.rvmat"}},
						{0.69999999,{"DZ\Characters\gloves\data\TacticalGloves.rvmat"}},
						{0.5,{"DZ\Characters\gloves\data\TacticalGloves_damage.rvmat"}},
						{0.30000001,{"DZ\Characters\gloves\data\TacticalGloves_damage.rvmat"}},
						{0,{"DZ\Characters\gloves\data\TacticalGloves_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class SurgicalGloves_ColorBase;
	class modform_medic_gloves: SurgicalGloves_ColorBase
	{
		scope=2;
		displayName="MoD Form 100`s Surgical Gloves";
		descriptionShort="";
		varWetMax=0.1;
		itemSize[]={2,2};
		heatIsolation= 0.7;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Gloves\modform_surgical_gloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\modform_surgical_gloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\modform_surgical_gloves.paa"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1,{"DZ\Characters\gloves\data\Surgical_Gloves.rvmat"}},
						{0.69999999,{"DZ\Characters\gloves\data\Surgical_Gloves.rvmat"}},
						{0.5,{"DZ\Characters\gloves\data\Surgical_Gloves_damage.rvmat"}},
						{0.30000001,{"DZ\Characters\gloves\data\Surgical_Gloves_damage.rvmat"}},
						{0,{"DZ\Characters\gloves\data\Surgical_Gloves_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class WoolGloves_ColorBase;
	class kiracrystal_gloves: WoolGloves_ColorBase
	{
		scope=2;
		displayName="kiracrystal`s Gloves";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Gloves\kiracrystal_gloves.paa",
			"PlainDayZCustomGear\Data\DonoGear\Gloves\kiracrystal_gloves.paa",
			"PlainDayZCustomGear\Data\DonoGear\Gloves\kiracrystal_gloves.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};
	class OMNOGloves_ColorBase;
	class wingsweden_gloves: OMNOGloves_ColorBase
	{
		scope = 2;
		displayName = "WingSWEDEN`s Gloves";
		descriptionShort = "";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Gloves\wingsweden_gloves.paa",
			"PlainDayZCustomGear\Data\DonoGear\Gloves\wingsweden_gloves.paa",
			"PlainDayZCustomGear\Data\DonoGear\Gloves\wingsweden_gloves.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
		};
	};
	class froot_gloves: wingsweden_gloves
	{
		scope = 2;
		displayName = "Froot`s Gloves";
		descriptionShort = "";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Gloves\froot_gloves.paa",
			"PlainDayZCustomGear\Data\DonoGear\Gloves\froot_gloves.paa",
			"PlainDayZCustomGear\Data\DonoGear\Gloves\froot_gloves.paa"
		};
	};
	class 2geteilt_gloves: diddybod_gloves
    {
		scope=2;
        displayName="2geteilt`s Gloves";
        descriptionShort=;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Gloves\2geteilt_gloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\2geteilt_gloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\2geteilt_gloves.paa"
        };
    };
	class carling51_gloves: wingsweden_gloves
    {
		scope=2;
        displayName="Carling`s Gloves";
        descriptionShort=;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Gloves\carling51_gloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\carling51_gloves.paa",
            "PlainDayZCustomGear\Data\DonoGear\Gloves\carling51_gloves.paa"
        };
    };
};