class CfgPatches
{
	class PlainDayZdonoGearTops
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class BDUJacket;
	class PDZ_BDUJacket_Base: BDUJacket
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
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[] =
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
	class ParamedicJacket_ColorBase;
	class PDZ_ParamedicJacket_Base: ParamedicJacket_ColorBase
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
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[] =
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
	class M65Jacket_ColorBase;
	class PDZ_M65Jacket_Base: M65Jacket_ColorBase
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
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
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
	class HuntingJacket_ColorBase;
	class PDZ_HuntingJacket_Base: HuntingJacket_ColorBase
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
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
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
	class TTsKOJacket_ColorBase;
	class PDZ_TTSKOJacket_Base: TTsKOJacket_ColorBase
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
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
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
	class HikingJacket_ColorBase;
	class PDZ_HikingJacket_Base: HikingJacket_ColorBase
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
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
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
