/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _aaAlternateDSID;
    NSString * _aidaAlternateDSID;
    NSString * _aidaToken;
    NSString * _appleID;
    NSString * _firstName;
    bool  _isSandboxAccount;
    NSString * _lastName;
}

@property (nonatomic, copy) NSString *aaAlternateDSID;
@property (nonatomic, copy) NSString *aidaAlternateDSID;
@property (nonatomic, copy) NSString *aidaToken;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) bool isSandboxAccount;
@property (nonatomic, copy) NSString *lastName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aaAlternateDSID;
- (bool)aidaAccountAvailable;
- (id)aidaAlternateDSID;
- (id)aidaToken;
- (id)appleID;
- (id)authorizationHeader;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (bool)isSandboxAccount;
- (id)lastName;
- (id)primaryAppleAccountHash;
- (void)setAaAlternateDSID:(id)arg1;
- (void)setAidaAlternateDSID:(id)arg1;
- (void)setAidaToken:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIsSandboxAccount:(bool)arg1;
- (void)setLastName:(id)arg1;

@end
