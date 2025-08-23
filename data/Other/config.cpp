class CfgPatches
{
	class PlainDayZdonoGearOther
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class Inventory_Base;
	class Bottle_Base;
	class Canteen;
	class oldfart_canteen: Canteen
	{
		scope=2;
		displayName="Oldfart`s Canteen";
		descriptionShort="";
		varQuantityInit=3000;
		varQuantityMin=0;
		varQuantityMax=3000;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_canteen.paa"
		};
	};
	class oldfart_canteen2: Canteen
	{
		scope=2;
		displayName="Oldfart`s Canteen2";
		descriptionShort="";
		varQuantityInit=3000;
		varQuantityMin=0;
		varQuantityMax=3000;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_canteen2.paa"
		};
	};
	class PlateCarrierHolster;
	class oldfart_holster: PlateCarrierHolster
	{
		scope=2;
		displayName="Oldfart`s Holster";
		descriptionShort="";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster.paa"
		};
	};
	class PlateCarrierPouches;
	class oldfart_pouches: PlateCarrierPouches
	{
		scope=2;
		displayName="Oldfart`s Pouch";
		descriptionShort="";
		model="\DZ\characters\vests\plate_carrier_pouches_g.p3d";
		inventorySlot[]=
		{
			"VestPouch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster.paa"
		};
	};
	class MilitaryBelt;
	class oldfart_belt: MilitaryBelt
	{
		scope=2;
		displayName="Oldfart`s Belt";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_belt.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_belt.paa"
		};
	};
	class oldfart_holster2: PlateCarrierHolster
	{
		scope=2;
		displayName="Oldfart`s Holster2";
		descriptionShort="";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster2.paa"
		};
	};
	class oldfart_pouches2: PlateCarrierPouches
	{
		scope=2;
		displayName="Oldfart`s Pouch2";
		descriptionShort="";
		model="\DZ\characters\vests\plate_carrier_pouches_g.p3d";
		inventorySlot[]=
		{
			"VestPouch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster2.paa"
		};
	};
	class oldfart_holster3: PlateCarrierHolster
	{
		scope=2;
		displayName="Oldfart`s Holster";
		descriptionShort="";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster3.paa"
		};
	};
	class oldfart_pouches3: PlateCarrierPouches
	{
		scope=2;
		displayName="Oldfart`s Pouch";
		descriptionShort="";
		model="\DZ\characters\vests\plate_carrier_pouches_g.p3d";
		inventorySlot[]=
		{
			"VestPouch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_pouch_holster3.paa"
		};
	};
	class oldfart_belt2: MilitaryBelt
	{
		scope=2;
		displayName="Oldfart`s Belt2";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_belt2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Other\oldfart_belt2.paa"
		};
	};
};