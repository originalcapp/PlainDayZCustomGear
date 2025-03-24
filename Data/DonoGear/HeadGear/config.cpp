class CfgPatches
{
    class PlainDayZdonoGearHeadgear
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
    class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Mich2001Helmet;
	class Switchable_Base;
    class diddybod_helmet: Mich2001Helmet
	{
		scope=2;
		displayName="Diddy-Bod`s Tactical Helmet";
		descriptionShort="";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		rotationFlags=2;
		weight=200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.1;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\diddybod_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\diddybod_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\diddybod_helmet.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1800;
					healthLevels[]=
					{
						{1,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},
						{0.69999999,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},
						{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},
						{0.30000001,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},
						{0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	class modform_medic_helmet: Mich2001Helmet
	{
		scope=2;
		displayName="MoD Form 100`s Tactical Helmet";
		descriptionShort="";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		rotationFlags=2;
		weight=200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.1;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\modform_medic_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\modform_medic_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\modform_medic_helmet.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1800;
					healthLevels[]=
					{
						{1,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},
						{0.69999999,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},
						{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},
						{0.30000001,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},
						{0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class MilitaryBeret_ColorBase;
	class modform_medic_beret: MilitaryBeret_ColorBase
	{
		scope=2;
		displayName="MoD Form 100`s Medic Beret";
		descriptionShort="";
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\modform_medic_beret.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\modform_medic_beret.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\modform_medic_beret.paa"
		};
	};
	class kiracrystal_beret: MilitaryBeret_ColorBase
	{
		scope=2;
		displayName="kiracrystal`s Beret";
		descriptionShort="";
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\kiracrystal_beret.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\kiracrystal_beret.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\kiracrystal_beret.paa"
		};
	};
	class wingsweden_helmet: Mich2001Helmet
	{
		scope=2;
		displayName="WingSWEDENS`s Helmet";
		descriptionShort="";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		rotationFlags=2;
		weight=200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.1;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\wingsweden_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\wingsweden_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\wingsweden_helmet.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1800;
					healthLevels[]=
					{
						{1,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},
						{0.69999999,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},
						{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},
						{0.30000001,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},
						{0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	class froot_helmet: wingsweden_helmet
	{
		scope=2;
		displayName="Froot`s Helmet";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\froot_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\froot_helmet.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\froot_helmet.paa"
		};
	};
	class WitchHood_ColorBase;
	class carling51_witchhood: WitchHood_ColorBase
	{
		scope=2;
		displayName="Carling`s WitchHood";
		descriptionShort="";
		model="\DZ\characters\headgear\WitchHood_g.p3d";
		inventorySlot[]={"Headgear"};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]={"Clothing","Headgear"};
		rotationFlags=16;
		repairableWithKits[]={2};
		repairCosts[]={10.0};
		weight=100;
		itemSize[]={2,2};
		varWetMax=0.049;
		heatIsolation=0.7;
		visibilityModifier=1;
		headSelectionsToHide[]={"Clipping_WitchHood"};
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\carling51_witchhood.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\carling51_witchhood.paa",
			"PlainDayZCustomGear\Data\DonoGear\HeadGear\carling51_witchhood.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]={{1.0,{"DZ\characters\headgear\data\WitchHood.rvmat"}},{0.7,{"DZ\characters\headgear\data\WitchHood.rvmat"}},{0.5,{"DZ\characters\headgear\data\WitchHood_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\WitchHood_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\WitchHood_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\WitchHood_m.p3d";
			female="\DZ\characters\headgear\WitchHood_f.p3d";
		};
	};
};