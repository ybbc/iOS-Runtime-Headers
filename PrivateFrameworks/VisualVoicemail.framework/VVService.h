/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVService : NSObject {
    bool  _SMSReady;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSDictionary * _accountDictionary;
    NSError * _activationError;
    id  _carrierParameters;
    struct __CFString { } * _lastConnectionTypeUsed;
    NSRecursiveLock * _lock;
    int  _mailboxUsage;
    Class  _notificationInterpreter;
    unsigned long long  _numFailedAttemptsToSyncOverWifi;
    NSString * _password;
    NSError * _passwordError;
    NSString * _passwordMailboxName;
    int  _retryIntervalIndex;
    NSArray * _retryIntervals;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    NSString * _serviceDestinationID;
    struct { 
        unsigned int offline : 1; 
        unsigned int subscribed : 1; 
        unsigned int initialSetupRequired : 1; 
        unsigned int fakeInitialSetup : 1; 
        unsigned int launchedWithFakeInitialSetup : 1; 
        unsigned int mwiState : 1; 
        unsigned int notificationFallbackEnabled : 1; 
        unsigned int capabilitiesLoaded : 1; 
    }  _serviceFlags;
    NSString * _serviceIdentifier;
    NSMutableDictionary * _stateRequestAttemptCount;
    VMCarrierStateRequestController * _stateRequestController;
    <VMTelephonySubscription> * _subscription;
    VMTranscriptionService * _transcriptionService;
    double  _trashCompactionAge;
    unsigned int  _trashedCount;
    unsigned int  _unreadCount;
    VVVerifier * _verifier;
}

@property (getter=isSMSReady, nonatomic) bool SMSReady;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, retain) NSDictionary *accountDictionary;
@property (nonatomic) struct __CFString { }*lastConnectionTypeUsed;
@property (nonatomic) unsigned long long numFailedAttemptsToSyncOverWifi;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, copy) NSString *serviceDestinationID;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *stateRequestAttemptCount;
@property (nonatomic, readonly) VMCarrierStateRequestController *stateRequestController;
@property (nonatomic, readonly) <VMTelephonySubscription> *subscription;
@property (nonatomic, retain) VMTranscriptionService *transcriptionService;
@property (nonatomic, retain) VVVerifier *verifier;

+ (struct __CTServerConnection { }*)CTServerConnection;
+ (void)_acquireAssertionsForInsomniaState:(bool)arg1;
+ (bool)_lockedSharedServiceIsSubscribed;
+ (void)_setInsomniaStateSupressed:(bool)arg1;
+ (void)_subscriptionStateChanged;
+ (unsigned int)_voicemailPowerAssertion;
+ (id)accountDictionaryForURL:(id)arg1;
+ (void)initialize;
+ (void)obtainInsomniaAssertion;
+ (void)releaseInsomniaAssertion;
+ (id)serviceWithIdentifier:(id)arg1 subscription:(id)arg2 stateRequestController:(id)arg3;
+ (bool)sharedServiceIsSubscribed;

- (void).cxx_destruct;
- (void)_attemptDelayedSynchronize;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_callStatusChanged;
- (void)_cancelAutomatedTrashCompaction;
- (void)_cancelIndicatorAction;
- (void)_carrierBundleChanged;
- (void)_dataAvailabilityChanged;
- (void)_dataRoamingStatusChanged;
- (void)_deliverFallbackNotification;
- (void)_enterFallbackMode;
- (void)_handleIndicatorNotification:(struct __CFDictionary { }*)arg1;
- (void)_handleSMSCAvailable;
- (bool)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (void)_reactToIndicator;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_setActivationError:(id)arg1;
- (void)_setOnline:(bool)arg1 fallbackMode:(bool)arg2;
- (void)_updateOnlineStatus;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)accountDictionary;
- (id)accountParamsAtFilePath:(id)arg1;
- (id)activationError;
- (long long)attemptCountForStateRequest:(id)arg1;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelDelayedSynchronize;
- (void)cancelNotificationFallback;
- (void)cancelPasswordRequest;
- (id)carrierParameterValueForKey:(id)arg1;
- (void)clearActivationError;
- (void)clearRemoteUIDsForDetachedMessages;
- (struct __CFString { }*)connectionServiceType;
- (struct __CFString { }*)dataConnectionServiceTypeOverride;
- (bool)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(bool*)arg2;
- (void)dealloc;
- (void)displayPasswordRequestIfNecessary;
- (bool)doTrashCompaction;
- (bool)doesClientManageTrashCompaction;
- (bool)greetingAvailable;
- (bool)greetingFetchExistsProgressiveLoadInProgress:(bool*)arg1;
- (void)handleDataContextDeactivated;
- (void)handleNotification:(id)arg1 isMWI:(bool)arg2;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)handlePasswordRequestCancellation;
- (void)handleVVServiceDataAvailableNotification:(id)arg1;
- (void)handleVoicemailInfoUpdate:(id)arg1;
- (bool)headerChangesPending;
- (void)incrementAttemptCountForStateRequest:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 subscription:(id)arg2 stateRequestController:(id)arg3;
- (bool)isInSync;
- (bool)isMessageWaiting;
- (bool)isOfflineDueToRoaming;
- (bool)isOnline;
- (bool)isPasswordReady;
- (bool)isSMSReady;
- (bool)isSubscribed;
- (bool)isSyncInProgress;
- (bool)isVVMAvailableOverWiFi;
- (void)kill;
- (struct __CFString { }*)lastConnectionTypeUsed;
- (bool)lastUsedConnectionTypeWasCellular;
- (long long)mailboxGreetingType;
- (id)mailboxName;
- (bool)mailboxRequiresSetup;
- (int)mailboxUsage;
- (int)maximumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)minimumPasswordLength;
- (void)moveRecordsWithIdentifiersToInbox:(id)arg1;
- (void)moveRecordsWithIdentifiersToTrash:(id)arg1;
- (Class)notificationInterpreterClass;
- (unsigned long long)numFailedAttemptsToSyncOverWifi;
- (id)parametersFilePathForUUIDString:(id)arg1;
- (id)password;
- (bool)passwordChangeRequiresEnteringOldPassword;
- (id)passwordIgnoringSubscription:(bool)arg1;
- (void)performAtomicAccessorBlock:(id /* block */)arg1;
- (void)performSynchronousBlock:(id /* block */)arg1;
- (void)progressiveDataLengthsForRecord:(void*)arg1 expected:(unsigned int*)arg2 current:(unsigned int*)arg3;
- (id)provisionalPassword;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)removeAttemptCountForStateRequest:(id)arg1;
- (void)reportError:(id)arg1;
- (void)reportFailedToSyncOverWifi;
- (void)reportSucessfulSync;
- (void)resetCounts;
- (void)resetDelayedSynchronizationAttemptCount;
- (bool)respectsMWINotifications;
- (void)retrieveDataForRecord:(void*)arg1;
- (void)retrieveGreetingForAccountUUID:(id)arg1;
- (id)retryIntervals;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (id)serialDispatchQueue;
- (id)serviceDestinationID;
- (id)serviceIdentifier;
- (void)setAccountDictionary:(id)arg1;
- (void)setGreetingType:(long long)arg1 data:(id)arg2 duration:(unsigned long long)arg3 forAccountUUID:(id)arg4;
- (void)setLastConnectionTypeUsed:(struct __CFString { }*)arg1;
- (void)setLastUsedConnectionType:(struct __CFString { }*)arg1;
- (void)setMailboxRequiresSetup:(bool)arg1;
- (void)setMailboxUsage:(int)arg1;
- (void)setMessageWaiting:(bool)arg1;
- (void)setNumFailedAttemptsToSyncOverWifi:(unsigned long long)arg1;
- (void)setOnline:(bool)arg1;
- (void)setPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)setPassword:(id)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (void)setSMSReady:(bool)arg1;
- (void)setServiceDestinationID:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setTranscriptionService:(id)arg1;
- (void)setTrashedCount:(unsigned int)arg1;
- (void)setUnreadCount:(unsigned int)arg1;
- (void)setVerifier:(id)arg1;
- (bool)sharedSubscriptionRequiresSetup;
- (bool)shouldImmediatelyRetrySyncOverCellular;
- (bool)shouldScheduleAutoTrashOnMailboxUsageChange;
- (bool)shouldTrashCompactRecord:(void*)arg1;
- (id)stateRequestAttemptCount;
- (id)stateRequestController;
- (id)subscription;
- (bool)synchronizationPending;
- (void)synchronize:(bool)arg1;
- (bool)taskOfTypeExists:(long long)arg1;
- (id)transcriptionService;
- (double)trashCompactionAge;
- (unsigned int)trashedCount;
- (unsigned int)unreadCount;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)updateLoggingSettings;
- (id)verifier;

@end
