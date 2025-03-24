class CfgPatches
{
    class PlainDayZGearShoes
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
    class CombatBoots_ColorBase;
    class plain_dayz_boots: CombatBoots_ColorBase
    {
        displayName="Plain DayZ Custom Boots";
        descriptionShort=;
        scope=2;
		heatIsolation = 0.85;
        varWetMax = 0.2;
		attachments[]+={"Knife"};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\Shoes\plain_dayz_boots.paa",
            "PlainDayZCustomGear\Data\Shoes\plain_dayz_boots.paa",
            "PlainDayZCustomGear\Data\Shoes\plain_dayz_boots.paa"
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
						
						{
							1,
							
							{
								"DZ\characters\shoes\Data\CombatBoots.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\shoes\Data\CombatBoots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\shoes\Data\CombatBoots_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\shoes\Data\CombatBoots_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\shoes\Data\CombatBoots_destruct.rvmat"
							}
						}
					};
				};
			};
		};
    };
	class WorkingBoots_ColorBase;
    class plain_dayz_workingboots: WorkingBoots_ColorBase
    {
        displayName="Plain DayZ Working Boots";
        descriptionShort=;
        scope=2;
		attachments[]+={};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\Shoes\plain_dayz_workingboots.paa",
            "PlainDayZCustomGear\Data\Shoes\plain_dayz_workingboots.paa",
            "PlainDayZCustomGear\Data\Shoes\plain_dayz_workingboots.paa"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{
							1,
							{
								"DZ\characters\shoes\Data\WorkingBoots.rvmat"
							}
						},
						{
							0.69999999,
							{
								"DZ\characters\shoes\Data\WorkingBoots.rvmat"
							}
						},
						{
							0.5,
							{
								"DZ\characters\shoes\Data\WorkingBoots_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"DZ\characters\shoes\Data\WorkingBoots_damage.rvmat"
							}
						};
						{
							0,
							{
								"DZ\characters\shoes\Data\WorkingBoots_destruct.rvmat"
							}
						}
					};
				};
			};
		};
    };
};
