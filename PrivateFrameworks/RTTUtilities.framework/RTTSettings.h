/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

@interface RTTSettings : NSObject {
    NSMutableSet * _registeredNotifications;
    NSLock * _synchronizeDomainsLock;
    NSMutableSet * _synchronizePreferences;
    NSMutableDictionary * _updateBlocks;
}

@property (nonatomic) bool TTYHardwareEnabled;
@property (nonatomic) bool TTYSoftwareEnabled;
@property (nonatomic, retain) NSArray *cannedResponses;
@property (nonatomic) bool hasReceivedRTTCall;
@property (nonatomic) bool incomingCallsTTY;
@property (nonatomic) long long incomingTTYCallCount;
@property (nonatomic) bool internalOverrideTTYAvailability;
@property (nonatomic) double lastCallCountReset;
@property (nonatomic) double lastDBVacuum;
@property (nonatomic) long long outgoingTTYCallCount;
@property (nonatomic, retain) NSString *preferredRelayNumber;
@property (nonatomic, retain) NSMutableSet *registeredNotifications;
@property (nonatomic, retain) NSMutableSet *synchronizePreferences;
@property (nonatomic) bool ttyShouldBeRealtime;
@property (nonatomic, retain) NSMutableDictionary *updateBlocks;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)TTYHardwareEnabled;
- (bool)TTYHardwareEnabledForContext:(id)arg1;
- (bool)TTYSoftwareEnabled;
- (bool)TTYSoftwareEnabledForContext:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (id)_selectorMap;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 andContext:(id)arg3;
- (void)_synchronizeIfNecessary:(id)arg1;
- (bool)boolValueForKey:(id)arg1 andContext:(id)arg2 withDefaultValue:(bool)arg3;
- (bool)boolValueForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (id)cannedResponses;
- (id)currentLocale;
- (void)dealloc;
- (bool)hasReceivedRTTCall;
- (bool)incomingCallsTTY;
- (bool)incomingCallsTTYForContext:(id)arg1;
- (long long)incomingTTYCallCount;
- (id)init;
- (long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (bool)internalOverrideTTYAvailability;
- (double)lastCallCountReset;
- (double)lastDBVacuum;
- (void)migrateSettings;
- (id)notificationForSelector:(SEL)arg1;
- (id)objectValueForKey:(id)arg1 andContext:(id)arg2 withClass:(Class)arg3 andDefaultValue:(id)arg4;
- (id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3;
- (long long)outgoingTTYCallCount;
- (id)preferredRelayNumber;
- (id)preferredRelayNumberForContext:(id)arg1;
- (void)registerUpdateBlock:(id /* block */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)registeredNotifications;
- (void)resetCannedResponses;
- (SEL)selectorForPreferenceKey:(id)arg1;
- (void)setCannedResponses:(id)arg1;
- (void)setHasReceivedRTTCall:(bool)arg1;
- (void)setIncomingCallsTTY:(bool)arg1;
- (void)setIncomingCallsTTY:(bool)arg1 forContext:(id)arg2;
- (void)setIncomingTTYCallCount:(long long)arg1;
- (void)setInternalOverrideTTYAvailability:(bool)arg1;
- (void)setLastCallCountReset:(double)arg1;
- (void)setLastDBVacuum:(double)arg1;
- (void)setOutgoingTTYCallCount:(long long)arg1;
- (void)setPreferredRelayNumber:(id)arg1;
- (void)setPreferredRelayNumber:(id)arg1 forContext:(id)arg2;
- (void)setRegisteredNotifications:(id)arg1;
- (void)setSettingsVersion:(long long)arg1;
- (void)setSynchronizePreferences:(id)arg1;
- (void)setTTYHardwareEnabled:(bool)arg1;
- (void)setTTYHardwareEnabled:(bool)arg1 forContext:(id)arg2;
- (void)setTTYShouldBeRealtime:(bool)arg1 forContext:(id)arg2;
- (void)setTTYSoftwareEnabled:(bool)arg1;
- (void)setTTYSoftwareEnabled:(bool)arg1 forContext:(id)arg2;
- (void)setTtyShouldBeRealtime:(bool)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (long long)settingsVersion;
- (bool)shouldMigrateSettings;
- (id)synchronizePreferences;
- (bool)ttyShouldBeRealtime;
- (bool)ttyShouldBeRealtimeForContext:(id)arg1;
- (id)updateBlocks;
- (void)updateGizmoValueIfNeeded:(id)arg1 forPreferenceKey:(id)arg2;
- (id)uuidFromContext:(id)arg1;
- (id)valueForPreferenceKey:(id)arg1;

@end
