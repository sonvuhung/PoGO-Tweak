// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos.Settings.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class EventSettings;
@class FestivalSettings;
@class FortSettings;
@class GpsSettings;
@class InventorySettings;
@class LevelSettings;
@class MapSettings;
@class NewsSettings;
@class NewsSettings_News;
@class NotificationSettings;
@class PasscodeSettings;
@class SfidaSettings;
@class TranslationSettings;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum FestivalSettings_FestivalType

typedef GPB_ENUM(FestivalSettings_FestivalType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  FestivalSettings_FestivalType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  FestivalSettings_FestivalType_None = 0,
  FestivalSettings_FestivalType_Halloween = 1,
  FestivalSettings_FestivalType_Holiday = 2,
};

GPBEnumDescriptor *FestivalSettings_FestivalType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL FestivalSettings_FestivalType_IsValidValue(int32_t value);

#pragma mark - PogoprotosSettingsRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface PogoprotosSettingsRoot : GPBRootObject
@end

#pragma mark - DownloadSettingsAction

typedef GPB_ENUM(DownloadSettingsAction_FieldNumber) {
  DownloadSettingsAction_FieldNumber_Hash_p = 1,
};

@interface DownloadSettingsAction : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *hash_p;

@end

#pragma mark - EventSettings

typedef GPB_ENUM(EventSettings_FieldNumber) {
  EventSettings_FieldNumber_CondolenceRibbonCountryArray = 1,
};

@interface EventSettings : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *condolenceRibbonCountryArray;
/** The number of items in @c condolenceRibbonCountryArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger condolenceRibbonCountryArray_Count;

@end

#pragma mark - FestivalSettings

typedef GPB_ENUM(FestivalSettings_FieldNumber) {
  FestivalSettings_FieldNumber_FestivalType = 1,
  FestivalSettings_FieldNumber_Key = 2,
  FestivalSettings_FieldNumber_Vector = 3,
};

@interface FestivalSettings : GPBMessage

@property(nonatomic, readwrite) FestivalSettings_FestivalType festivalType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readwrite, copy, null_resettable) NSString *vector;

@end

/**
 * Fetches the raw value of a @c FestivalSettings's @c festivalType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t FestivalSettings_FestivalType_RawValue(FestivalSettings *message);
/**
 * Sets the raw value of an @c FestivalSettings's @c festivalType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetFestivalSettings_FestivalType_RawValue(FestivalSettings *message, int32_t value);

#pragma mark - FortSettings

typedef GPB_ENUM(FortSettings_FieldNumber) {
  FortSettings_FieldNumber_InteractionRangeMeters = 1,
  FortSettings_FieldNumber_MaxTotalDeployedPokemon = 2,
  FortSettings_FieldNumber_MaxPlayerDeployedPokemon = 3,
  FortSettings_FieldNumber_DeployStaminaMultiplier = 4,
  FortSettings_FieldNumber_DeployAttackMultiplier = 5,
  FortSettings_FieldNumber_FarInteractionRangeMeters = 6,
  FortSettings_FieldNumber_DisableGyms = 7,
  FortSettings_FieldNumber_MaxSamePokemonAtFort = 8,
  FortSettings_FieldNumber_MaxPlayerTotalDeployedPokemon = 9,
};

@interface FortSettings : GPBMessage

@property(nonatomic, readwrite) double interactionRangeMeters;

@property(nonatomic, readwrite) int32_t maxTotalDeployedPokemon;

@property(nonatomic, readwrite) int32_t maxPlayerDeployedPokemon;

@property(nonatomic, readwrite) double deployStaminaMultiplier;

@property(nonatomic, readwrite) double deployAttackMultiplier;

@property(nonatomic, readwrite) double farInteractionRangeMeters;

@property(nonatomic, readwrite) BOOL disableGyms;

@property(nonatomic, readwrite) int32_t maxSamePokemonAtFort;

@property(nonatomic, readwrite) int32_t maxPlayerTotalDeployedPokemon;

@end

#pragma mark - GlobalSettings

typedef GPB_ENUM(GlobalSettings_FieldNumber) {
  GlobalSettings_FieldNumber_FortSettings = 2,
  GlobalSettings_FieldNumber_MapSettings = 3,
  GlobalSettings_FieldNumber_LevelSettings = 4,
  GlobalSettings_FieldNumber_InventorySettings = 5,
  GlobalSettings_FieldNumber_MinimumClientVersion = 6,
  GlobalSettings_FieldNumber_GpsSettings = 7,
  GlobalSettings_FieldNumber_FestivalSettings = 8,
  GlobalSettings_FieldNumber_EventSettings = 9,
  GlobalSettings_FieldNumber_MaxPokemonTypes = 10,
  GlobalSettings_FieldNumber_SfidaSettings = 11,
  GlobalSettings_FieldNumber_NewsSettings = 12,
  GlobalSettings_FieldNumber_TranslationSettings = 13,
  GlobalSettings_FieldNumber_PasscodeSettings = 14,
  GlobalSettings_FieldNumber_NotificationSettings = 15,
};

@interface GlobalSettings : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) FortSettings *fortSettings;
/** Test to see if @c fortSettings has been set. */
@property(nonatomic, readwrite) BOOL hasFortSettings;

@property(nonatomic, readwrite, strong, null_resettable) MapSettings *mapSettings;
/** Test to see if @c mapSettings has been set. */
@property(nonatomic, readwrite) BOOL hasMapSettings;

@property(nonatomic, readwrite, strong, null_resettable) LevelSettings *levelSettings;
/** Test to see if @c levelSettings has been set. */
@property(nonatomic, readwrite) BOOL hasLevelSettings;

@property(nonatomic, readwrite, strong, null_resettable) InventorySettings *inventorySettings;
/** Test to see if @c inventorySettings has been set. */
@property(nonatomic, readwrite) BOOL hasInventorySettings;

@property(nonatomic, readwrite, copy, null_resettable) NSString *minimumClientVersion;

@property(nonatomic, readwrite, strong, null_resettable) GpsSettings *gpsSettings;
/** Test to see if @c gpsSettings has been set. */
@property(nonatomic, readwrite) BOOL hasGpsSettings;

@property(nonatomic, readwrite, strong, null_resettable) FestivalSettings *festivalSettings;
/** Test to see if @c festivalSettings has been set. */
@property(nonatomic, readwrite) BOOL hasFestivalSettings;

@property(nonatomic, readwrite, strong, null_resettable) EventSettings *eventSettings;
/** Test to see if @c eventSettings has been set. */
@property(nonatomic, readwrite) BOOL hasEventSettings;

@property(nonatomic, readwrite) int32_t maxPokemonTypes;

@property(nonatomic, readwrite, strong, null_resettable) SfidaSettings *sfidaSettings;
/** Test to see if @c sfidaSettings has been set. */
@property(nonatomic, readwrite) BOOL hasSfidaSettings;

@property(nonatomic, readwrite, strong, null_resettable) NewsSettings *newsSettings;
/** Test to see if @c newsSettings has been set. */
@property(nonatomic, readwrite) BOOL hasNewsSettings;

@property(nonatomic, readwrite, strong, null_resettable) TranslationSettings *translationSettings;
/** Test to see if @c translationSettings has been set. */
@property(nonatomic, readwrite) BOOL hasTranslationSettings;

@property(nonatomic, readwrite, strong, null_resettable) PasscodeSettings *passcodeSettings;
/** Test to see if @c passcodeSettings has been set. */
@property(nonatomic, readwrite) BOOL hasPasscodeSettings;

@property(nonatomic, readwrite, strong, null_resettable) NotificationSettings *notificationSettings;
/** Test to see if @c notificationSettings has been set. */
@property(nonatomic, readwrite) BOOL hasNotificationSettings;

@end

#pragma mark - GpsSettings

typedef GPB_ENUM(GpsSettings_FieldNumber) {
  GpsSettings_FieldNumber_DrivingWarningSpeedMetersPerSecond = 1,
  GpsSettings_FieldNumber_DrivingWarningCooldownMinutes = 2,
  GpsSettings_FieldNumber_DrivingSpeedSampleIntervalSeconds = 3,
  GpsSettings_FieldNumber_DrivingSpeedSampleCount = 4,
};

@interface GpsSettings : GPBMessage

@property(nonatomic, readwrite) float drivingWarningSpeedMetersPerSecond;

@property(nonatomic, readwrite) float drivingWarningCooldownMinutes;

@property(nonatomic, readwrite) float drivingSpeedSampleIntervalSeconds;

@property(nonatomic, readwrite) int32_t drivingSpeedSampleCount;

@end

#pragma mark - InventorySettings

typedef GPB_ENUM(InventorySettings_FieldNumber) {
  InventorySettings_FieldNumber_MaxPokemon = 1,
  InventorySettings_FieldNumber_MaxBagItems = 2,
  InventorySettings_FieldNumber_BasePokemon = 3,
  InventorySettings_FieldNumber_BaseBagItems = 4,
  InventorySettings_FieldNumber_BaseEggs = 5,
};

@interface InventorySettings : GPBMessage

@property(nonatomic, readwrite) int32_t maxPokemon;

@property(nonatomic, readwrite) int32_t maxBagItems;

@property(nonatomic, readwrite) int32_t basePokemon;

@property(nonatomic, readwrite) int32_t baseBagItems;

@property(nonatomic, readwrite) int32_t baseEggs;

@end

#pragma mark - LevelSettings

typedef GPB_ENUM(LevelSettings_FieldNumber) {
  LevelSettings_FieldNumber_TrainerCpModifier = 2,
  LevelSettings_FieldNumber_TrainerDifficultyModifier = 3,
};

@interface LevelSettings : GPBMessage

@property(nonatomic, readwrite) double trainerCpModifier;

@property(nonatomic, readwrite) double trainerDifficultyModifier;

@end

#pragma mark - MapSettings

typedef GPB_ENUM(MapSettings_FieldNumber) {
  MapSettings_FieldNumber_PokemonVisibleRange = 1,
  MapSettings_FieldNumber_PokeNavRangeMeters = 2,
  MapSettings_FieldNumber_EncounterRangeMeters = 3,
  MapSettings_FieldNumber_GetMapObjectsMinRefreshSeconds = 4,
  MapSettings_FieldNumber_GetMapObjectsMaxRefreshSeconds = 5,
  MapSettings_FieldNumber_GetMapObjectsMinDistanceMeters = 6,
  MapSettings_FieldNumber_GoogleMapsApiKey = 7,
  MapSettings_FieldNumber_MinNearbyHideSightings = 8,
};

@interface MapSettings : GPBMessage

@property(nonatomic, readwrite) double pokemonVisibleRange;

@property(nonatomic, readwrite) double pokeNavRangeMeters;

@property(nonatomic, readwrite) double encounterRangeMeters;

@property(nonatomic, readwrite) float getMapObjectsMinRefreshSeconds;

@property(nonatomic, readwrite) float getMapObjectsMaxRefreshSeconds;

@property(nonatomic, readwrite) float getMapObjectsMinDistanceMeters;

@property(nonatomic, readwrite, copy, null_resettable) NSString *googleMapsApiKey;

@property(nonatomic, readwrite) int32_t minNearbyHideSightings;

@end

#pragma mark - NewsSettings

typedef GPB_ENUM(NewsSettings_FieldNumber) {
  NewsSettings_FieldNumber_NewsArray = 1,
};

@interface NewsSettings : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NewsSettings_News*> *newsArray;
/** The number of items in @c newsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger newsArray_Count;

@end

#pragma mark - NewsSettings_News

typedef GPB_ENUM(NewsSettings_News_FieldNumber) {
  NewsSettings_News_FieldNumber_NewsBundleId = 1,
  NewsSettings_News_FieldNumber_ExclusiveCountriesArray = 2,
};

@interface NewsSettings_News : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *newsBundleId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *exclusiveCountriesArray;
/** The number of items in @c exclusiveCountriesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger exclusiveCountriesArray_Count;

@end

#pragma mark - NotificationSettings

typedef GPB_ENUM(NotificationSettings_FieldNumber) {
  NotificationSettings_FieldNumber_PullNotifications = 1,
  NotificationSettings_FieldNumber_ShowNotifications = 2,
};

@interface NotificationSettings : GPBMessage

@property(nonatomic, readwrite) BOOL pullNotifications;

@property(nonatomic, readwrite) BOOL showNotifications;

@end

#pragma mark - PasscodeSettings

typedef GPB_ENUM(PasscodeSettings_FieldNumber) {
  PasscodeSettings_FieldNumber_ShowPasscodeInStore = 1,
};

@interface PasscodeSettings : GPBMessage

@property(nonatomic, readwrite) BOOL showPasscodeInStore;

@end

#pragma mark - SfidaSettings

typedef GPB_ENUM(SfidaSettings_FieldNumber) {
  SfidaSettings_FieldNumber_LowBatteryThreshold = 1,
};

@interface SfidaSettings : GPBMessage

@property(nonatomic, readwrite) float lowBatteryThreshold;

@end

#pragma mark - TranslationSettings

typedef GPB_ENUM(TranslationSettings_FieldNumber) {
  TranslationSettings_FieldNumber_TranslationBundleIdsArray = 1,
};

@interface TranslationSettings : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *translationBundleIdsArray;
/** The number of items in @c translationBundleIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger translationBundleIdsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
