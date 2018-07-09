/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFChargingCenterClient : NSObject {
    bool  _activateCalled;
    SBUISound * _chimeSound;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _forcePill;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    SFWirelessChargingMonitor * _monitor;
    id /* block */  _requestHandler;
    int  _triggerEngagementToken;
    SFChargingUICoordinator * _uiCoordinator;
    id /* block */  _visualInformationRequestHandler;
}

@property (nonatomic, retain) SBUISound *chimeSound;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFWirelessChargingMonitor *monitor;
@property (nonatomic, readonly) long long numberOfDevicesCharging;
@property (nonatomic, copy) id /* block */ requestHandler;
@property (nonatomic, retain) SFChargingUICoordinator *uiCoordinator;
@property (nonatomic, copy) id /* block */ visualInformationRequestHandler;

- (void).cxx_destruct;
- (void)activate;
- (void)checkDefaults;
- (id)chimeSound;
- (void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(id /* block */)arg2;
- (id)dataRepresentationForInformationProvider:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)listenToNotifications;
- (id)monitor;
- (long long)numberOfDevicesCharging;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onqueue_activate;
- (void)onqueue_invalidate;
- (void)playChime;
- (void)presentationRequestContextsForReason:(id)arg1 withHandler:(id /* block */)arg2;
- (id /* block */)requestHandler;
- (void)sendPresentationRequestForPowerSource:(id)arg1 removed:(bool)arg2;
- (void)setChimeSound:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)setUiCoordinator:(id)arg1;
- (void)setUpMonitor;
- (void)setVisualInformationRequestHandler:(id /* block */)arg1;
- (id)uiCoordinator;
- (void)updateConfigurationContext:(id)arg1 withInformationProvider:(id)arg2;
- (void)updateConfigurationContext:(id)arg1 withKeyPowerSource:(id)arg2;
- (void)updateConfigurationContextWithPowerSourcesData:(id)arg1;
- (id /* block */)visualInformationRequestHandler;

@end