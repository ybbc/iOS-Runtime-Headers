/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMobileCountryCodeManager : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueryQueue;
    CoreTelephonyClient * _coreTelephonyClient;
    struct __CTServerConnection { } * _coreTelephonyServerConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundQueryQueue;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic) struct __CTServerConnection { }*coreTelephonyServerConnection;

- (void).cxx_destruct;
- (id)backgroundQueryQueue;
- (id)coreTelephonyClient;
- (struct __CTServerConnection { }*)coreTelephonyServerConnection;
- (void)currentMobileCountryCodeFromCellularWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setBackgroundQueryQueue:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setCoreTelephonyServerConnection:(struct __CTServerConnection { }*)arg1;

@end