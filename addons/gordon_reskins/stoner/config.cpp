class CfgPatches
{
	class gordon_reskins_stoner
	{
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder",
			"rhsusf_c_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_LMG_Mk200_F_black",
			"FP_GOR_LMG_Mk200_F_FDE_blackbox",
			"FP_GOR_LMG_Mk200_F_olive_blackbox",
			"FP_GOR_LMG_Mk200_F_spraywood",
			"FP_GOR_LMG_Mk200_F_sprayautumn",
			"FP_GOR_LMG_Mk200_F_spraydes",
			"FP_GOR_LMG_Mk200_F_spraywin",
			"FP_GOR_LMG_Mk200_F_sprayurb",
			"FP_GOR_LMG_Mk200_F_black_greenbox",
			"FP_GOR_LMG_Mk200_F_black_tanbox",			
			"FP_GOR_LMG_Mk200_F_black_woodbox",
			"LMG_Mk200_F",
			"LMG_Mk200_black_F"
		};
	};
};
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		recoil = "rhs_recoil_m249";
		recoilProne = "assaultRifleBase";
	};
	class LMG_Mk200_black_F: LMG_Mk200_F
	{
		recoil = "rhs_recoil_m249";
		recoilProne = "assaultRifleBase";
	};
	
	class FP_GOR_LMG_Mk200_F_black: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black";
		baseWeapon="FP_GOR_LMG_Mk200_F_black";
		displayName="Stoner 99 LMG (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_FDE_blackbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_FDE_blackbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_FDE_blackbox";
		displayName="Stoner 99 LMG (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_fde_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_olive_blackbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_olive_blackbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_olive_blackbox";
		displayName="Stoner 99 LMG (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_olive_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_spraywood: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_spraywood";
		baseWeapon="FP_GOR_LMG_Mk200_F_spraywood";
		displayName="Stoner 99 LMG (Spray Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_greenbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_spraywoodland_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_sprayautumn: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_sprayautumn";
		baseWeapon="FP_GOR_LMG_Mk200_F_sprayautumn";
		displayName="Stoner 99 LMG (Spray Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_greenbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_sprayautumn_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_spraydes: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_spraydes";
		baseWeapon="FP_GOR_LMG_Mk200_F_spraydes";
		displayName="Stoner 99 LMG (Spray Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_tanbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_spraydesert_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_spraywin: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_spraywin";
		baseWeapon="FP_GOR_LMG_Mk200_F_spraywin";
		displayName="Stoner 99 LMG (Spray Winter)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_whitebox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_spraywinter_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_sprayurb: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_sprayurb";
		baseWeapon="FP_GOR_LMG_Mk200_F_sprayurb";
		displayName="Stoner 99 LMG (Spray Urban)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_sprayurban_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_black_greenbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black_greenbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_black_greenbox";
		displayName="Stoner 99 LMG (Black, green ammobox)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_greenbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_black_tanbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black_tanbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_black_tanbox";
		displayName="Stoner 99 LMG (Black, tan ammobox)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_tanbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	
	class FP_GOR_LMG_Mk200_F_black_woodbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black_woodbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_black_woodbox";
		displayName="Stoner 99 LMG (Black, woodland ammobox)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_woodbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
};