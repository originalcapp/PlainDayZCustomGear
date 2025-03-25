class CfgPatches
{
    class PlainDayZdonoGearGloves
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
    class TacticalGloves_ColorBase;
    class PDZ_TacticalGloves_Base: TacticalGloves_ColorBase
    {
        scope=1;
        displayName="";
        descriptionShort="";
        hiddenSelections[]=
        {
            "",
            "",
            ""
        }
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
    class SurgicalGloves_ColorBase;
	class PDZ_SurgicalGloves_Base: SurgicalGloves_ColorBase
	{
		scope=1;
		displayName="";
		descriptionShort="";
        hiddenSelections[]=
        {
            "",
            "",
            ""
        }
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
	class PDZ_WoolGloves_Base: WoolGloves_ColorBase
	{
		scope=1;
		displayName="";
		descriptionShort="";
		hiddenSelections[]=
        {
            "",
            "",
            ""
        }
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
	class PDZ_OMNOGloves_Base: OMNOGloves_ColorBase
	{
		scope=1;
		displayName="";
		descriptionShort="";
		hiddenSelections[]=
        {
            "",
            "",
            ""
        }
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
