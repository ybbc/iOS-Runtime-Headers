/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    unsigned long long  _activeContextCount;
    CTXPCServiceSubscriptionContext * _defaultVoiceContext;
    bool  _headphoneJackSupportsTTY;
    CoreTelephonyClient * _telephonyClient;
    NSObject<OS_dispatch_queue> * _telephonyUpdateQueue;
}

@property (nonatomic) unsigned long long activeContextCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *defaultVoiceContext;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool headphoneJackSupportsTTY;
@property (readonly) Class superclass;
@property (nonatomic, retain) CoreTelephonyClient *telephonyClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *telephonyUpdateQueue;

+ (bool)TTYHardwareEnabledForAnyActiveContext;
+ (bool)TTYSoftwareEnabledForAnyActiveContext;
+ (bool)hardwareTTYIsSupported;
+ (bool)hardwareTTYIsSupportedForContext:(id)arg1;
+ (bool)isOnlyRTTSupported;
+ (bool)isOnlyRTTSupportedForContext:(id)arg1;
+ (bool)isRTTSupported;
+ (bool)isRTTSupportedForContext:(id)arg1;
+ (bool)isTTYSupported;
+ (bool)isTTYSupportedForContext:(id)arg1;
+ (void)performCallCenterTask:(id /* block */)arg1;
+ (bool)relayIsSupported;
+ (bool)relayIsSupportedForContext:(id)arg1;
+ (id)relayPhoneNumber;
+ (id)relayPhoneNumberForContext:(id)arg1;
+ (id)sharedCallCenter;
+ (id)sharedUtilityProvider;
+ (bool)shouldUseRTT;
+ (bool)shouldUseRTTForContext:(id)arg1;
+ (bool)softwareTTYIsSupported;
+ (bool)softwareTTYIsSupportedForContext:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)activeContextCount;
- (void)activeSubscriptionsDidChange;
- (void)carrierSettingsDidChange;
- (bool)contactIsTTYContact:(id)arg1;
- (id)contactPathForCall:(id)arg1;
- (bool)contactPathIsMe:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (unsigned long long)currentPreferredTransportMethodForContext:(id)arg1;
- (void)dealloc;
- (id)defaultVoiceContext;
- (id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2;
- (id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2;
- (bool)headphoneJackSupportsTTY;
- (void)headphoneStateChangedNotification:(id)arg1;
- (id)init;
- (bool)isTTYOverIMSSupportedForContext:(id)arg1;
- (bool)isTTYSupportedForContext:(id)arg1;
- (void)mediaServerDied;
- (id)myPhoneNumber;
- (id)phoneNumberForContext:(id)arg1;
- (id)phoneNumberFromUUID:(id)arg1;
- (void)registerNotifications;
- (bool)relayIsSupported;
- (id)relayNumberForContext:(id)arg1;
- (void)reloadDefaultVoiceContext;
- (void)reloadRelayPhoneNumbers;
- (void)setActiveContextCount:(unsigned long long)arg1;
- (void)setDefaultVoiceContext:(id)arg1;
- (void)setHeadphoneJackSupportsTTY:(bool)arg1;
- (void)setTTYDictionaryAvailability:(bool)arg1;
- (void)setTelephonyClient:(id)arg1;
- (void)setTelephonyUpdateQueue:(id)arg1;
- (void)simLessSubscriptionsDidChange;
- (id)subscriptionContexts;
- (void)subscriptionInfoDidChange;
- (id)telephonyClient;
- (id)telephonyUpdateQueue;
- (id)ttyMeContact;
- (void)updateHeadphoneState;

@end
