/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSMutableSet;



@interface NSHTTPAuthenticator : NSObject 
{
    NSMutableDictionary *URLToRealm;
    NSMutableSet *hostsWithRealms;
    NSMutableDictionary *protectionSpaceToHTTPAuthentication;
    NSMutableDictionary *challengeToChallengeState;
    NSMutableDictionary *httpRequestToChallengeState;
    id dataLock;
    BOOL usingCredentiallessAuthentication;
    BOOL pad1;
    BOOL pad2;
    BOOL pad3;
}

+ (id)sharedHTTPAuthenticator;

- (id)init;
- (void)dealloc;
- (void)addCredentialsToRetryHTTPRequest:(struct __CFHTTPMessage { }*)arg1 proxyURL:(id)arg2 afterFailureResponse:(struct __CFHTTPMessage { }*)arg3 nsFailureResponse:(id)arg4 failureCount:(NSInteger)arg5 protocol:(id)arg6 withCallback:(id)arg7 context:(id)arg8;
- (void)cancelAddCredentialsToRetryHTTPRequest:(struct __CFHTTPMessage { }*)arg1;
- (BOOL)haveCredentialForURL:(id)arg1 proxyURL:(id)arg2;
- (void)addCredentialsToInitialHTTPRequest:(struct __CFHTTPMessage { }*)arg1 proxyURL:(id)arg2 protocol:(id)arg3;
- (BOOL)checkForAuthenticationFailureInHTTPResponse:(struct __CFHTTPMessage { }*)arg1 withURL:(id)arg2 proxyURL:(id)arg3;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)_protectionSpaceForURL:(id)arg1 realm:(id)arg2;
- (id)_usernameForRealm:(id)arg1 URL:(id)arg2;
- (id)_proxyProtectionSpaceForProxyURL:(id)arg1;
- (id)_proxyUsernameForProxyURL:(id)arg1;
- (BOOL)_applyHTTPProxyCredentials:(struct __CFHTTPMessage { }*)arg1 forProxyURL:(id)arg2;
- (id)_realmForURL:(id)arg1;
- (BOOL)_applyHTTPCredentials:(struct __CFHTTPMessage { }*)arg1;
- (void)_tryChallenge:(id)arg1;
- (void)_askDelegateWithURL:(id)arg1 realm:(id)arg2 forRequest:(struct __CFHTTPMessage { }*)arg3 failureCount:(NSInteger)arg4 failureResponse:(id)arg5 protocol:(id)arg6 withCallback:(id)arg7 context:(id)arg8;
- (void)_askDelegateWithURL:(id)arg1 proxy:(id)arg2 forRequest:(struct __CFHTTPMessage { }*)arg3 proxyURL:(id)arg4 failureCount:(NSInteger)arg5 failureResponse:(id)arg6 protocol:(id)arg7 withCallback:(id)arg8 context:(id)arg9;
- (void)_setDefaultUserInfoFromURL:(id)arg1;
- (void)_removePasswordForRealm:(id)arg1 URL:(id)arg2;
- (void)_setRealm:(id)arg1 forURL:(id)arg2;
- (void)_removeProxyPasswordForProxyURL:(id)arg1;
- (id)_internalInit;

@end