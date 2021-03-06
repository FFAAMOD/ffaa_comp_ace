class asdg_OpticRail1913;
class ffaa_CowsSlot: asdg_OpticRail1913
{
	class compatibleItems;
};
// compatible items info of the weapons optic slot
class ffaa_CowsSlot_G36 : ffaa_CowsSlot
{
	class compatibleItems : compatibleItems
	{
		ffaa_optic_g36_holo = 1;
		ffaa_optic_romeo4t_black_g36 = 1;
        ffaa_optic_Yorris_g36 = 1;
        ffaa_optic_Aco_g36 = 1;
        ffaa_optic_ACO_grn_g36 = 1;
        ffaa_optic_ACO_smg_g36 = 1;
        ffaa_optic_ACO_grn_smg_g36 = 1;
        ffaa_optic_Holosight_g36 = 1;
        ffaa_optic_Holosight_blk_F_g36 = 1;
        ffaa_optic_Holosight_khk_F_g36 = 1;
        ffaa_optic_Holosight_arid_F_g36 = 1;
        ffaa_optic_Holosight_lush_F_g36 = 1;
        ffaa_optic_Holosight_smg_g36 = 1;
        ffaa_optic_Holosight_smg_blk_F_g36 = 1;
        ffaa_optic_Holosight_smg_khk_F_g36 = 1;
	};
};

// shared optic mode of the carry handle optic
class FFAA_G36CarryHandleScope_base {
	opticsID = 1;
	useModelOptics = 1;
	opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur1"};
	opticsZoomMin = "0.25/3";
	opticsZoomMax = "0.25/3";
	opticsZoomInit = "0.25/3";
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	memoryPointCamera = "opticView";
	visionMode[] = {"Normal"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	cameraDir = "";
	discreteDistance[] = {200};
	discreteDistanceInitIndex = 0;
};
// shared scripted 2d reticle data
class FFAA_G36CarryHandleScriptedOptic_base {
    reticleTexture = "\ffaa_armas\Reticles\data\g36_cross.paa";
    reticleTextureSize = 1;

    bodyTexture = "\ffaa_armas\Reticles\data\scope_view4_ca.paa";
    bodyTextureNight = "\ffaa_armas\Reticles\data\scope_view4_ca.paa";
    bodyTextureSize = 1.35;
};

class CfgWeapons {
    class Pistol_Base_F;
    class Rifle_Base_F;
    class UGL_F;
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class Launcher;
    class Launcher_Base_F : Launcher {
        class WeaponSlotsInfo;
    };
    // Opticas con Carry Handle (solo kollimator)
    BASECLASS_ACC_CARRY_HANDLE(optic_Yorris,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_ACO_grn,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_Aco,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_ACO_grn_smg,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_ACO_smg,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_Holosight,ItemCore,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_blk_F,optic_Holosight,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_khk_F,optic_Holosight,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_arid_F,optic_Holosight,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_lush_F,optic_Holosight,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_Holosight_smg,ItemCore,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_smg_blk_F,optic_Holosight_smg,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_smg_khk_F,optic_Holosight_smg,ACO)
    // Opticas FFAA
    class ffaa_optic_acog: ItemCore  {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_ARCO {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_susat: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
    };
    class ffaa_optic_g36_holo: ItemCore {
		scope = 1;
		author="$STR_FFAA_AUTOR_FFAAMOD";
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_ARCO {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_romeo4t_black: ItemCore {
		scope = 2;
		author="$STR_FFAA_AUTOR_FFAAMOD";
		ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=1;
        ACE_ScopeAdjust_HorizontalIncrement=1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_Kolimator ;
            };
        };
    };
	class ffaa_optic_romeo4t_black_g36 : ffaa_optic_romeo4t_black {
		scope = 1;
		author="$STR_FFAA_AUTOR_FFAAMOD";
		class CBA_ScriptedOptic: FFAA_G36CarryHandleScriptedOptic_base {};
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo : ItemInfo {
			modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes: OpticsModes {
				class ffaa_romeo4t : FFAA_G36CarryHandleScope_base {};
				class ffaa_Kolimator : ffaa_Kolimator { opticsID = 2; };
			};
		};
	};
    class ffaa_optic_mg4_g36: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=1;
        ACE_ScopeAdjust_HorizontalIncrement=1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_ARCO {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_enasa: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_lv: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_3x12x50: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_Mk4_v1: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_Mk4_v2: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_5x25x56: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_acc_puntero_ir: ItemCore {
        ACE_laserpointer=1;
    };
    // Fusiles
	class ffaa_armas_hkg36e_base: Rifle_Base_F {
        ACE_overheating_dispersion[]={0,0.001,0.003,0.005};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=177.8;
        ACE_barrelLength=480;
		class ffaa_armas_ag36: UGL_F {
            magazines[] += {"ACE_HuntIR_M203"};
        };
	};
	// class ffaa_armas_hkg36e_tir: ffaa_armas_hkg36e_base {};
	class ffaa_armas_hkg36k_tir: ffaa_armas_hkg36e_base {
		ACE_barrelLength=318;
	};
	// class ffaa_armas_hkag36e_tir : ffaa_armas_hkg36e_base {};
	class ffaa_armas_hkag36k_tir : ffaa_armas_hkg36e_base {
		ACE_barrelLength=318;
	};
	class ffaa_armas_hkg36e_normal : ffaa_armas_hkg36e_base {
		CBA_CarryHandleType = "FFAA_G36_CarryHandle";
		class CBA_ScriptedOptic: FFAA_G36CarryHandleScriptedOptic_base {};
        weaponInfoType = "CBA_ScriptedOptic";
        modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";

        class OpticsModes {
			class Scope: FFAA_G36CarryHandleScope_base {};
		};
	};
	// class ffaa_armas_hkg36e: ffaa_armas_hkg36e_normal {};
	class ffaa_armas_hkg36k_normal: ffaa_armas_hkg36e_normal {
		ACE_barrelLength=318;
	};
	// class ffaa_armas_hkg36k: ffaa_armas_hkg36k_normal {};
	// class ffaa_armas_hkag36e: ffaa_armas_hkg36e_normal {};
	class ffaa_armas_hkag36k: ffaa_armas_hkg36e_normal {
		ACE_barrelLength=318;
	};
	
    class ffaa_armas_cetme_l: Rifle_Base_F {
        ACE_barrelTwist=178;
        ACE_barrelLength=400;
    };
    class ffaa_armas_cetme_lc: ffaa_armas_cetme_l {
        ACE_barrelTwist=178;
        ACE_barrelLength=320;
    };
    class ffaa_armas_cetme_c: Rifle_Base_F {
        ACE_barrelTwist=178;
        ACE_barrelLength=450;
    };
	class ffaa_armas_hk416A5_short_blk : Rifle_Base_F {
		ACE_barrelTwist=178;
        ACE_barrelLength=450;
	};
	class ffaa_armas_hk417A2_long_blk : Rifle_Base_F {
		ACE_barrelTwist=279;
        ACE_barrelLength=508;
	};
    // Fusiles de precision
    class ffaa_armas_aw: Rifle_Base_F {
        ACE_barrelTwist=305;
        ACE_barrelLength=660;
        ACE_Overheating_Dispersion[]={0,-0.001,0.001,0.003};
        ACE_Overheating_SlowdownFactor[]={1,1,1,0.9};
        ACE_Overheating_JamChance[]={0,0.0003,0.0015,0.0075};
    };
    class ffaa_armas_m95: ffaa_armas_aw {
        ACE_overheating_dispersion[]={0,-0.001,0.001,0.003};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=381;
        ACE_barrelLength=736.7;
    };
    class ffaa_armas_aw50: ffaa_armas_m95 {
        ACE_barrelTwist=381;
        ACE_barrelLength=686;
        ACE_Overheating_Dispersion[]={0,-0.001,0.001,0.003};
        ACE_Overheating_SlowdownFactor[]={1,1,1,0.9};
        ACE_Overheating_JamChance[]={0,0.0003,0.0015,0.0075};
    };
    // Ametralladoras
    class ffaa_armas_mg4: Rifle_Base_F {
        ACE_overheating_allowSwapBarrel=1;
        ACE_overheating_dispersion[]={0,0.001,0.002,0.004};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=177.8;
        ACE_barrelLength=480;
    };
    class ffaa_armas_mg3: Rifle_Base_F {
        ACE_overheating_allowSwapBarrel=1;
        ACE_overheating_dispersion[]={0,-0.001,0.001,0.003};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=304.8;
        ACE_barrelLength=533;
    };
    class ffaa_armas_ameli: Rifle_Base_F {
        ACE_overheating_allowSwapBarrel=1;
        ACE_overheating_dispersion[]={0,0.001,0.001,0.003};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=305;
        ACE_barrelLength=400;
    };
    // Lanzadores
    class ffaa_armas_c100: Launcher_Base_F {
        scope = 2;
        scopeArsenal = 2;
		displayName = "$STR_FFAA_ACE_DN_C100";
        baseWeapon = "ffaa_armas_c100";
        magazines[]={"CBA_FakeLauncherMagazine"};
        reloadMagazineSound[] = {"",1,1};
        magazineReloadTime = 0.1;
        ACE_overpressure_angle=60;
        ACE_overpressure_range=6;
        ACE_overpressure_damage=0.8;
        ACE_overpressure_priority=1;
        class WeaponSlotsInfo {
            mass = 310; // launcher 100 (4,5 KG) , magazine 210 (9,5 KG)
        };
    };
	class ffaa_armas_c100_biv: ffaa_armas_c100 {
		author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        scopeArsenal = 2;
		displayName = "$STR_FFAA_ACE_DN_C100_BIV";
        baseWeapon = "ffaa_armas_c100_biv";
    };
	class ffaa_armas_c100_abk: ffaa_armas_c100 {
		author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        scopeArsenal = 2;
		displayName = "$STR_FFAA_ACE_DN_C100_ABK";
        baseWeapon = "ffaa_armas_c100_abk";
    };
    class ACE_ffaa_armas_c100_used : ffaa_armas_c100 {
        scope=1;
        scopeArsenal = 1;
        baseWeapon = "ACE_ffaa_armas_c100_used";
        author="$STR_FFAA_AUTOR_FFAAMOD";
        displayName="$STR_FFAA_ACE_DN_C100_USED";
        descriptionShort="$STR_FFAA_ACE_DN_C100_USED";
        weaponPoolAvailable=0;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
    class ACE_ffaa_armas_c100_ready: ffaa_armas_c100 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
		baseWeapon = "ffaa_armas_c100";
        magazines[] = {"ffaa_mag_c100","ffaa_mag_c100_biv","ffaa_mag_c100_abk"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
	class ACE_ffaa_armas_c100_biv_ready: ffaa_armas_c100_biv {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
		baseWeapon = "ffaa_armas_c100_biv";
        magazines[] = {"ffaa_mag_c100_biv","ffaa_mag_c100","ffaa_mag_c100_abk"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
	class ACE_ffaa_armas_c100_abk_ready: ffaa_armas_c100_abk {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
		baseWeapon = "ffaa_armas_c100_abk";
        magazines[] = {"ffaa_mag_c100_abk","ffaa_mag_c100_biv","ffaa_mag_c100"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
	class ACE_ffaa_armas_c100_vosel_ready: ffaa_armas_c100 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
		baseWeapon = "ffaa_armas_c100";
        magazines[] = {"ffaa_mag_c100","ffaa_mag_c100_biv","ffaa_mag_c100_abk"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "ffaa_optic_vosel";
			};
		};
    };
    class ffaa_armas_c90: Launcher_Base_F {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "ffaa_armas_c90";
		displayName = "$STR_FFAA_ACE_DN_C90";
        magazines[] = {"CBA_FakeLauncherMagazine"};
        reloadMagazineSound[] = {"",1,1};
        magazineReloadTime = 0.1;
        ACE_overpressure_angle=30;
        ACE_overpressure_range=2;
        ACE_overpressure_damage=0.6;
        ACE_overpressure_priority=1;
        class WeaponSlotsInfo {
            mass = 150; // launcher 88 (3,9 KG), magazine 62 (2,8 KG)
        };
    };
	class ffaa_armas_c90_CR_AM: ffaa_armas_c90 {
		author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        scopeArsenal = 2;
		displayName = "$STR_FFAA_ACE_DN_C90_CR_AM";
        baseWeapon = "ffaa_armas_c90_CR_AM";
    };
	class ffaa_armas_c90_CR_FIM: ffaa_armas_c90 {
		author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        scopeArsenal = 2;
		displayName = "$STR_FFAA_ACE_DN_C90_CR_FIM";
        baseWeapon = "ffaa_armas_c90_CR_FIM";
    };
	class ffaa_armas_c90_CR_BK: ffaa_armas_c90 {
		author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        scopeArsenal = 2;
		displayName = "$STR_FFAA_ACE_DN_C90_CR_BK";
        baseWeapon = "ffaa_armas_c90_CR_BK";
    };
    class ACE_ffaa_armas_c90_used : ffaa_armas_c90 {
        scope=1;
        scopeArsenal = 1;
        baseWeapon = "ACE_ffaa_armas_c90_used";
        author="$STR_FFAA_AUTOR_FFAAMOD";
        displayName="$STR_FFAA_ACE_DN_C90_USED";
        descriptionShort="$STR_FFAA_ACE_DN_C90_USED";
        weaponPoolAvailable=0;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
    class ACE_ffaa_armas_c90_ready: ffaa_armas_c90 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "ffaa_armas_c90";
        magazines[] = {"ffaa_mag_c90","ffaa_mag_c90_CR_AM","ffaa_mag_c90_CR_FIM","ffaa_mag_c90_CR_BK"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
	class ACE_ffaa_armas_c90_CR_AM_ready: ffaa_armas_c90_CR_AM {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "ffaa_armas_c90_CR_AM";
        magazines[] = {"ffaa_mag_c90_CR_AM","ffaa_mag_c90","ffaa_mag_c90_CR_FIM","ffaa_mag_c90_CR_BK"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
	class ACE_ffaa_armas_c90_CR_FIM_ready: ffaa_armas_c90_CR_FIM {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "ffaa_armas_c90_CR_FIM";
        magazines[] = {"ffaa_mag_c90_CR_FIM","ffaa_mag_c90_CR_AM","ffaa_mag_c90","ffaa_mag_c90_CR_BK"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
	class ACE_ffaa_armas_c90_CR_BK_ready: ffaa_armas_c90_CR_BK {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "ffaa_armas_c90_CR_BK";
        magazines[] = {"ffaa_mag_c90_CR_BK","ffaa_mag_c90_CR_FIM","ffaa_mag_c90_CR_AM","ffaa_mag_c90"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
    // SUBFUSILES
	class ffaa_armas_hkmp5pdw : Rifle_Base_F {
        ACE_barrelTwist=250;
        ACE_barrelLength=148;
    };
    class ffaa_armas_hkmp510a3: ffaa_armas_hkmp5pdw {
        ACE_barrelTwist=250;
        ACE_barrelLength=146;
    };
    class ffaa_armas_hkmp5a5 : ffaa_armas_hkmp5pdw {
        ACE_barrelTwist=250;
        ACE_barrelLength=225;
    };
    class ffaa_armas_ump: ffaa_armas_hkmp5pdw {
        ACE_barrelTwist=305;
        ACE_barrelLength=200;
    };
    class ffaa_armas_p90: Rifle_Base_F {
        ACE_barrelTwist=231;
        ACE_barrelLength=260;
    };
    // PISTOLAS
    class ffaa_armas_usp: Pistol_Base_F {
        ACE_barrelTwist=406.4;
        ACE_barrelLength=108;
    };
    class ffaa_armas_p226 : ffaa_armas_usp {
        ACE_barrelTwist=248.92;
        ACE_barrelLength=111.76;
    };
    class ffaa_armas_fnp9 : ffaa_armas_usp {
        ACE_barrelTwist=406.4;
        ACE_barrelLength=102;
    };
    // Escopeta
    class ffaa_armas_sdass : Rifle_Base_F {
        ACE_barrelTwist=0;
        ACE_barrelLength=510;
    };
	// Uniformes
	class Uniform_Base;
	class ffaa_famet_uniforme_item_b : Uniform_Base {
		ace_gforcecoef = 0.8;
	};
	class ffaa_famet_uniforme_item_d : Uniform_Base {
		ace_gforcecoef = 0.8;
	};
	class ffaa_pilot_harri_uniforme_item : Uniform_Base {
		ace_gforcecoef = 0.8;
	};
	class ffaa_pilot_her_uniforme_item : Uniform_Base {
		ace_gforcecoef = 0.8;
	};
	class ffaa_pilot_her_uniforme_item_d : Uniform_Base {
		ace_gforcecoef = 0.8;
	};
	// Cascos
    class H_HelmetB;
	class ffaa_casco_Fast_MTP_H : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_casco_Fast_MTP_H_F : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_casco_Fast_MTP_H_M : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_casco_Fast_MTP_H_C : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_casco_Fast_MTP_H_C_F : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_casco_Fast_MTP_H_C_M : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_casco_Fast_Bump_Tan_H_B_L: H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_moe_casco_02_1_d : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_moe_casco_02_2_d : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_moe_casco_02_3_d : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_moe_casco_02_4_d : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_moe_casco_02_5_d : H_HelmetB {
		ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
	};
	class ffaa_brilat_casco_tripulacion: H_HelmetB {
		ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.6;
	};
	class ffaa_casco_famet_piloto: H_HelmetB {
		ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.6;
	};
	class ffaa_casco_famet_crew: H_HelmetB {
		ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.6;
	};
	class ffaa_casco_famet_hmsd: H_HelmetB {
		ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.6;
	};
    class ffaa_casco_hercules_piloto : H_HelmetB {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0.5;
    };
};
