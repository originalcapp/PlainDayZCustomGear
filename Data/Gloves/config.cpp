class CfgPatches
{
    class PlainDayZGearGloves
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
    class plain_dayz_gloves: TacticalGloves_ColorBase
    {
        displayName="Plain DayZ Custom Gloves";
        descriptionShort=;
        scope=2;
        varWetMax = 0.2;
		itemSize[]={2,2};
		heatIsolation = 0.8;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\Gloves\plain_dayz_gloves.paa",
            "PlainDayZCustomGear\Data\Gloves\plain_dayz_gloves.paa",
            "PlainDayZCustomGear\Data\Gloves\plain_dayz_gloves.paa"
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
								"DZ\Characters\gloves\data\TacticalGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};
    };
};
