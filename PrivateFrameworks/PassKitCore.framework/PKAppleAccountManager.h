/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppleAccountManager : NSObject {
    ACAccountStore * _accountStore;
}

@property (nonatomic, readonly) PKAppleAccountInformation *appleAccountInformation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (id)appleAccountInformation;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)arg1;

@end
