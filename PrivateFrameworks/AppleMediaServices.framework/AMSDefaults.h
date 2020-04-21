/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDefaults : NSObject

+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (double)_randomDouble;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (bool)alwaysSendCacheBuster;
+ (bool)alwaysSendGUID;
+ (id)bagURLCookies;
+ (id)deviceOfferEligibility;
+ (id)deviceOffersSerialNumber;
+ (bool)didRetrieveDeviceOffers;
+ (bool)disableHARLogging;
+ (long long)forceLoadUrlMetrics;
+ (bool)ignoreServerTrustEvaluation;
+ (bool)includeFullRequestInHARLogging;
+ (bool)includeFullResponseInHARLogging;
+ (id)mescalCertExpiration;
+ (id)metricsCanaryIdentifier;
+ (id)metricsTimingWindowStartTime;
+ (bool)migratedToNewCookieStorage;
+ (bool)perfomedDeviceOfferSetup;
+ (long long)reversePushEnabled;
+ (void)setAlwaysSendCacheBuster:(bool)arg1;
+ (void)setAlwaysSendGUID:(bool)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setDidRetrieveDeviceOffers:(bool)arg1;
+ (void)setDisableHARLogging:(bool)arg1;
+ (void)setForceLoadUrlMetrics:(long long)arg1;
+ (void)setIgnoreServerTrustEvaluation:(bool)arg1;
+ (void)setIncludeFullRequestInHARLogging:(bool)arg1;
+ (void)setIncludeFullResponseInHARLogging:(bool)arg1;
+ (void)setMescalCertExpiration:(id)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMigratedToNewCookieStorage:(bool)arg1;
+ (void)setPerfomedDeviceOfferSetup:(bool)arg1;
+ (void)setReversePushEnabled:(long long)arg1;
+ (void)setShowSandboxAccountUI:(bool)arg1;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (bool)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;
+ (bool)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3;
+ (bool)showSandboxAccountUI;
+ (bool)ss_ignoreServerTrustEvaluation;
+ (id)storefrontSuffixes;
+ (bool)useNewCookieStorage;

@end