class CfgPatches
{
    class PlainDayZdonoGearShoes
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Characters"
        };
    };
};
class CfgVehicles
{
    class Clothing;
	class MilitaryBoots_ColorBase;
    class PDZ_MilitaryBoots_Base: MilitaryBoots_ColorBase
	{
        scope=1;
        displayName="";
        descriptionShort="";
		heatIsolation=0.85;
        varWetMax=0.2;
		attachments[]={"Knife"};
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
					hitpoints=500;
					healthLevels[]=
					{
						{1,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.69999999,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.5,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0.30000001,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0,{"DZ\characters\shoes\Data\MilitaryBoots_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class CombatBoots_ColorBase;
	class PDZ_CombatBoots_Base: CombatBoots_ColorBase
	{
		scope=1;
        displayName="";
        descriptionShort="";
		heatIsolation=0.85;
        varWetMax=0.2;
		attachments[]={"Knife"};
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
					hitpoints=500;
				};
			};
		};
	};
};
