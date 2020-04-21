/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFChargingCenterClient : NSObject <SBSRemoteAlertHandleObserver> {
    bool  _activateCalled;
    SBSRemoteAlertHandle * _currentRemoteHandle;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _forcePill;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    SFWirelessChargingMonitor * _monitor;
    NSDate * _mostRecentDeactivationDate;
    NSString * _mostRecentSuccessfullActivationReason;
    id /* block */  _requestHandler;
    int  _triggerEngagementToken;
    bool  _triggerUIForInBandComms;
    SFChargingUICoordinator * _uiCoordinator;
    id /* block */  _visualInformationRequestHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) SBSRemoteAlertHandle *currentRemoteHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFWirelessChargingMonitor *monitor;
@property (nonatomic, retain) NSDate *mostRecentDeactivationDate;
@property (nonatomic, retain) NSString *mostRecentSuccessfullActivationReason;
@property (nonatomic, readonly) long long numberOfDevicesCharging;
@property (nonatomic, copy) id /* block */ requestHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFChargingUICoordinator *uiCoordinator;
@property (nonatomic, copy) id /* block */ visualInformationRequestHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)notificationFeedbackConfigurationWithSound:(bool)arg1 andHaptic:(bool)arg2 forFeedbackType:(long long)arg3 completion:(id /* block */)arg4;
+ (void)playShortEngagementWithSound:(bool)arg1 haptic:(bool)arg2;

- (void).cxx_destruct;
- (void)activate;
- (void)checkDefaults;
- (void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(id /* block */)arg2;
- (void)createWorkQueue;
- (id)currentRemoteHandle;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)listenToNotifications;
- (id)monitor;
- (id)mostRecentDeactivationDate;
- (id)mostRecentSuccessfullActivationReason;
- (long long)numberOfDevicesCharging;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onqueue_activate;
- (id)onqueue_dataRepresentationForInformationProvider:(id)arg1;
- (void)onqueue_invalidate;
- (void)onqueue_presentationRequestContextsForReason:(id)arg1 withHandler:(id /* block */)arg2;
- (void)onqueue_sendPresentationRequestForChargingDevice:(id)arg1 removed:(bool)arg2;
- (void)onqueue_updateConfigurationContext:(id)arg1 withInformationProvider:(id)arg2;
- (void)onqueue_updateConfigurationContext:(id)arg1 withKeyChargingDevice:(id)arg2;
- (void)onqueue_updateConfigurationContextWithPowerSourcesData:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id /* block */)requestHandler;
- (void)setCurrentRemoteHandle:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setMostRecentDeactivationDate:(id)arg1;
- (void)setMostRecentSuccessfullActivationReason:(id)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)setUiCoordinator:(id)arg1;
- (void)setUpMonitor;
- (void)setVisualInformationRequestHandler:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uiCoordinator;
- (void)updateErrorNotificationsForChargingDevice:(id)arg1 removed:(bool)arg2;
- (id /* block */)visualInformationRequestHandler;
- (id)workQueue;

@end
