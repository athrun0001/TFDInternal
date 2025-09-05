#pragma once
//#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/CoreUObject_structs.hpp"

namespace TFD_SDK
{
	using namespace SDK;

	// NumValues: 0x000C
	enum class EM1OnlineServiceConnectionState : uint8
	{
		NotLoggedIn = 0,
		RequestedLogIn = 1,
		ReceivedLogInButNotJoined = 2,
		RequestedJoinGame = 3,
		InTransitionMapToJoinGame = 4,
		ReceivedJoinGame = 5,
		JoinedDedicatedServer = 6,
		ReceivedLoginIdFromDedicatedServer = 7,
		RequestedPlayerCharacterInfoByLoginId = 8,
		SentPlayerPawnToClient = 9,
		ReceivedPawnAndOkay = 10,
		EM1OnlineServiceConnectionState_MAX = 11,
	};
	// NumValues: 0x0011
	enum class EM1ItemType : uint8
	{
		None = 0,
		Currency = 1,
		Equipment = 2,
		Consumable = 3,
		Rune = 4,
		Character = 5,
		InstantUse = 6,
		Customizing = 7,
		Title = 8,
		Record = 9,
		CurrencyInternal = 10,
		Fellow = 12,
		Medal = 13,
		TuningBoardJewel = 14,
		Collectible = 15,
		Vehicle = 16,
		Max = 17,
	};
	// NumValues: 0x000C
	enum class EM1MissionEndReason : uint8
	{
		None = 0,
		Completed = 1,
		ByTaskFailure = 2,
		ConnectionClose = 3,
		ExplicitGiveUp = 4,
		OutOfPlayableArea = 5,
		EndPlayByDataLayerUnload = 6,
		InterruptedByOtherMission = 7,
		LeaveMissionByTeleport = 8,
		GiveUpMissionByTeleport = 9,
		LimitTimeOver = 10,
		EM1MissionEndReason_MAX = 11,
	};
	// NumValues: 0x000A
	enum class EM1MissionTargetState : uint8
	{
		Default = 0,
		BeingSpawned = 1,
		Spawned = 2,
		Destructed = 3,
		BeingDespawned = 4,
		Interaction = 5,
		Idle = 6,
		Respawn = 7,
		Deactivated = 8,
		EM1MissionTargetState_MAX = 9,
	};
	// NumValues: 0x0006
	enum class EM1MiniGameResult : uint8
	{
		Unknown = 0,
		Fail = 1,
		Success = 2,
		Cancel = 3,
		ForceCancel = 4,
		EM1MiniGameResult_MAX = 5,
	};
	// NumValues: 0x0121
	enum class EM1StatType : uint16
	{
		Stat_MaxHp = 0,
		Stat_KnockbackSpeed = 1,
		Stat_KnockbackTime = 2,
		Stat_KnockdownTime = 3,
		Stat_RangeMax = 4,
		Stat_GravityScaleCoefficient = 5,
		Stat_CrosshairSizeMax = 6,
		Stat_Impulse = 7,
		Stat_AimOnDelay = 8,
		Stat_AimOffDelay = 9,
		Stat_JumpZVelocity = 10,
		Stat_CurrentEnergyShield = 11,
		Stat_InteractionRevive = 12,
		Stat_RunSpeed = 13,
		Stat_SprintSpeed = 14,
		Stat_ZoomMoveSpeed = 15,
		Stat_RoundsPerMagazine = 16,
		Stat_ReloadRounds = 17,
		Stat_FireInterval = 18,
		Stat_MaxMp = 19,
		Stat_MaxEnergyShield = 20,
		Stat_ATK = 21,
		Stat_ATKMin = 22,
		Stat_ATKMax = 23,
		Stat_DEF = 24,
		Stat_CriticalChance = 25,
		Stat_CriticalATKIncrease = 26,
		Stat_ShellCount = 27,
		Stat_RoundsConsume = 28,
		Stat_AimMoveSpeed = 29,
		Stat_WeaknessDamageIncrease = 30,
		Stat_SpreadZoomSize_Deprecated = 31,
		Stat_CrosshairMoveSizeModifier = 32,
		Stat_CrosshairFireSizeModifier = 33,
		Stat_CrosshairZoomFireSizeModifier = 34,
		Stat_CrosshairRecoverySpeed = 35,
		Stat_CrosshairChangeSpeed = 36,
		Stat_ClimbSpeed = 37,
		Stat_StressMaxRate_Deprecated = 38,
		Stat_StressDamageRate = 39,
		Stat_StressDecreaseRate = 40,
		Stat_NonCombatEntryTime_Deprecated = 41,
		Stat_StressDecreaseStartTime = 42,
		Stat_WalkSpeed = 43,
		Stat_MoveDestructivePower = 44,
		Stat_WeaponProjHitRadiusCoefficient = 45,
		Stat_EvadeTime = 46,
		Stat_EvadeRecoveryTime = 47,
		Stat_Domination_Deprecated = 48,
		Stat_Manipulation_Deprecated = 49,
		Stat_Fortitude_Deprecated = 50,
		Stat_CrosshairSizeMin = 51,
		Stat_ReloadSpeed = 52,
		Stat_ReloadCompleteDelay_Deprecated = 53,
		Stat_ReduceRangeStart = 54,
		Stat_ReduceRangeEnd = 55,
		Stat_ATKReductionByRange = 56,
		Stat_ATKExplosion = 57,
		Stat_ATKBlazer = 58,
		Stat_ATKGlacier = 59,
		Stat_ATKElectricity = 60,
		Stat_ATKDemonic = 61,
		Stat_DEFBlazer = 62,
		Stat_DEFGlacier = 63,
		Stat_DEFElectricity = 64,
		Stat_DEFDemonic = 65,
		Stat_RESCriticalChance = 66,
		Stat_ReloadTime = 67,
		Stat_Burst = 68,
		Stat_Crush = 69,
		Stat_Piercing = 70,
		Stat_FireBurstInterval = 71,
		Stat_ATKReductionByExplosionRange = 72,
		Stat_ZoomOutDelay = 73,
		Stat_Penetration = 74,
		Stat_PenetrationDefence = 75,
		Stat_WeaponDestructivePower = 76,
		Stat_SkillDestructivePower = 77,
		Stat_FireIncreaseSpread_Deprecated = 78,
		Stat_LifeTime_Deprecated = 79,
		Stat_BonusLifeTime_Deprecated = 80,
		Stat_RangeMin_Deprecated = 81,
		Stat_WireCooltimeCoefficient = 82,
		Stat_WireChargingTimeCoefficient = 83,
		Stat_KnockbackAttackRate_Deprecated = 84,
		Stat_KnockbackDefenceResistance = 85,
		Stat_KnockbackTimeResistance = 86,
		Stat_KnockbackSpeedResistance = 87,
		Stat_KnockdownAttackRate = 88,
		Stat_KnockdownXSpeed = 89,
		Stat_KnockdownZSpeed = 90,
		Stat_KnockdownDefenceResistance = 91,
		Stat_KnockdownXSpeedResistance = 92,
		Stat_KnockdownZSpeedResistance = 93,
		Stat_KnockdownTimeResistance = 94,
		Stat_MeleeSpecialAttackReduceCoolTime_Deprecated = 95,
		Stat_HitStopAttackPoint = 96,
		Stat_HitStopDefencePoint = 97,
		Stat_BerserkMoveSpeed = 98,
		Stat_BerserkMaxRate = 99,
		Stat_BerserkDamageRate = 100,
		Stat_BerserkDecreaseStartTime = 101,
		Stat_BerserkDecreaseRate = 102,
		Stat_BerserkMaintenanceTime = 103,
		Stat_NaturalRecoveryTickTimeHp = 104,
		Stat_NaturalRecoveryTickTimeMp = 105,
		Stat_NaturalRecoveryTickTimeEnergyShield = 106,
		Stat_NaturalRecoveryHp = 107,
		Stat_NaturalRecoveryMp = 108,
		Stat_NaturalRecoveryEnergyShield = 109,
		Stat_InBattleNaturalRecoveryHp = 110,
		Stat_InBattleNaturalRecoveryMp = 111,
		Stat_InBattleNaturalRecoveryEnergyShield = 112,
		Stat_CurrentHp = 113,
		Stat_CurrentMp = 114,
		Stat_MaxCommonGauge = 115,
		Stat_CurrentCommonGauge = 116,
		Stat_DEFInflection_VarX1_Deprecated = 117,
		Stat_DEFInflection_VarX2_Deprecated = 118,
		Stat_DEFInflection_VarX3_Deprecated = 119,
		Stat_WireStackCountIncrease = 120,
		Stat_RecoilCoefficient = 121,
		Stat_SkillCooltimeCoefficient = 122,
		Stat_SkillCostCoefficient = 123,
		Stat_SkillATKCoefficient = 124,
		Stat_FinalDamageCoefficient_Deprecated = 125,
		Stat_HpOrbRecoveryCoefficient_Deprecated = 126,
		Stat_MpOrbRecoveryCoefficient_Deprecated = 127,
		Stat_EmptyRoundsReloadTimeSpeed = 128,
		Stat_SkillDurationIncrease = 129,
		Stat_SkillDurationDecrease = 130,
		Stat_SkillScaleCoefficient = 131,
		Stat_WeaponChangingSpeed = 132,
		Stat_MaxGeneralRoundsCoefficient = 133,
		Stat_MaxEnhancedRoundsCoefficient = 134,
		Stat_MaxImpactRoundsCoefficient = 135,
		Stat_MaxHighpowerRoundsCoefficient = 136,
		Stat_NaturalRecoveryTickPR_Deprecated = 137,
		Stat_InBattleNaturalRecoveryPR_Deprecated = 138,
		Stat_NaturalRecoveryPR_Deprecated = 139,
		Stat_CrosshairJumpSizeModifier = 140,
		Stat_PhysicalATK = 141,
		Stat_NatureATK = 142,
		Stat_GiveHpRecoveryCoefficient = 143,
		Stat_TakeHpRecoveryCoefficient = 144,
		Stat_GiveMpRecoveryCoefficient = 145,
		Stat_TakeMpRecoveryCoefficient = 146,
		Stat_RWATKCoefficient = 147,
		Stat_GiveFinalDamageCoefficient = 148,
		Stat_TakeFinalDamageCoefficient = 149,
		Stat_LevelFactor = 150,
		Stat_SkillATKCorrection = 151,
		Stat_ItemLevelCorrection = 152,
		Stat_MaxStressGauge = 153,
		Stat_CurrentStressGauge = 154,
		Stat_MaxBerserkGauge = 155,
		Stat_CurrentBerserkGauge = 156,
		Stat_SkillATKPower = 157,
		Stat_SkillPowerCoefficient = 158,
		Stat_SkillPlainPowerCoefficient = 159,
		Stat_SkillBlazerPowerCoefficient = 160,
		Stat_SkillGlacierPowerCoefficient = 161,
		Stat_SkillElectricityPowerCoefficient = 162,
		Stat_SkillDemonicPowerCoefficient = 163,
		Stat_SkillFusionPowerCoefficient = 164,
		Stat_SkillSingularPowerCoefficient = 165,
		Stat_SkillDimensionPowerCoefficient = 166,
		Stat_SkillTechPowerCoefficient = 167,
		Stat_SkillPlainATKCoefficient = 168,
		Stat_SkillBlazerATKCoefficient = 169,
		Stat_SkillGlacierATKCoefficient = 170,
		Stat_SkillElectricityATKCoefficient = 171,
		Stat_SkillDemonicATKCoefficient = 172,
		Stat_SkillFusionATKCoefficient = 173,
		Stat_SkillSingularATKCoefficient = 174,
		Stat_SkillDimensionATKCoefficient = 175,
		Stat_SkillTechATKCoefficient = 176,
		Stat_SkillCriticalChance = 178,
		Stat_SkillCriticalATKIncrease = 179,
		Stat_SkillRESCriticalChance = 180,
		Stat_DEFSkill = 181,
		Stat_DEFPlain = 182,
		Stat_Accuracy = 183,
		Stat_ZoomAccuracy = 184,
		Stat_InvokeChanceElementalSE = 185,
		Stat_GiveShieldRecoveryCoefficient = 186,
		Stat_TakeShieldRecoveryCoefficient = 187,
		Stat_MaxSprintSpeed = 188,
		Stat_WeaponProjHitRadius = 189,
		Stat_DBNORescueTime = 190,
		Stat_RuneDropCoefficient = 191,
		Stat_EquipmentDropCoefficient = 192,
		Stat_ConsumableDropCoefficient = 193,
		Stat_GoldDropCoefficient = 194,
		Stat_QulipothiumDropCoefficient = 195,
		Stat_CharEXPCoefficient = 196,
		Stat_ProficiencyCoefficient = 197,
		Stat_TypeBossATKBonus = 198,
		Stat_TypeDarknessATKBonus = 199,
		Stat_TypeTruthATKBonus = 200,
		Stat_TypeImmortalATKBonus = 201,
		Stat_DBNODurationCoefficient = 202,
		Stat_LootDistanceCoefficient = 203,
		Stat_DoubleJumpZVelocity = 204,
		Stat_EciveSearchDistanceCoefficient = 205,
		Stat_EciveSearchRemainTimeCoefficient = 206,
		Stat_SubSkillATKPower = 207,
		Stat_SubSkillATKCoefficient = 208,
		Stat_WeakenessDamageTakenIncrease = 209,
		Stat_RWChargeRateCoefficient = 210,
		Stat_RWDischargeRateCoefficient = 211,
		Stat_TypeBossSkillATKBonus = 212,
		Stat_TypeDarknessSkillATKBonus = 213,
		Stat_TypeTruthSkillATKBonus = 214,
		Stat_TypeImmortalSkillATKBonus = 215,
		Stat_BurstDelay = 216,
		Stat_DefaultStressStopDuration = 217,
		Stat_FieldTimingRing_LimitTimeRatio = 218,
		Stat_FieldTimingRing_NeedleRotationTimeRatio = 219,
		Stat_FieldTimingRing_ReduceSuccessCount = 220,
		Stat_FieldTimingRing_IncreaseTimingAngleMax = 221,
		Stat_FieldTimingRing_FailTimeRatio = 222,
		Stat_SkillVelocityAndRangeCoefficient = 223,
		Stat_StressMaxHpRandMinRate = 224,
		Stat_StressMaxHpRandMaxRate = 225,
		Stat_StressMaxHpCurrentRate = 226,
		Stat_ActionSpeedCoeffcient = 227,
		Stat_ProjectilePenetration = 228,
		Stat_ProjectilePenetrationDefence = 229,
		Stat_RageMaxRate = 230,
		Stat_RageDamageRate = 231,
		Stat_RageDecreaseRate = 232,
		Stat_MaxRageGauge = 233,
		Stat_CurrentRageGauge = 234,
		Stat_MultiHitChance = 235,
		Stat_AdvantageCoefficient = 236,
		Stat_MultiHitDamageIncrease = 237,
		Stat_TypeBreachSkillATKBonus = 238,
		Stat_VehicleSpeed = 239,
		Stat_VehicleAcceleration = 240,
		Stat_VehicleBoostSpeed = 241,
		Stat_VehicleBoostAcceleration = 242,
		Stat_VehicleBrakeDeceleration = 243,
		Stat_VehicleBackwardSpeedFactor = 244,
		Stat_VehicleLateralSpeedFactor = 245,
		Stat_VehicleMaxTurnSpeed = 246,
		Stat_VehicleBoostMaxTurnSpeed = 247,
		Stat_VehicleMaxBoostGauge = 248,
		Stat_VehicleBoostRecoveryTickTime = 249,
		Stat_VehicleBoostRecoveryValue = 250,
		Stat_VehicleBoostRecoverStartTime = 251,
		Stat_VehicleBoostConsumeCoefficient = 252,
		Stat_VehicleBoostRecoverCoefficient = 253,
		Stat_MeleeATK = 254,
		Stat_MeleeATKBlazer = 255,
		Stat_MeleeATKGlacier = 256,
		Stat_MeleeATKDemonic = 257,
		Stat_MeleeATKElectricity = 258,
		Stat_MeleeATKCoefficient = 259,
		Stat_MeleeCriticalChance = 260,
		Stat_MeleeCriticalATKIncrease = 261,
		Stat_MeleeMultiHitChance = 262,
		Stat_MeleeMultiHitATKIncrease = 263,
		Stat_MeleeAttackDamageReductionRate = 264,
		Stat_MeleeAttackDamageReductionRateMin = 265,
		Stat_DEFMeleeDamageReductionRate = 266,
		Stat_MeleeATKSpeed = 267,
		Stat_MeleeAttackScaleCoefficient = 268,
		Stat_MeleeAttackScaleCoefficientMax = 269,
		Stat_MaxMeleeBlockGauge = 270,
		Stat_CurrentMeleeBlockGauge = 271,
		Stat_MeleeBlockGaugeCost = 272,
		Stat_MeleeBlockGaugeCostRate = 273,
		Stat_MeleeBlockGaugeRecoveryDelay = 274,
		Stat_MeleeBlockGaugeRecoveryRate = 275,
		Stat_MeleeBlockEfficiency = 276,
		Stat_MeleeBlockEfficiencyCoefficient = 277,
		Stat_MaxMeleeCommonGauge = 278,
		Stat_CurrentMeleeCommonGauge = 279,
		Stat_MeleeCommonGaugeRecoveryDelay = 280,
		Stat_MeleeCommonGaugeRecoveryRate = 281,
		Stat_WeaponDEFBlazer = 282,
		Stat_WeaponDEFGlacier = 283,
		Stat_WeaponDEFElectricity = 284,
		Stat_WeaponDEFDemonic = 285,
		Stat_VehicleCurrentBoostGauge = 286,
		Stat_VehicleBoostStartCost = 287,
		Stat_VehicleJumpZVelocity = 288,
		MAX = 289,
	};
	// NumValues: 0x0014
	enum class EM1MissionSubType : uint8
	{
		Default = 0,
		Destruction = 1,
		Defense = 2,
		Supply = 3,
		Collection = 4,
		Assasination = 5,
		Extermination = 6,
		Occupation = 7,
		WaveDefense = 8,
		ContinuousSurvival = 9,
		DataCollection = 10,
		Explosion = 11,
		Steal = 12,
		Escort = 13,
		MultiCollection = 14,
		MultiAssasination = 15,
		VoidFragment = 16,
		VoidFusion = 17,
		DestructionVulgusPost = 18,
		EM1MissionSubType_MAX = 19,
	};
	// NumValues: 0x0006
	enum class EM1RoundsType : uint8
	{
		None = 0,
		GeneralRounds = 1,
		EnhancedRounds = 2,
		ImpactRounds = 3,
		HighpowerRounds = 4,
		EM1RoundsType_MAX = 5,
	};
	// NumValues: 0x0013
	enum class EM1MissionCategory : uint8
	{
		None = 0,
		Prologue = 1,
		BaseMission = 2,
		DungeonField = 3,
		RouteMission = 4,
		BlockWorld = 5,
		DefenseWorld = 6,
		ResearchWorld = 7,
		VoidFragmentField = 8,
		VoidFusionField = 9,
		RepeatMission6 = 10,
		VulgusPostField = 11,
		Invasion = 12,
		VoidVessel = 13,
		VoidErosion = 14,
		ExploreRegion = 15,
		Decontamin = 16,
		VoidExium = 17,
		EM1MissionCategory_MAX = 18,
	};
	// NumValues: 0x0005
	enum class EM1MiniGameDifficulty : uint8
	{
		None = 0,
		Normal = 1,
		Hard = 2,
		VeryHard = 3,
		EM1MiniGameDifficulty_MAX = 4,
	};



	// 0x0004 (0x0004 - 0x0000)
	struct FM1TemplateId final
	{
	public:
		int32                                         ID;                                                // 0x0000(0x0004)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FM1WeaponSlot final
	{
	public:
		uint8                                         Pad_Weapon[0x10];                                  // 0x0000
		class AM1Weapon*							  Weapon;                                            // 0x0010(0x0008)
	};
	// 0x0090 (0x0090 - 0x0000)
	struct FM1ActivatedWeaponSlot final
	{
	public:
		uint8                                         Pad_WeaponSlot[0x8];                               // 0x0000
		struct FM1WeaponSlot                          WeaponSlot;                                        // 0x0008(0x0018)
		uint8                                         Pad_FM1ActivatedWeaponSlot[0x70];                  // 0x0020
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FM1ItemTidBox final
	{
	public:
		EM1ItemType                                   Type;                                              // 0x0000(0x0001)
		uint8                                         Pad_FM1ItemTidBox[0x7];                            // 0x0001
	};
	// 0x0038 (0x0038 - 0x0000)
	struct FM1DropItemInfo final
	{
	public:
		uint8                                         Pad_ItemBox[0x18];								 // 0x0000
		struct FM1ItemTidBox                          ItemBox;                                           // 0x0018(0x0008)
		uint8                                         Pad_FM1DropItemInfo[0x18];                         // 0x0020
	};
	// 0x0020 (0x0020 - 0x0000)
	struct FM1MissionTaskLink final
	{
	public:
		uint8                                         Pad_InstancedTaskActor[0x10];                      // 0x0000
		class AM1MissionTaskActor*					  InstancedTaskActor;                                // 0x0010(0x0008)
		uint8                                         Pad_FM1MissionTaskLink[0x8];                       // 0x0018
	};
	// 0x0068 (0x0068 - 0x0000)
	struct FM1PresetSlot final
	{
	public:
		int32                                         PresetIndex;                                       // 0x0000(0x0004)
		uint8                                         Pad_PresetName[0x4];                               // 0x0004
		class FString                                 PresetName;                                        // 0x0008(0x0010)
		uint8                                         Pad_FM1PresetSlot[0x50];                           // 0x0018
	};
	// 0x000C (0x000C - 0x0000)
	struct FM1MiniGameResult final
	{
	public:
		struct FM1TemplateId                          MiniGameTemplateId;                                // 0x0000(0x0004)
		struct FM1TemplateId                          FieldDifficultyTemplateId;                         // 0x0004(0x0004)
		EM1MiniGameResult                             Result;                                            // 0x0008(0x0001)
		uint8                                         Pad_FM1MiniGameResult[0x3];                        // 0x0009
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FM1ScaledInteger final
	{
	public:
		int64                                         Value;                                             // 0x0000(0x0008)
	};
	// 0x0060 (0x0060 - 0x0000)
	struct FM1MissionProgressInfo final
	{
	public:
		class AM1MissionTaskActor*					  ActivatedTaskActor;                                // 0x0000(0x0008)
		class AM1MissionTaskActor*					  LastTaskActor;                                     // 0x0008(0x0008)
		uint8                                         Pad_ActivatedTaskIndex[0x4];						 // 0x0010
		int32                                         ActivatedTaskIndex;                                // 0x0014(0x0004)
		uint8                                         Pad_FM1MissionProgressInfo[0x48];                  // 0x0018
	};
	// 0x0008 (0x0008 - 0x0000)
	struct alignas(0x08) FTableRowBase
	{
	public:
		uint8                                         Pad_FTableRowBase[0x8];                            // 0x0000
	};
	// 0x0030 (0x0038 - 0x0008)
	struct FM1RangedWeaponRecoilData final : public FTableRowBase
	{
	public:
		uint8                                         Pad_RecoilApplyInterpSpeed[0x10];					 // 0x0008
		float                                         RecoilApplyInterpSpeed;                            // 0x0018(0x0004)
		float                                         RecoilRecoverInterpSpeed;                          // 0x001C(0x0004)
		float                                         RecoilRecoverStartDelay;                           // 0x0020(0x0004)
		float                                         RecoilResetTimeAfterFire;                          // 0x0024(0x0004)
		uint8                                         Pad_FM1RangedWeaponRecoilData[0x10];               // 0x0028
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FM1WeaponFireParams final
	{
	public:
		float                                         fireinterval;                                      // 0x0000(0x0004)
		uint8                                         Pad_FM1WeaponFireParams[0x14];					 // 0x0004
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FDelegateHandle
	{
		uint64										  ID;												 // 0x0000(0x0008)
	};
	// 0x000C (0x000C - 0x0000)
	struct FCachedMaxCapacity
	{
		int32										  CachedCapacity;									 // 0x0000(0x0004)
		FDelegateHandle								  StatChangedEventDelegateHandle;					 // 0x0004(0x0008)
	};
	// 0x0004 (0x0004 - 0x0000)
	struct FM1StatType final
	{
	public:
		int32                                         StatType;                                          // 0x0000(0x0004)
	};
	// 0x00C0 (0x00C0 - 0x0000)
	struct FM1VehicleMovementData final
	{
	public:
		float                                         MaxAcceleration;                                   // 0x0000(0x0004)
		float                                         MaxSpeed;                                          // 0x0004(0x0004)
		uint8                                         Pad_MaxTurnSpeed[0xC];							 // 0x0008
		float                                         MaxTurnSpeed;                                      // 0x0014(0x0004)
		uint8                                         Pad_FM1WeaponFireParams[0xA8];                     // 0x0018
	};
	


	// 0x0220 (0x0248 - 0x0028)
	class AActor : public UObject
	{
	public:
		uint8                                         Pad_Children[0x118];								 // 0x0028 
		TArray<class AActor*>                         Children;											 // 0x0140(0x0010)
		uint8                                         Pad_AActor[0xF8];									 // 0x0150 
	public:
		bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);
		float GetDistanceTo(const class AActor* OtherActor) const;
		struct FVector K2_GetActorLocation() const;
		struct FRotator K2_GetActorRotation() const;
	};
	// 0x0080 (0x00A8 - 0x0028)
	class UActorComponent : public UObject
	{
	public:
		uint8										  Pad_UActorComponent[0x80];						 // 0x0028
	};
	// 0x0000 (0x0028 - 0x0028)
	class UBlueprintFunctionLibrary : public UObject
	{
	};
	// 0x02A8 (0x02D0 - 0x0028)
	class UCanvas final : public UObject
	{
	public:
		uint8                                         Pad_ClipX[0x8];									 // 0x0028
		float                                         ClipX;											 // 0x0030(0x0004)
		float                                         ClipY;											 // 0x0034(0x0004)
		uint8                                         Pad_SizeX[0x8];									 // 0x0038
		int32                                         SizeX;											 // 0x0040(0x0004)
		int32                                         SizeY;											 // 0x0044(0x0004)
		uint8                                         Pad_UCanvas[0x288];								 // 0x0048
	public:
		void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
		void K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	};
	// 0x0008 (0x0030 - 0x0028)
	class UDataAsset : public UObject
	{
	public:
		uint8                                         Pad_UDataAsset[0x8];                               // 0x0028
	};
	// 0x1010 (0x1038 - 0x0028)
	class UEngine : public UObject
	{
	public:
		uint8										  Pad_SmallFont[0x30];								 // 0x0028
		class UFont*								  SmallFont;										 // 0x0058(0x0008)
		uint8										  Pad_UEngine[0xFD8];								 // 0x0060
	public:
		static class UEngine* GetEngine();
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Engine">();
		}
	};
	// 0x01A8 (0x01D0 - 0x0028)
	class UFont final : public UObject
	{
	public:
		uint8                                         Pad_UFont[0x1A8];									 // 0x0028
	};
	// 0x0198 (0x01C0 - 0x0028)
	class UGameInstance : public UObject
	{
	public:
		uint8										  Pad_LocalPlayers[0x10];							 // 0x0028 
		TArray<class ULocalPlayer*>					  LocalPlayers;										 // 0x0038(0x0010)
		uint8										  Pad_UGameInstance[0x178];							 // 0x0048 
	};
	// 0x0000 (0x0028 - 0x0028)
	class UGameplayStatics final : public UBlueprintFunctionLibrary
	{
	public:
		static class APlayerController* GetPlayerController(const class UObject* WorldContextObject, int32 PlayerIndex);
		static double GetWorldDeltaSeconds(const class UObject* WorldContextObject);
		static bool ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"GameplayStatics">();
		}
		static class UGameplayStatics* GetDefaultObj()
		{
			return GetDefaultObjImpl<UGameplayStatics>();
		}
	};
	// 0x0000 (0x0028 - 0x0028)
	class UKismetMathLibrary final : public UBlueprintFunctionLibrary
	{
	public:
		static struct FTransform Conv_MatrixToTransform(const struct FMatrix& InMatrix);
		static struct FMatrix Conv_TransformToMatrix(const struct FTransform& Transform);
		static double Distance2D(const struct FVector2D& v1, const struct FVector2D& v2);
		static struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
		static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
		static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"KismetMathLibrary">();
		}
		static class UKismetMathLibrary* GetDefaultObj()
		{
			return GetDefaultObjImpl<UKismetMathLibrary>();
		}
	};
	// 0x02C8 (0x02F0 - 0x0028)
	class ULevel final : public UObject
	{
	public:
		uint8										  Pad_Actors[0x70];								     // 0x0028 
		class TArray<class AActor*>					  Actors;											 // 0x0098(0x0010)
		uint8										  Pad_WorldSettings[0x1C8];							 // 0x00A8 
		class AWorldSettings*						  WorldSettings;									 // 0x0270(0x0008)
		uint8										  Pad_ULevel[0x78];									 // 0x0278
	};
	// 0x03C8 (0x03F0 - 0x0028)
	class UM1Account final : public UObject
	{
	public:
		uint8                                         Pad_Preset[0x2D0];                                 // 0x0028
		class UM1AccountPreset*						  Preset;											 // 0x02F8(0x0008)
		uint8                                         Pad_UM1Account[0xF0];                              // 0x0300
	};
	// 0x0050 (0x0078 - 0x0028)
	class UM1AccountPreset final : public UObject
	{
	public:
		TMap<int32, struct FM1PresetSlot>             PresetSlotByIndex;                                 // 0x0028(0x0050)
	};
	// 0x0118 (0x0140 - 0x0028)
	class UM1CharacterAttribute : public UObject
	{
	public:
		uint8										  Pad_UM1CharacterAttribute[0x118];					 // 0x0028
	};
	// 0x0320 (0x0348 - 0x0028)
	class UM1MissionResult final : public UObject
	{
	public:
		uint8                                         Pad_WeakActivatedMissionActor[0x4];                // 0x0028
		TWeakObjectPtr<class AM1MissionActor>         WeakActivatedMissionActor;                         // 0x002C(0x0008)
		uint8                                         Pad_MissionTemplateId[0x4];                        // 0x0034
		struct FM1TemplateId                          MissionTemplateId;                                 // 0x0038(0x0004)
		uint8                                         Pad_MissionSubType[0x2D];                          // 0x003C
		EM1MissionCategory                            MissionCategory;                                   // 0x0069(0x0001)
		EM1MissionSubType                             MissionSubType;                                    // 0x006A(0x0001)
		uint8                                         Pad_UM1MissionResult[0x2DD];                       // 0x006B
	};
	// 0x0018 (0x0040 - 0x0028)
	class UM1MissionTaskService : public UObject
	{
	public:
		uint8                                         Pad_bJoined[0x11];                                 // 0x0028
		bool                                          bJoined;                                           // 0x0039(0x0001)
		uint8                                         Pad_UM1MissionTaskService[0x6];                    // 0x003A
	};
	// 0x0018 (0x0040 - 0x0028)
	class UM1PrivateOnlineSubService : public UObject
	{
	public:
		uint8                                         Pad_bIsReady[0x10];                                // 0x0028
		bool                                          bIsReady;                                          // 0x0038(0x0001)
		uint8                                         Pad_UM1PrivateOnlineSubService[0x7];               // 0x0039
	};
	// 0x0020 (0x0048 - 0x0028)
	class UM1RepSubObject : public UObject
	{
	public:
		uint8                                         Pad_UM1RepSubObject[0x20];                         // 0x0028
	};
	// 0x0118 (0x0140 - 0x0028)
	class UM1ResearchSystem final : public UObject
	{
	public:
		uint8                                         Pad_BookmarkResearchTids[0xA0];                    // 0x0028
		TArray<struct FM1TemplateId>                  BookmarkResearchTids;                              // 0x00C8(0x0010)
		uint8                                         Pad_UM1ResearchSystem[0x68];                       // 0x00D8
	};
	// 0x0070 (0x0098 - 0x0028)
	class UMissionGraphTaskNode : public UObject
	{
	public:
		uint8                                         Pad_UMissionGraphTaskNode[0x70];					 // 0x0028
	};
	// 0x0020 (0x0048 - 0x0028)
	class UPlayer : public UObject
	{
	public:
		uint8										  Pad_PlayerController[0x8];						 // 0x0028
		class APlayerController*					  PlayerController;									 // 0x0030(0x0008)
		uint8										  Pad_UPlayer[0x10];								 // 0x0038
	};
	// 0x0010 (0x0038 - 0x0028)
	class UScriptViewportClient : public UObject
	{
	public:
		uint8										  Pad_UScriptViewportClient[0x10];					 // 0x0028
	};
	// 0x0008 (0x0030 - 0x0028)
	class USubsystem : public UObject
	{
	public:
		uint8										  Pad_USubsystem[0x8];								 // 0x0028
	};
	// 0x0000 (0x0028 - 0x0028)
	class UVisual : public UObject
	{
	};
	// 0x0108 (0x0130 - 0x0028)
	class UWidget : public UVisual
	{
	public:
		uint8										  Pad_UWidget_Class[0x108];							 // 0x0028
	};
	// 0x08F8 (0x0920 - 0x0028)
	class UWorld final : public UObject
	{
	public:
		uint8										  Pad_PersistentLevel[0x8];							 // 0x0028
		class ULevel*								  PersistentLevel;									 // 0x0030(0x0008)
		uint8										  Pad_Levels[0x140];								 // 0x0038
		TArray<class ULevel*>						  Levels;											 // 0x0178(0x0010)
		uint8										  Pad_OwningGameInstance[0x38];						 // 0x0188
		class UGameInstance*						  OwningGameInstance;								 // 0x01C0(0x0008)
		uint8										  Pad_UWorld[0x758];								 // 0x01C8
	public:
		static class UWorld* GetWorld(uintptr_t dwBase);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"World">();
		}
	};

	// 0x0000 (0x0030 - 0x0030)
	class UGameInstanceSubsystem : public USubsystem
	{
	};
	// 0x01A0 (0x01D0 - 0x0030)
	class UM1ActorManagerSubsystem final : public UGameInstanceSubsystem
	{
	public:
		TArray<class AM1Character*>					  Characters;										 // 0x0030(0x0010)
		uint8										  Pad_UM1ActorManagerSubsystem[0x190];				 // 0x0040
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1ActorManagerSubsystem">();
		}
	};
	// 0x0138 (0x0168 - 0x0030)
	class UM1LocalGameInstanceSubsystem final : public UGameInstanceSubsystem
	{
	public:
		uint8                                         Pad_ResearchSystem[0x50];							 // 0x0030
		class UM1ResearchSystem*					  ResearchSystem;                                    // 0x0080(0x0008)
		uint8                                         Pad_UM1LocalGameInstanceSubsystem[0xE0];			 // 0x0088
	public:
		static class UM1LocalGameInstanceSubsystem* Get(const class UObject* WorldContextObject);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1LocalGameInstanceSubsystem">();
		}
		static class UM1LocalGameInstanceSubsystem* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1LocalGameInstanceSubsystem>();
		}
	};
	// 0x0068 (0x0098 - 0x0030)
	class UMissionGraph : public UDataAsset
	{
	public:
		uint8                                         Pad_UMissionGraph[0x68];                           // 0x0030
	};

	// 0x0378 (0x03B0 - 0x0038)
	class UGameViewportClient : public UScriptViewportClient
	{
		uint8										  Pad_UGameViewportClient[0x378];					 // 0x0038
	};
	
	// 0x0000 (0x0040 - 0x0040)
	class UM1MissionTaskServiceInteraction final : public UM1MissionTaskService
	{
	public:
		void ServerRequestMissionTargetBeginInteraction(class AM1MissionTargetInteraction* InActor, class AM1PlayerControllerInGame* InAcceptor);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskServiceInteraction">();
		}
	};
	// 0x0078 (0x00B8 - 0x0040)
	class UM1PrivateOnlineServicePreset final : public UM1PrivateOnlineSubService
	{
	public:
		uint8                                         Pad_UM1PrivateOnlineServicePreset[0x78];           // 0x0040
	public:
		void ServerRequestApplyPreset(int32 InPresetIndex);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PrivateOnlineServicePreset">();
		}
	};
	// 0x0060 (0x00A0 - 0x0040)
	class UM1PrivateOnlineServiceResearch final : public UM1PrivateOnlineSubService
	{
	public:
		uint8                                         Pad_UM1PrivateOnlineServiceResearch[0x60];         // 0x0040
	public:
		void ServerRequestStartResearch(const struct FM1TemplateId& InResearchTemplateId, int32 InRepeatCount);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PrivateOnlineServiceResearch">();
		}
	};

	// 0x0230 (0x0278 - 0x0048)
	class ULocalPlayer : public UPlayer
	{
	public:
		uint8										  Pad_ViewportClient[0x30];							 // 0x0048
		class UGameViewportClient*					  ViewportClient;									 // 0x0078(0x0008)
		uint8										  Pad_ULocalPlayer[0x1F8];							 // 0x0080
	};
	// 0x0260 (0x02A8 - 0x0048)
	class UM1Ability : public UM1RepSubObject
	{
	public:
		uint8                                         Pad_UM1Ability[0x260];                             // 0x0048
	};
	
	// 0x0168 (0x0200 - 0x0098)
	class UM1DataMission final : public UMissionGraph
	{
	public:
		uint8                                         Pad_MissionDataRowName[0x20];                       // 0x0098
		class FName                                   MissionDataRowName;                                 // 0x00B8(0x0008)
		EM1MissionSubType                             MissionSubType;                                     // 0x00C0(0x0001)
		uint8                                         Pad_UM1DataMission[0x13F];                          // 0x00C1
	};
	// 0x0238 (0x02D0 - 0x0098)
	class UM1MissionTask final : public UMissionGraphTaskNode
	{
	public:
		class FName                                   TaskName;                                          // 0x0098(0x0008)
		uint8                                         Pad_UM1MissionTask[0x230];                         // 0x00A0
	};
	
	// 0x0078 (0x0120 - 0x00A8)
	class UGameplayTasksComponent : public UActorComponent
	{
	public:
		uint8                                         Pad_UGameplayTasksComponent[0x78];                 // 0x00A8
	};
	// 0x0020 (0x00C8 - 0x00A8)
	class UM1ActorComponent : public UActorComponent
	{
	public:
		uint8										  Pad_UM1ActorComponent[0x20];						 // 0x00A8
	};
	// 0x0740 (0x07E8 - 0x00A8)
	class UM1MissionControlComponent final : public UActorComponent
	{
	public:
		uint8                                         Pad_SubServices[0x20];                             // 0x00A8
		TArray<class UM1MissionTaskService*>          SubServices;                                       // 0x00C8(0x0010)
		uint8                                         Pad_ActivatedMissions[0x130];                      // 0x00D8
		TArray<class AM1MissionActor*>                AvailableMissions;                                 // 0x0208(0x0010)
		TArray<class AM1MissionActor*>                ActivatedMissions;                                 // 0x0218(0x0010)
		uint8                                         Pad_MissionResult[0x3A0];                          // 0x0228
		class UM1MissionResult*						  MissionResult;                                     // 0x05C8(0x0008)
		uint8                                         Pad_UM1MissionControlComponent[0x218];			 // 0x05D0
	public:
		void ServerLeaveMission(EM1MissionEndReason InReason);
		void ServerRestartLastPlayedMission();
		void ServerRunTaskActor(class AM1MissionTaskActor* InActor);
		void ServerStartMissionByTemplateID(const struct FM1TemplateId& InTemplateId);
		void ServerStartMission(class AM1MissionActor* InMission, bool InForceStart);
	};
	// 0x0148 (0x01F0 - 0x00A8)
	class alignas(0x10) USceneComponent : public UActorComponent
	{
	public:
		uint8                                         Pad_USceneComponent[0x148];						 // 0x00A8
	public:
		struct FTransform K2_GetComponentToWorld() const;
	};

	// 0x0008 (0x00D0 - 0x00C8)
	class UM1CharacterComponent : public UM1ActorComponent
	{
	public:
		uint8										  Pad_UM1CharacterComponent[0x8];					 // 0x00C8
	};
	// 0x0028 (0x00F0 - 0x00C8)
	class UM1MultiSuppliierObtainComponent final : public UM1ActorComponent
	{
	public:
		uint8                                         Pad_UM1MultiSuppliierObtainComponent[0x28];        // 0x00C8
	public:
		void ServerRequestProcessInteraction(const struct FM1TemplateId& InTemplateId, uint32 InObjectUniqueID, const class AActor* InNpcRelative);
	};
	// 0x0B60 (0x0C28 - 0x00C8)
	class UM1PrivateOnlineServiceComponent final : public UM1ActorComponent
	{
	public:
		TArray<class UM1PrivateOnlineSubService*>     SubServices;										 // 0x00C8(0x0010)
		uint8                                         Pad_CurrentSpareRounds[0x140];					 // 0x00D8
		TWeakObjectPtr<class UM1Account>			  CachedAccount;									 // 0x0218(0x0008)
		uint8										  Pad_UM1PrivateOnlineServiceComponent[0xA08];		 // 0x0220
	};
	static_assert(offsetof(UM1PrivateOnlineServiceComponent, SubServices) == 0x00C8, "Bad alignment");
	static_assert(offsetof(UM1PrivateOnlineServiceComponent, Pad_CurrentSpareRounds) == 0x00D8, "Bad alignment");
	static_assert(offsetof(UM1PrivateOnlineServiceComponent, CachedAccount) == 0x0218, "Bad alignment");
	static_assert(offsetof(UM1PrivateOnlineServiceComponent, Pad_UM1PrivateOnlineServiceComponent) == 0x0220, "Bad alignment");
	// 0x0458 (0x0520 - 0x00C8)
	class UM1StatComponent : public UM1ActorComponent
	{
	public:
		uint8                                         Pad_UM1StatComponent[0x458];                       // 0x00C8
	public:
		struct FM1ScaledInteger GetStatValue(const struct FM1StatType& InStatType) const;
	};
	// 0x0008 (0x00D0 - 0x00C8)
	class UM1WeaponComponent : public UM1ActorComponent
	{
	public:
		uint8										  Pad_UM1WeaponComponent[0x8];						 // 0x00C8
	};

	// 0x0098 (0x0168 - 0x00D0)
	class UM1PlayerRoundsComponent final : public UM1CharacterComponent
	{
	public:
		uint8                                         Pad_CurrentSpareRounds[0x10];						 // 0x00D0
		TArray<int32>                                 CurrentSpareRounds;                                // 0x00E0(0x0010)
		TMap<EM1RoundsType, FCachedMaxCapacity>		  CachedMaxCapacities;								 // 0x00F0(0x0050)
		uint8                                         Pad_UM1PlayerRoundsComponent[0x28];                // 0x0140
	};
	static_assert(offsetof(UM1PlayerRoundsComponent, Pad_CurrentSpareRounds) == 0x00D0, "Bad alignment");
	static_assert(offsetof(UM1PlayerRoundsComponent, CurrentSpareRounds) == 0x00E0, "Bad alignment");
	static_assert(offsetof(UM1PlayerRoundsComponent, CachedMaxCapacities) == 0x00F0, "Bad alignment");
	static_assert(offsetof(UM1PlayerRoundsComponent, Pad_UM1PlayerRoundsComponent) == 0x0140, "Bad alignment");
	// 0x01D0 (0x02A0 - 0x00D0)
	class alignas(0x10) UM1PlayerVehicleHandlerComponent final : public UM1CharacterComponent
	{
	public:
		uint8                                         Pad_MountedVehicle[0x20];                          // 0x00D0
		class AM1Vehicle*							  MountedVehicle;                                    // 0x00F0(0x0008)
		uint8                                         Pad_UM1PlayerVehicleHandlerComponent[0x1A8];       // 0x00F8
	};
	// 0x0008 (0x00D8 - 0x00D0)
	class UM1RangedWeaponComponent : public UM1WeaponComponent
	{
	public:
		uint8                                         Pad_UM1RangedWeaponComponent[0x8];                 // 0x00D0
	};
	// 0x0130 (0x0200 - 0x00D0)
	class alignas(0x10) UM1TeleportHandlerComponent final : public UM1CharacterComponent
	{
	public:
		uint8                                         Pad_UM1TeleportHandlerComponent[0x130];            // 0x00D0
	public:
		void ServerFinishTeleportProcess();
		void ServerMoveToTeleportToLocation(const struct FVector& InLocation, const struct FRotator& InRotation);
	};
	// 0x0168 (0x0238 - 0x00D0)
	class UM1WeaponSlotControlComponent final : public UM1CharacterComponent
	{
	public:
		uint8										  Pad_ActivatedWeaponSlot[0x20];					 // 0x00D0
		struct FM1ActivatedWeaponSlot				  ActivatedWeaponSlot;							     // 0x00F0(0x0090)
		uint8										  Pad_Ability_Component[0x48];						 // 0x0180
		class UM1AbilityComponent*					  Ability_Component;                                 // 0x01C8(0x0008)
		uint8										  Pad_UM1WeaponSlotControlComponent[0x68];			 // 0x01D0
	};

	// 0x0090 (0x0168 - 0x00D8)
	class UM1WeaponFireLoopComponent : public UM1RangedWeaponComponent
	{
	public:
		uint8                                         Pad_CurrFireParams[0x48];                          // 0x00D8
		TOptional<FM1WeaponFireParams>				  CurrFireParams;									 // 0x0120(0x001C)
		float										  ElapsedTimeAfterFire;							     // 0x013C(0x0004)
		uint8                                         Pad_UM1WeaponFireLoopComponent[0x28];              // 0x0140
	};
	static_assert(offsetof(UM1WeaponFireLoopComponent, Pad_CurrFireParams) == 0x00D8, "Bad alignment");
	static_assert(offsetof(UM1WeaponFireLoopComponent, CurrFireParams) == 0x0120, "Bad alignment");
	static_assert(offsetof(UM1WeaponFireLoopComponent, ElapsedTimeAfterFire) == 0x013C, "Bad alignment");
	static_assert(offsetof(UM1WeaponFireLoopComponent, Pad_UM1WeaponFireLoopComponent) == 0x0140, "Bad alignment");
	// 0x0030 (0x0108 - 0x00D8)
	class UM1WeaponRoundsComponent final : public UM1RangedWeaponComponent
	{
	public:
		uint8										  Pad_CurrentRounds[0x14];							 // 0x00D8
		int32										  CurrentRounds;									 // 0x00EC(0x0004)
		uint8										  Pad_UM1WeaponRoundsComponent[0x18];				 // 0x00F0
	public:
		void ClientFillCurrentRoundByServer();
	};
	// 0x0038 (0x0110 - 0x00D8)
	class UM1WeaponSprayPatternComponent final : public UM1RangedWeaponComponent
	{
	public:
		uint8                                         Pad_CrosshairSizeBase[0xC];					     // 0x00D8
		float										  CrosshairSizeBase;							     // 0x00E4(0x0004)
		struct FM1RangedWeaponRecoilData*			  RecoilData;									     // 0x00E8(0x0008)
		struct FM1RangedWeaponRecoilData*			  ZoomRecoilData;								     // 0x00F0(0x0008)
		bool										  bApplySpreadSize;								     // 0x00F8(0x0001)
		uint8                                         Pad_CurrAccuracySizeInterp[0x3];				     // 0x00F9
		float										  CurrAccuracySizeInterp;						     // 0x00FC(0x0004)
		float										  CurrBaseSizeInterp;							     // 0x0100(0x0004)
		uint8                                         Pad_CurrentSpreadSize[0x4];					     // 0x0104
		float										  CurrentSpreadSize;						         // 0x0108(0x0004)                        
		float                                         RecoverRecoilStartDelayTime;					     // 0x010C(0x0004)
	};
	static_assert(offsetof(UM1WeaponSprayPatternComponent, Pad_CrosshairSizeBase) == 0x00D8, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, CrosshairSizeBase) == 0x00E4, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, RecoilData) == 0x00E8, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, ZoomRecoilData) == 0x00F0, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, bApplySpreadSize) == 0x00F8, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, Pad_CurrAccuracySizeInterp) == 0x00F9, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, CurrAccuracySizeInterp) == 0x00FC, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, CurrBaseSizeInterp) == 0x0100, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, Pad_CurrentSpreadSize) == 0x0104, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, CurrentSpreadSize) == 0x0108, "Bad alignment");
	static_assert(offsetof(UM1WeaponSprayPatternComponent, RecoverRecoilStartDelayTime) == 0x010C, "Bad alignment");
	

	// 0x0150 (0x0270 - 0x0120)
	class UM1AbilityComponent final : public UGameplayTasksComponent
	{
	public:
		uint8                                         Pad_RegisteredAbilities[0x18];                     // 0x0120
		TArray<class UM1Ability*>                     RegisteredAbilities;                               // 0x0138(0x0010)
		uint8                                         Pad_UM1AbilityComponent[0x128];                    // 0x0148
	};
	
	// 0x0020 (0x0150 - 0x0130)
	class UTextLayoutWidget : public UWidget
	{
	public:
		uint8										  Pad_UTextLayoutWidget[0x20];						 // 0x0130
	};
	// 0x0120 (0x0250 - 0x0130)
	class UUserWidget : public UWidget
	{
	public:
		uint8										  Pad_UUserWidget[0x120];							 // 0x0130
	};

	// 0x0108 (0x0248 - 0x0140)
	class UM1MonsterAttribute : public UM1CharacterAttribute
	{
	public:
		uint8										  Pad_UM1MonsterAttribute[0x108];					 // 0x0140
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MonsterAttribute">();
		}
	};

	// 0x01B0 (0x0300 - 0x0150)
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText									  Text;												 // 0x0150(0x0018)
		uint8										  Pad_UTextBlock[0x198];							 // 0x0168
	};

	// 0x0108 (0x02C8 - 0x01C0)
	class UM1GameInstance : public UGameInstance
	{
	public:
		EM1OnlineServiceConnectionState				  ConnectionState;									 // 0x01C0(0x0001)
		uint8										  Pad_UM1GameInstance[0x107];						 // 0x01C1
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1GameInstance">();
		}
	};

	// 0x0230 (0x0420 - 0x01F0)
	class UM1ActorWidgetComponent : public USceneComponent
	{
	public:
		uint8										  Pad_ActorWidget[0x48];							 // 0x01F0
		TWeakObjectPtr<class UM1UIActorWidget>		  ActorWidget;										 // 0x0238(0x0008)
		uint8										  Pad_UM1ActorWidgetComponent[0x1E0];				 // 0x0240
	};
	// 0x0280 (0x0470 - 0x01F0)
	class UPrimitiveComponent : public USceneComponent
	{
	public:
		uint8										  Pad_UPrimitiveComponent[0x280];					 // 0x01F0
	};
	
	// 0x0088 (0x02D0 - 0x0248)
	class AController : public AActor
	{
	public:
		uint8										  Pad_PlaterState[0x8];								 // 0x0248
		class APlayerState*							  PlayerState;										 // 0x0250(0x0008)
		uint8										  Pad_Pawn[0x30];									 // 0x0258
		class APawn*								  Pawn;												 // 0x0288(0x0008)
		uint8										  Pad_Character[0x8];								 // 0x0290
		class ACharacter*							  Character;										 // 0x0298(0x0008)
		uint8										  Pad_AController[0x30];							 // 0x02A0
	public:
		void SetControlRotation(const struct FRotator& NewRotation);
		bool LineOfSightTo(const class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks) const;
	};
	// 0x0000 (0x0248 - 0x0248)
	class AInfo : public AActor
	{
	};
	// 0x00F0 (0x0338 - 0x0248)
	class AM1Actor : public AActor
	{
	public:
		uint8										  Pad_AM1Actor[0xF0];								 // 0x0248
	};
	// 0x0398 (0x05E0 - 0x0248)
	class alignas(0x10) AM1DropContainer : public AActor
	{
	public:
		uint8                                         Pad_bBeingPickedLocally[0x278];					 // 0x0248
		bool                                          bBeingPickedLocally;								 // 0x04C0(0x0001)
		bool                                          bTriedSetToObtained;								 // 0x04C1(0x0001)
		uint8                                         Pad_AM1DropContainer[0x11E];						 // 0x04C2
	public:
		bool IsObtained() const;
	};
	// 0x0030 (0x0278 - 0x0248)
	class AM1MiniGameActor final : public AActor
	{
	public:
		struct FM1TemplateId                          MiniGameTid;                                       // 0x0248(0x0004)
		struct FM1TemplateId                          FieldDifficultyTid;                                // 0x024C(0x0004)
		uint8										  Pad_AM1MiniGameActor[0x28];                        // 0x0250
	public:
		void ClientStartMiniGame(const struct FM1TemplateId& InMiniGameTid, const struct FM1TemplateId& InPlayerTid, const struct FM1TemplateId& InFieldDifficultyTid, const EM1MiniGameDifficulty InDifficulty);
		void ClientStopMiniGame();
		void ServerDropItems(class AController* InInstigator);
		void ServerOnMiniGameEnded(const struct FM1MiniGameResult& InResult);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MiniGameActor">();
		}
	};
	// 0x0428 (0x0670 - 0x0248)
	class AM1MissionActor final : public AActor
	{
	public:
		uint8                                         Pad_MissionData[0x38];						     // 0x0248
		class UM1DataMission*						  MissionData;                                       // 0x0280(0x0008)
		uint8                                         Pad_TaskLinks[0x10];								 // 0x0288
		TArray<struct FM1MissionTaskLink>             TaskLinks;                                         // 0x0298(0x0010)
		uint8                                         Pad_ProgressInfo[0xD0];						     // 0x02A8
		struct FM1MissionProgressInfo                 ProgressInfo;                                      // 0x0378(0x0060)
		uint8                                         Pad_AM1MissionActor[0x298];						 // 0x03D8
	};
	// 0x0020 (0x0268 - 0x0248)
	class AM1MissionTaskMoveWayPoint final : public AActor
	{
	public:
		uint8                                         Pad_Index_0[0x18];                                 // 0x0248
		int32                                         Index_0;                                           // 0x0260(0x0004)
		uint8                                         Pad_AM1MissionTaskMoveWayPoint[0x4];               // 0x0264
	};
	// 0x0290 (0x04D8 - 0x0248)
	class AM1TaskEventActor : public AActor
	{
	public:
		uint8                                         Pad_AM1TaskEventActor[0x290];						 // 0x0248
	};
	// 0x0070 (0x02B8 - 0x0248)
	class APawn : public AActor
	{
	public:
		uint8										  Pad_APawn[0x70];									 // 0x0248
	};
	// 0x36E8 (0x3930 - 0x0248)
	class APlayerCameraManager : public AActor
	{
	public:
		uint8										  Pad_APlayerCameraManager[0x36E8];					 // 0x0248
	public:
		struct FVector GetCameraLocation() const;
		struct FRotator GetCameraRotation() const;
	};
	// 0x0118 (0x0360 - 0x0248)
	class APlayerState : public AInfo
	{
	public:
		uint8                                         Pad_APlayerState[0x118];							 // 0x0248
	};
	// 0x01E0 (0x0428 - 0x0248)
	class AWorldSettings : public AInfo
	{
	public:
		uint8										  Pad_TimeDilation[0x130];							 // 0x0248 
		float										  TimeDilation;										 // 0x0378(0x0004)
		uint8										  Pad_AWorldSettings[0xAC];							 // 0x037C
	};

	// 0x04D8 (0x0728 - 0x0250)
	class UM1UIWidget : public UUserWidget
	{
	public:
		uint8										  Pad_UM1UIWidget[0x4D8];							 // 0x0250
	};

	// 0x0098 (0x0340 - 0x02A8)
	class UM1SkillAbility : public UM1Ability
	{
	public:
		uint8                                         Pad_UM1SkillAbility[0x98];                         // 0x02A8
	};

	// 0x0248 (0x0500 - 0x02B8)
#pragma pack(push, 0x1)
	class alignas(0x10) ACharacter : public APawn
	{
	public:
		class USkeletalMeshComponent*				  Mesh;												 // 0x02B8(0x0008)
		uint8										  Pad_ACharacter[0x240];							 // 0x02C0
	};
#pragma pack(pop)

	// 0x04B8 (0x0788 - 0x02D0)
	class APlayerController : public AController
	{
	public:
		uint8										  Pad_Player[0x8];									 // 0x02D0
		class UPlayer*								  Player;											 // 0x02D8(0x0008)
		uint8										  Pad_PlayerCameraManager[0x10];					 // 0x02E0
		class APlayerCameraManager*					  PlayerCameraManager;								 // 0x02F0(0x0008)
		uint8										  Pad_APlayerController[0x490];						 // 0x02F8
	public:
		bool GetMousePosition(float* LocationX, float* LocationY) const;
	};

	// 0x0020 (0x0320 - 0x0300)
#pragma pack(push, 0x1)
	class alignas(0x10) UM1TextBlock : public UTextBlock
	{
	public:
		uint8										  Pad_UM1TextBlock[0x20];							 // 0x0300
	};
#pragma pack(pop)

	// 0x0448 (0x0780 - 0x0338)
	class AM1AbilityActor : public AM1Actor
	{
	public:
		uint8										  Pad_AM1AbilityActor[0x448];						 // 0x0338	
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1AbilityActor">();
		}
	};
	// 0x0108 (0x0440 - 0x0338)
	class AM1FieldInteractableActor : public AM1Actor
	{
	public:
		uint8										  Pad_AM1FieldInteractableActor[0x108];				 // 0x0338
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor">();
		}
	};
	// 0x0010 (0x0348 - 0x0338)
	class AM1StatBasedActor : public AM1Actor
	{
	public:
		uint8                                         Pad_AM1StatBasedActor[0x10];						 // 0x0338
	};
	// 0x04F0 (0x0828 - 0x0338)
	class AM1Vehicle : public AM1Actor
	{
	public:

		uint8                                         Pad_CurrentMovementData[0x3E8];                    // 0x0338
		struct FM1VehicleMovementData                 CurrentMovementData;                               // 0x0720(0x00C0)
		uint8                                         Pad_808[0x48];                                     // 0x07E0
	};
	// 0x0120 (0x0458 - 0x0338)
	class AM1Weapon : public AM1Actor
	{
	public:
		uint8										  Pad_AM1Weapon[0x120];								 // 0x0338
	};

	// 0x0010 (0x0350 - 0x0340)
	class UM1WireSkillAbility : public UM1SkillAbility
	{
	public:
		float                                         FireMaxDistance;                                   // 0x0340(0x0004)
		uint8                                         Pad_UM1WireSkillAbility[0xC];                      // 0x0344
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1WireSkillAbility">();
		}
	};

	// 0x0420 (0x0768 - 0x0348)
	class AM1MissionTargetActor : public AM1StatBasedActor
	{
	public:
		uint8										  Pax_CurrentState[0x29C];							 // 0x0348					
		EM1MissionTargetState                         CurrentState; 									 // 0x05E4(0x0001)
		uint8                                         Pad_AM1MissionTargetActor[0x183];                  // 0x05E5
	};

	// 0x0088 (0x03E8 - 0x0360)
	class AM1PlayerState final : public APlayerState
	{
	public:
		class UM1MissionControlComponent*			  MissionControlComponent;                           // 0x0360(0x0008)
		uint8										  Pad_AM1PlayerState[0x80];							 // 0x0368
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerState">();
		}
	};

	// 0x0030 (0x0450 - 0x0420)
	class UM1CharacterInfoWidgetComponent final : public UM1ActorWidgetComponent
	{
	public:
		uint8										  Pad_UM1CharacterInfoWidgetComponent[0x30];		 // 0x0420
	};

	// 0x0028 (0x0468 - 0x0440)
	class AM1FieldInteractableActor_Hit final : public AM1FieldInteractableActor
	{
	public:
		uint8										  Pad_AM1FieldInteractableActor_Hit[0x28];			 // 0x0440
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor_Hit">();
		}
	};
	// 0x0010 (0x0450 - 0x0440)
	class AM1FieldInteractableActor_Interaction : public AM1FieldInteractableActor
	{
	public:
		uint8										  Pad_AM1FieldInteractableActor_Interaction[0x10];	 // 0x0440

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor_Interaction">();
		}
	};

	// 0x0010 (0x0460 - 0x0450)
	class AM1FieldInteractableActorMiniGame final : public AM1FieldInteractableActor_Interaction
	{
	public:
		uint8										  Pad_AM1FieldInteractableActorMiniGame[0x10];		 // 0x0450
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActorMiniGame">();
		}
	};
	// 0x0090 (0x04E8 - 0x0458)
	class AM1RangedWeapon final : public AM1Weapon
	{
	public:
		uint8										  Pad_FireLoopComponent[0x10];						 // 0x0458
		class UM1WeaponFireLoopComponent*			  FireLoopComponent;								 // 0x0468(0x0008)
		uint8										  Pad_SprayPatternComponent[0x10];					 // 0x0470
		class UM1WeaponSprayPatternComponent*		  SprayPatternComponent;                             // 0x0480(0x0008)
		class UM1WeaponRoundsComponent*				  RoundsComponent;                                   // 0x0488(0x0008)
		uint8										  Pad_AM1RangedWeapon[0x58];						 // 0x0490
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1RangedWeapon">();
		}
	};

	// 0x0040 (0x04B0 - 0x0470)
#pragma pack(push, 0x1)
	class alignas(0x10) UMeshComponent : public UPrimitiveComponent
	{
	public:
		uint8										  Pad_UMeshComponent[0x40];							 // 0x0470
	};
#pragma pack(pop)

	// 0x02E0 (0x0790 - 0x04B0)   //watch
	class USkinnedMeshComponent : public UMeshComponent
	{
	public:
		uint8										  Pad_BoneArray[0x68];								 // 0x04B0
		TArray<FTransform>							  BoneArray;										 // 0x0518(0x0010)
		uint8										  Pad_USkinnedMeshComponent[0x268];					 // 0x0528
	public:
		class FName GetBoneName(int32 BoneIndex) const;
	};
	static_assert(offsetof(USkinnedMeshComponent, BoneArray) == 0x0518, "Bad alignment");

	// 0x0398 (0x0870 - 0x04D8)
#pragma pack(push, 0x1)
	class alignas(0x10) AM1MissionTaskActor : public AM1TaskEventActor
	{
	public:
		uint8                                         Pad_MissionTask[0x108];							 // 0x04D8
		class UM1MissionTask*						  MissionTask;                                       // 0x05E0(0x0008)
		int32                                         TaskIndex;                                         // 0x05E8(0x0004)
		uint8                                         Pad_WayPoints[0x7C];								 // 0x05EC
		TArray<class AM1MissionTaskMoveWayPoint*>     WayPoints;                                         // 0x0668(0x0010)
		uint8                                         Pad_AM1MissionTaskActor[0x1F8];				     // 0x0678
	};
#pragma pack(pop)

	// 0x0770 (0x0C70 - 0x0500)
	class AM1Character : public ACharacter
	{
	public:
		uint8										  Pad_InfoWidgetComponent[0x348];					 // 0x0500
		class UM1CharacterInfoWidgetComponent*		  InfoWidgetComponent;								 // 0x0848(0x0008)
		uint8										  Pad_StatComponent[0x18];							 // 0x0850
		class UM1StatComponent*						  StatComponent;									 // 0x0868(0x0008)
		uint8										  Pad_CharacterAttribute[0x20];						 // 0x0870
		class UM1CharacterAttribute*				  CharacterAttribute;								 // 0x0890(0x0008)
		uint8										  Pad_CharacterId[0x210];							 // 0x0898
		struct FM1TemplateId						  CharacterId;									     // 0x0AA8(0x0004)
		uint8										  Pad_AM1Character[0x1C4];							 // 0x0AAC
	public:
		bool IsDead() const;
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Character">();
		}
	};
	static_assert(offsetof(AM1Character, InfoWidgetComponent) == 0x0848, "Bad alignment");
	static_assert(offsetof(AM1Character, StatComponent) == 0x0868, "Bad alignment");
	static_assert(offsetof(AM1Character, CharacterAttribute) == 0x0890, "Bad alignment");
	static_assert(offsetof(AM1Character, CharacterId) == 0x0AA8, "Bad alignment");

	// 0x0040 (0x0620 - 0x05E0)
	class AM1DropContainerByMission : public AM1DropContainer
	{
	public:
		uint8                                         Pad_AM1DropContainerByMission[0x40];                // 0x05E0
	};
	// 0x00C0 (0x06A0 - 0x05E0)
	class AM1DroppedItem : public AM1DropContainer
	{
	public:
		uint8                                         Pad_DropItemInfo[0x48];							 // 0x05E0
		struct FM1DropItemInfo                        DropItemInfo;										 // 0x0628(0x0038)
		uint8                                         Pad_bObtainRequestedOnClient[0x28];				 // 0x0660
		bool                                          bObtainRequestedOnClient;							 // 0x0688(0x0001)
		uint8                                         Pad_AM1DroppedItem[0x17];							 // 0x0689
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1DroppedItem">();
		}
	};

	// 0x0010 (0x0630 - 0x0620)
	class AM1DropMissionCollectibles : public AM1DropContainerByMission
	{
	public:
		uint8                                         Pad_AM1DropMissionCollectibles[0x10];               // 0x0620
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1DropMissionCollectibles">();
		}
	};
	// 0x0040 (0x0660 - 0x0620)
	class AM1DropMissionSupplies : public AM1DropContainerByMission
	{
	public:
		uint8                                         Pad_AM1DropMissionSupplies[0x40];                  // 0x0620
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1DropMissionSupplies">();
		}
	};
	
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_DroppedItemBase_C : public AM1DroppedItem
	{
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_AmmoEnhancedDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoEnhancedDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_AmmoGeneralDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoGeneralDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_AmmoHighpowerDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoHighpowerDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_AmmoImpactDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoImpactDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_BuffOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_BuffOrbDroppedItem_C">();
		}
	};
	// 0x0020 (0x06C0 - 0x06A0)
	class ABP_EmberDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		uint8                                         Pad_ABP_EmberDroppedItem_C[0x20];					 // 0x06A0
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EmberDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_EquipTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_EquipTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier02DroppedItem_C">();
		}
	};
	// 0x0010 (0x06B0 - 0x06A0)
	class ABP_EquipTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		uint8                                         Pad_ABP_EquipTier03DroppedItem_C[0x10];			 // 0x06A0
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_GoldDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_GoldDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_HealthOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_HealthOrbDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_KuiperShardDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_KuiperShardDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_ManaOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ManaOrbDroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_ResourceTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_ResourceTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier02DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_ResourceTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_RuneTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_RuneTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier02DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_RuneTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x06A0 - 0x06A0)
	class ABP_RuneTier04DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier04DroppedItem_C">();
		}
	};
	
	// 0x0030 (0x0758 - 0x0728)
	class UM1UIActorWidget : public UM1UIWidget
	{
	public:
		uint8										  Pad_UM1UIActorWidget[0x30];						 // 0x0728
	};
	
	// 0x00C0 (0x0818 - 0x0758)
	class UM1UICharacterInfoBase : public UM1UIActorWidget
	{
	public:
		uint8										  Pad_TB_Name[0x8];									 // 0x0758
		class UM1TextBlock*							  TB_Name;											 // 0x0760(0x0008)
		uint8										  Pad_UM1UICharacterInfoBase[0xB0];					 // 0x0768
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1UICharacterInfoBase">();
		}
	};

	// 0x0028 (0x0790 - 0x0768)
	class AM1MissionTargetInteraction final : public AM1MissionTargetActor
	{
	public:
		uint8                                         Pad_AM1MissionTargetInteraction[0x28];			 // 0x0768
	};

	// 0x01C8 (0x0950 - 0x0788)
	class alignas(0x10) AM1PlayerController : public APlayerController
	{
	public:
		uint8										  Pad_ActorManager_Subsystem[0x78];					 // 0x0788
		class UM1ActorManagerSubsystem*				  ActorManager_Subsystem;							 // 0x0800(0x0008)
		uint8										  Pad_PrivateOnlineServiceComponent[0x10];			 // 0x0808
		class UM1PrivateOnlineServiceComponent*		  PrivateOnlineServiceComponent;					 // 0x0818(0x0008)
		uint8										  Pad_AM1PlayerController[0x130];					 // 0x0820
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerController">();
		}
	};

	// 0x06B0 (0x0E40 - 0x0790)
	class USkeletalMeshComponent : public USkinnedMeshComponent
	{
		uint8										  Pad_USkeletalMeshComponent[0x6B0];				 // 0x0790
	};

	// 0x0060 (0x08D0 - 0x0870)
	class AM1MissionTaskActorDestructionVulgusPost : public AM1MissionTaskActor
	{
	public:
		uint8                                         Pad_MissionTargets[0x10];							 // 0x0870
		TArray<class AM1MissionTargetInteraction*>    MissionTargets;									 // 0x0880(0x0010)
		uint8                                         Pad_AM1MissionTaskActorDestructionVulgusPost[0x40];// 0x0890
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskActorDestructionVulgusPost">();
		}
	};
	static_assert(offsetof(AM1MissionTaskActorDestructionVulgusPost, MissionTargets) == 0x0880, "Bad alignment");

	// 0x04E0 (0x0E30 - 0x0950)
	class AM1PlayerControllerInGame : public AM1PlayerController
	{
	public:
		uint8										  Pad_MultiSupplierObtainComponent[0x88];			 // 0x0950
		class UM1MultiSuppliierObtainComponent*		  MultiSupplierObtainComponent;                      // 0x09D8(0x0008)
		uint8										  Pad_AM1PlayerControllerInGame[0x450];				 // 0x09E0
	public:
		void ServerRequestFieldObjectDropItems(class AM1FieldInteractableActor* InActor);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerControllerInGame">();
		}
	};

	// 0x0260 (0x0ED0 - 0x0C70)
	class AM1Monster : public AM1Character
	{
	public:
		uint8										  Pad_AM1Monster[0x260];							 // 0x0C70
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Monster">();
		}
	};
	// 0x0850 (0x14C0 - 0x0C70)
	class AM1Player : public AM1Character
	{
	public:
		uint8										  Pad_TeleportHandler[0x368];						 // 0x0C70
		class UM1TeleportHandlerComponent*			  TeleportHandler;									 // 0x0FD8(0x0008)
		uint8										  Pad_WeaponSlotControl[0x10];						 // 0x0FE0
		class UM1WeaponSlotControlComponent*		  WeaponSlotControl;								 // 0x0FF0(0x0008)
		uint8										  Pad_RoundsComponent[0x30];						 // 0x0FF8
		class UM1PlayerRoundsComponent*				  RoundsComponent;									 // 0x1028(0x0008)
		uint8										  Pad_VehicleHandlerComponent[0x38];				 // 0x1030
		class UM1PlayerVehicleHandlerComponent*		  VehicleHandlerComponent;                           // 0x1068(0x0008)
		uint8										  Pad_PlayerName[0x8];								 // 0x1070
		class FString								  PlayerName;										 // 0x1078(0x0010)
		uint8										  Pad_AM1Player[0x438];								 // 0x1088
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Player">();
		}
	};



	// 0x0001 (0x0001 - 0x0000)
	struct M1Character_IsDead final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)
	};
	// 0x0000 (0x000C - 0x000C)
	struct FVector_NetQuantize final : public FVector
	{
	};
	// 0x0000 (0x000C - 0x000C)
	struct FVector_NetQuantizeNormal final : public FVector
	{
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FActorInstanceHandle final
	{
	public:
		TWeakObjectPtr<class AActor>                  Actor;                                             // 0x0000(0x0008)
		uint8                                         Pad_FActorInstanceHandle[0x10];                    // 0x0008
	};
	// 0x009C (0x009C - 0x0000)
	struct FHitResult final
	{
	public:
		int32                                         FaceIndex;                                         // 0x0000(0x0004)
		float                                         Time;                                              // 0x0004(0x0004)
		float                                         Distance;                                          // 0x0008(0x0004)
		struct FVector_NetQuantize                    Location;                                          // 0x000C(0x000C)
		struct FVector_NetQuantize                    ImpactPoint;                                       // 0x0018(0x000C)
		struct FVector_NetQuantizeNormal              Normal;                                            // 0x0024(0x000C)
		struct FVector_NetQuantizeNormal              ImpactNormal;                                      // 0x0030(0x000C)
		struct FVector_NetQuantize                    TraceStart;                                        // 0x003C(0x000C)
		struct FVector_NetQuantize                    TraceEnd;                                          // 0x0048(0x000C)
		float                                         PenetrationDepth;                                  // 0x0054(0x0004)
		int32                                         MyItem;                                            // 0x0058(0x0004)
		int32                                         Item;                                              // 0x005C(0x0004)
		uint8                                         ElementIndex;                                      // 0x0060(0x0001)
		uint8                                         bBlockingHit : 1;                                  // 0x0061(0x0001)
		uint8                                         bStartPenetrating : 1;                             // 0x0061(0x0001)
		uint8                                         Pad_PhysMaterial[0x2];                             // 0x0062(0x0002)
		TWeakObjectPtr<class UPhysicalMaterial>       PhysMaterial;                                      // 0x0064(0x0008)
		struct FActorInstanceHandle                   HitObjectHandle;                                   // 0x006C(0x0018)
		TWeakObjectPtr<class UPrimitiveComponent>     Component;                                         // 0x0084(0x0008)
		class FName                                   BoneName;                                          // 0x008C(0x0008)
		class FName                                   MyBoneName;                                        // 0x0094(0x0008)
	};
	// 0x00B0 (0x00B0 - 0x0000)
	struct Actor_K2_SetActorLocation final
	{
	public:
		struct FVector                                NewLocation;                                       // 0x0000(0x000C)
		bool                                          bSweep;                                            // 0x000C(0x0001)
		uint8                                         Pad_SweepHitResult[0x3];                           // 0x000D
		struct FHitResult                             SweepHitResult;                                    // 0x0010(0x009C)
		bool                                          bTeleport;                                         // 0x00AC(0x0001)
		bool                                          ReturnValue;                                       // 0x00AD(0x0001)
		uint8                                         Pad_Actor_K2_SetActorLocation[0x2];                // 0x00AE
	};
	// 0x0010 (0x0010 - 0x0000)
	struct Actor_GetDistanceTo final
	{
	public:
		const class AActor*							  OtherActor;                                        // 0x0000(0x0008)
		float                                         ReturnValue;                                       // 0x0008(0x0004)
		uint8                                         Pad_Actor_GetDistanceTo[0x4];                      // 0x000C
	};
	// 0x000C (0x000C - 0x0000)
	struct Actor_K2_GetActorLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x000C)
	};
	// 0x000C (0x000C - 0x0000)
	struct Controller_SetControlRotation final
	{
	public:
		struct FRotator                               NewRotation;                                       // 0x0000(0x000C)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct Controller_LineOfSightTo final
	{
	public:
		const class AActor*							  Other;                                             // 0x0000(0x0008)
		struct FVector                                ViewPoint;                                         // 0x0008(0x000C)
		bool                                          bAlternateChecks;                                  // 0x0014(0x0001)
		bool                                          ReturnValue;                                       // 0x0015(0x0001)
		uint8                                         Pad_Controller_LineOfSightTo[0x2];                 // 0x0016
	};
	// 0x000C (0x000C - 0x0000)
	struct PlayerCameraManager_GetCameraLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x000C)
	};
	// 0x000C (0x000C - 0x0000)
	struct PlayerCameraManager_GetCameraRotation final
	{
	public:
		struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)
	};
	// 0x000C (0x000C - 0x0000)
	struct PlayerController_GetMousePosition final
	{
	public:
		float                                         LocationX;                                         // 0x0000(0x0004)
		float                                         LocationY;                                         // 0x0004(0x0004)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)
		uint8                                         Pad_PlayerController_GetMousePosition[0x3];        // 0x0009
	};
	// 0x0030 (0x0030 - 0x0000)
	struct SceneComponent_K2_GetComponentToWorld final
	{
	public:
		struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)
	};
	// 0x000C (0x000C - 0x0000)
	struct SkinnedMeshComponent_GetBoneName final
	{
	public:
		int32                                         BoneIndex;                                         // 0x0000(0x0004)
		class FName                                   ReturnValue;                                       // 0x0004(0x0008)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct GameplayStatics_GetPlayerController final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)
		int32                                         PlayerIndex;                                       // 0x0008(0x0004)
		uint8                                         Pad_ReturnValue[0x4];                              // 0x000C
		class APlayerController*					  ReturnValue;                                       // 0x0010(0x0008)
	};
	// 0x0020 (0x0020 - 0x0000)
	struct GameplayStatics_ProjectWorldToScreen final
	{
	public:
		class APlayerController*					  Player;                                            // 0x0000(0x0008)
		struct FVector                                WorldPosition;                                     // 0x0008(0x000C)
		struct FVector2D                              ScreenPosition;                                    // 0x0014(0x0008)
		bool                                          bPlayerViewportRelative;                           // 0x001C(0x0001)
		bool                                          ReturnValue;                                       // 0x001D(0x0001)
		uint8                                         Pad_GameplayStatics_ProjectWorldToScreen[0x2];     // 0x001E
	};
	// 0x0010 (0x0010 - 0x0000)
	struct GameplayStatics_GetWorldDeltaSeconds final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)
		double                                        ReturnValue;                                       // 0x0008(0x0008)
	};
	// 0x0070 (0x0070 - 0x0000)
	struct KismetMathLibrary_Conv_MatrixToTransform final
	{
	public:
		struct FMatrix                                InMatrix;                                          // 0x0000(0x0040)
		struct FTransform                             ReturnValue;                                       // 0x0040(0x0030)
	};
	// 0x0070 (0x0070 - 0x0000)
	struct KismetMathLibrary_Conv_TransformToMatrix final
	{
	public:
		struct FTransform                             Transform;                                         // 0x0000(0x0030)
		struct FMatrix                                ReturnValue;                                       // 0x0030(0x0040)
	};
	// 0x0024 (0x0024 - 0x0000)
	struct KismetMathLibrary_FindLookAtRotation final
	{
	public:
		struct FVector                                Start;                                             // 0x0000(0x000C)
		struct FVector                                Target;                                            // 0x000C(0x000C)
		struct FRotator                               ReturnValue;                                       // 0x0018(0x000C)
	};
	// 0x00C0 (0x00C0 - 0x0000)
	struct KismetMathLibrary_Multiply_MatrixMatrix final
	{
	public:
		struct FMatrix                                A;                                                 // 0x0000(0x0040)
		struct FMatrix                                B;                                                 // 0x0040(0x0040)
		struct FMatrix                                ReturnValue;                                       // 0x0080(0x0040)
	};
	// 0x002C (0x002C - 0x0000)
	struct KismetMathLibrary_RInterpTo final
	{
	public:
		struct FRotator                               Current;                                           // 0x0000(0x000C)
		struct FRotator                               Target;                                            // 0x000C(0x000C)
		float                                         DeltaTime;                                         // 0x0018(0x0004)
		float                                         InterpSpeed;                                       // 0x001C(0x0004)
		struct FRotator                               ReturnValue;                                       // 0x0020(0x000C)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct KismetMathLibrary_Distance2D final
	{
	public:
		struct FVector2D                              v1;                                                // 0x0000(0x0008)
		struct FVector2D                              v2;                                                // 0x0008(0x0008)
		double                                        ReturnValue;                                       // 0x0010(0x0008)
	};
	// 0x0024 (0x0024 - 0x0000)
	struct Canvas_K2_DrawLine final
	{
	public:
		struct FVector2D                              ScreenPositionA;                                   // 0x0000(0x0008)
		struct FVector2D                              ScreenPositionB;                                   // 0x0008(0x0008)
		float                                         Thickness;                                         // 0x0010(0x0004)
		struct FLinearColor                           RenderColor;                                       // 0x0014(0x0010)
	};
	// 0x0068 (0x0068 - 0x0000)
	struct Canvas_K2_DrawText final
	{
	public:
		class UFont*								  RenderFont;                                        // 0x0000(0x0008)
		class FString                                 RenderText;                                        // 0x0008(0x0010)
		struct FVector2D                              ScreenPosition;                                    // 0x0018(0x0008)
		struct FVector2D                              Scale;                                             // 0x0020(0x0008)
		struct FLinearColor                           RenderColor;                                       // 0x0028(0x0010)
		float                                         Kerning;                                           // 0x0038(0x0004)
		struct FLinearColor                           ShadowColor;                                       // 0x003C(0x0010)
		struct FVector2D                              ShadowOffset;                                      // 0x004C(0x0008)
		bool                                          bCentreX;                                          // 0x0054(0x0001)
		bool                                          bCentreY;                                          // 0x0055(0x0001)
		bool                                          bOutlined;                                         // 0x0056(0x0001)
		uint8                                         Pad_OutlineColor[0x1];                             // 0x0057
		struct FLinearColor                           OutlineColor;                                      // 0x0058(0x0010)
	};
	// 0x0001 (0x0001 - 0x0000)
	struct M1DropContainer_IsObtained final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)
	};
	// 0x0004 (0x0004 - 0x0000)
	struct M1PrivateOnlineServicePreset_ServerRequestApplyPreset final
	{
	public:
		int32                                         InPresetIndex;                                     // 0x0000(0x0004)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1MissionTaskServiceInteraction_ServerRequestMissionTargetBeginInteraction final
	{
	public:
		class AM1MissionTargetInteraction*			  InActor;                                           // 0x0000(0x0008)
		class AM1PlayerControllerInGame*			  InAcceptor;                                        // 0x0008(0x0008)
	};
	// 0x0004 (0x0004 - 0x0000)
	struct M1MissionControlComponent_ServerStartMissionByTemplateID final
	{
	public:
		struct FM1TemplateId                          InTemplateId;                                      // 0x0000(0x0004)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1MissionControlComponent_ServerRunTaskActor final
	{
	public:
		class AM1MissionTaskActor*					  InActor;                                           // 0x0000(0x0008)
	};
	// 0x0001 (0x0001 - 0x0000)
	struct M1MissionControlComponent_ServerLeaveMission final
	{
	public:
		EM1MissionEndReason                           InReason;                                          // 0x0000(0x0001)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1MiniGameActor_ServerDropItems final
	{
	public:
		class AController*							  InInstigator;                                      // 0x0000(0x0008)
	};
	// 0x000C (0x000C - 0x0000)
	struct M1MiniGameActor_ServerOnMiniGameEnded final
	{
	public:
		struct FM1MiniGameResult                      InResult;                                          // 0x0000(0x000C)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1StatComponent_GetStatValue final
	{
	public:
		struct FM1StatType                            InStatType;                                        // 0x0000(0x0001)
		uint8                                         Pad_ReturnValue[0x4];                              // 0x0001
		struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)
	};
	// 0x000C (0x000C - 0x0000)
	struct Actor_K2_GetActorRotation final
	{
	public:
		struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct M1TeleportHandlerComponent_ServerMoveToTeleportToLocation final
	{
	public:
		struct FVector                                InLocation;                                        // 0x0000(0x000C)
		struct FRotator                               InRotation;                                        // 0x000C(0x000C)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1PlayerControllerInGame_ServerRequestFieldObjectDropItems final
	{
	public:
		class AM1FieldInteractableActor*			  InActor;                                           // 0x0000(0x0008)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1PrivateOnlineServiceResearch_ServerRequestStartResearch final
	{
	public:
		struct FM1TemplateId                          InResearchTemplateId;                              // 0x0000(0x0004)
		int32                                         InRepeatCount;                                     // 0x0004(0x0004)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1LocalGameInstanceSubsystem_Get final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)
		class UM1LocalGameInstanceSubsystem*		  ReturnValue;                                       // 0x0008(0x0008)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1MissionControlComponent_ServerStartMission final
	{
	public:
		class AM1MissionActor*						  InMission;                                         // 0x0000(0x0008)
		bool                                          InForceStart;                                      // 0x0008(0x0001)
		uint8                                         Pad_M1MissionControlComponent_ServerStartMission[0x7];// 0x0009
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1MultiSuppliierObtainComponent_ServerRequestProcessInteraction final
	{
	public:
		struct FM1TemplateId                          InTemplateId;                                      // 0x0000(0x0004)
		uint32                                        InObjectUniqueID;                                  // 0x0004(0x0004)
		const class AActor*							  InNpcRelative;                                     // 0x0008(0x0008)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1MiniGameActor_ClientStartMiniGame final
	{
	public:
		struct FM1TemplateId                          InMiniGameTid;                                     // 0x0000(0x0004)
		struct FM1TemplateId                          InPlayerTid;                                       // 0x0004(0x0004)
		struct FM1TemplateId                          InFieldDifficultyTid;                              // 0x0008(0x0004)
		EM1MiniGameDifficulty                         InDifficulty;                                      // 0x000C(0x0001)
		uint8                                         Pad_M1MiniGameActor_ClientStartMiniGame[0x3];      // 0x000D
	};
}