class CfgPatches
{
    class PlainDayZdonoGearBottoms
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
    class BDUPants;
    class PDZ_BDUPants_Base: BDUPants
    {
        scope=1;
        displayName="";
        descriptionShort=;
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelections[]=
        {
            "MÅ_ENDRES",
            "MÅ_ENDRES",
            "MÅ_ENDRES"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.69999999,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0.30000001,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}
					};
				};
			};
		};
    };
    class ParamedicPants_ColorBase;
	class PDZ_ParamedicPants_Base: ParamedicPants_ColorBase
	{
        scope=1;
		displayName="";
        descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        hiddenSelections[]=
        {
            "MÅ_ENDRES",
            "MÅ_ENDRES",
            "MÅ_ENDRES"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.69999999,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0.30000001,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class HunterPants_ColorBase;
	class PDZ_HunterPants_Base: HunterPants_ColorBase
	{
		scope=1;
		displayName="";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelections[]=
        {
            "MÅ_ENDRES",
            "MÅ_ENDRES",
            "MÅ_ENDRES"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
    class TTSKOPants;
	class PDZ_TTSKOPants_Base: TTSKOPants
    {
		scope=1;
        displayName="";
        descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelections[]=
        {
            "MÅ_ENDRES",
            "MÅ_ENDRES",
            "MÅ_ENDRES"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
    class PolicePants;
	class 2geteilt_pants: PolicePants
	{
		scope=2;
		displayName="2geteilt`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
		hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class CargoPants_ColorBase;
	class carling51_pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Carling`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
		hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
};
