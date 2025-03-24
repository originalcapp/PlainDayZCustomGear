class CfgPatches
{
    class PlainDayZGearBottoms
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
    class CargoPants_ColorBase;
    class plain_dayz_cargopants: CargoPants_ColorBase
    {
        displayName="Plain DayZ Custom CargoPants";
        descriptionShort=;
        scope=2;
		attachments[]+={};
		itemsCargoSize[]={6,5};
		itemSize[] = {2,3};
		weight = 250;
		ragQuantity = 3;
		varWetMax = 0.2;
		heatIsolation = 0.75;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		quickBarBonus = 1;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\Bottoms\plain_dayz_cargopants.paa",
            "PlainDayZCustomGear\Data\Bottoms\plain_dayz_cargopants.paa",
            "PlainDayZCustomGear\Data\Bottoms\plain_dayz_cargopants.paa"
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
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
    };
	class Jeans_ColorBase;
	class plain_dayz_jeans: Jeans_ColorBase
	{
		displayName="Plain DayZ Jeans";
		descriptionShort="";
		scope=2;
		attachments[]+={};
		itemsCargoSize[]={6,5};
		model="\DZ\characters\pants\jeans_ground.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\pants\jeans_m.p3d";
			female="\DZ\characters\pants\jeans_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\Bottoms\plain_dayz_jeans.paa",
			"PlainDayZCustomGear\Data\Bottoms\plain_dayz_jeans.paa",
			"PlainDayZCustomGear\Data\Bottoms\plain_dayz_jeans.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=140;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\Jeans_m_grd.rvmat",
								"DZ\characters\pants\Data\jeans.rvmat",
								"DZ\characters\pants\Data\jeans_f.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\Jeans_m_grd.rvmat",
								"DZ\characters\pants\Data\jeans.rvmat",
								"DZ\characters\pants\Data\jeans_f.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\Jeans_m_grd_damage.rvmat",
								"DZ\characters\pants\Data\jeans_damage.rvmat",
								"DZ\characters\pants\Data\jeans_f_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\Jeans_m_grd_damage.rvmat",
								"DZ\characters\pants\Data\jeans_damage.rvmat",
								"DZ\characters\pants\Data\jeans_f_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\Jeans_m_grd_destruct.rvmat",
								"DZ\characters\pants\Data\jeans_destruct.rvmat",
								"DZ\characters\pants\Data\jeans_f_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class plain_dayz_newbie_jeans: plain_dayz_jeans
	{
		displayName="Plain DayZ Newbie Jeans";
		descriptionShort="";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\Bottoms\plain_dayz_newbie_jeans.paa",
			"PlainDayZCustomGear\Data\Bottoms\plain_dayz_newbie_jeans.paa",
			"PlainDayZCustomGear\Data\Bottoms\plain_dayz_newbie_jeans.paa"
		};
	};
};
