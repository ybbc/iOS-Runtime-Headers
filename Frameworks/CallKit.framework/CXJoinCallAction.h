/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXJoinCallAction : CXCallAction {
    CXHandle * _callerID;
    NSDate * _dateStarted;
    NSUUID * _groupUUID;
    NSString * _messagesGroupName;
    NSUUID * _messagesGroupUUID;
    NSSet * _remoteMembers;
    bool  _shouldSuppressInCallUI;
    bool  _upgrade;
    bool  _uplinkMuted;
    bool  _videoEnabled;
    bool  _wantsStagingArea;
}

@property (nonatomic, copy) CXHandle *callerID;
@property (nonatomic, copy) NSDate *dateStarted;
@property (nonatomic, copy) NSUUID *groupUUID;
@property (nonatomic, copy) NSString *messagesGroupName;
@property (nonatomic, copy) NSUUID *messagesGroupUUID;
@property (nonatomic, copy) NSSet *remoteMembers;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (getter=isUpgrade, nonatomic) bool upgrade;
@property (getter=isUplinkMuted, nonatomic) bool uplinkMuted;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (nonatomic) bool wantsStagingArea;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callerID;
- (id)customDescription;
- (id)dateStarted;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithDateStarted:(id)arg1;
- (id)groupUUID;
- (id)initWithCallUUID:(id)arg1 groupUUID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isUpgrade;
- (bool)isUplinkMuted;
- (bool)isVideoEnabled;
- (id)messagesGroupName;
- (id)messagesGroupUUID;
- (id)remoteMembers;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCallerID:(id)arg1;
- (void)setDateStarted:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setMessagesGroupName:(id)arg1;
- (void)setMessagesGroupUUID:(id)arg1;
- (void)setRemoteMembers:(id)arg1;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setUpgrade:(bool)arg1;
- (void)setUplinkMuted:(bool)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setWantsStagingArea:(bool)arg1;
- (bool)shouldSuppressInCallUI;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (bool)wantsStagingArea;

@end
