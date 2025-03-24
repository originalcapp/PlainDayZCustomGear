class CfgPatches
{
	class PlainDayZGearTops
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	class Hoodie_ColorBase;
	class plain_dayz_hoodie: Hoodie_ColorBase
	{
        displayName="Plain DayZ Hoodie";
        descriptionShort=;
        scope=2;
		attachments[]+={};
		itemsCargoSize[]={7,6};
		itemSize[] = {2,3};
		weight = 250;
		ragQuantity = 3;
		varWetMax = 0.2;
		heatIsolation = 0.80;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		quickBarBonus = 1;
		hiddenSelectionsTextures[] =
		{
			"PlainDayZCustomGear\Data\Tops\plain_dayz_hoodie.paa",		
			"PlainDayZCustomGear\Data\Tops\plain_dayz_hoodie.paa",		
			"PlainDayZCustomGear\Data\Tops\plain_dayz_hoodie.paa"		
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
								"DZ\characters\tops\Data\hoodie.rvmat",
								"DZ\characters\tops\Data\Hoodie_m_grd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\hoodie.rvmat",
								"DZ\characters\tops\Data\Hoodie_m_grd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\hoodie_damage.rvmat",
								"DZ\characters\tops\Data\Hoodie_m_grd_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\hoodie_damage.rvmat",
								"DZ\characters\tops\Data\Hoodie_m_grd_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\hoodie_destruct.rvmat",
								"DZ\characters\tops\Data\Hoodie_m_grd_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class capp_hoodie_black: plain_dayz_hoodie
	{
        displayName="Capp`s Custom Hoodie";
        descriptionShort=;
        scope=2;
		attachments[]+={"Shoulder","magazine","magazine1"};
		itemsCargoSize[]={10,100};
		itemSize[]={2,1};
		varWetMax=0.0;
		heatIsolation=0.95;
		quickBarBonus=3;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\Tops\capp_plaindayz_hoodie.paa",		
			"PlainDayZCustomGear\Data\Tops\capp_plaindayz_hoodie.paa",		
			"PlainDayZCustomGear\Data\Tops\capp_plaindayz_hoodie.paa"		
		};
	};
	class TShirt_ColorBase;
	class plain_dayz_tshirt: TShirt_ColorBase
	{
		displayName="Plain DayZ T-Shirt";
		descriptionShort="";
		model="\DZ\characters\tops\tshirt_ground.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
        scope=2;
		attachments[]+={};
		itemsCargoSize[]={7,6};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\Tops\plain_dayz_tshirt.paa",
			"PlainDayZCustomGear\Data\Tops\plain_dayz_tshirt.paa",
			"PlainDayZCustomGear\Data\Tops\plain_dayz_tshirt.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\tshirt.rvmat",
								"DZ\characters\tops\Data\tshirt_ground.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\tshirt.rvmat",
								"DZ\characters\tops\Data\tshirt_ground.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\tshirt_damage.rvmat",
								"DZ\characters\tops\Data\tshirt_ground_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\tshirt_damage.rvmat",
								"DZ\characters\tops\Data\tshirt_ground_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\tshirt_destruct.rvmat",
								"DZ\characters\tops\Data\tshirt_ground_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\tops\tshirt_m.p3d";
			female="\DZ\characters\tops\tshirt_f.p3d";
		};
	};
	class plain_dayz_newbie_tshirt: plain_dayz_tshirt
	{
		displayName="Plain DayZ T-Shirt";
		descriptionShort="";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\Tops\plain_dayz_newbie_tshirt.paa",
			"PlainDayZCustomGear\Data\Tops\plain_dayz_newbie_tshirt.paa",
			"PlainDayZCustomGear\Data\Tops\plain_dayz_newbie_tshirt.paa"
		};
	};
};
