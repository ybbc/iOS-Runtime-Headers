/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKStagingAreaViewController : UIViewController <AVCEffectsDelegate, CFXCameraViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeInCallControlsViewControllerDelegate> {
    void audioVisualizationView;
    void avcEffects;
    void call;
    void constraintController;
    void controlsDragController;
    void controlsViewController;
    void conversationController;
    void delegate;
    void deviceOrientation;
    void effectsBrowserViewController;
    void effectsCaptureInfo;
    void effectsEnabled;
    void effectsLayoutController;
    void effectsViewController;
    void hasJoined;
    void isWaitingToConnect;
    void localPreviewBackView;
    void localPreviewFrontView;
    void numberFormatter;
    void participantLabel;
    void scheduledUpdateTimer;
    void secondaryParticipantLabel;
    void stagingAreaDelegate;
    void videoDeviceController;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic) <CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) bool effectsEnabled;
@property (nonatomic) bool hasJoined;
@property (nonatomic) <CNKStagingAreaViewControllerDelegate> *stagingAreaDelegate;

- (id /* block */).cxx_destruct;
- (id)call;
- (void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2;
- (void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1;
- (id)delegate;
- (long long)deviceOrientation;
- (void)didCaptureVideoFrame:(id)arg1;
- (void)didTapJoinButton;
- (void)didTapLeaveButton;
- (void)didTapSwapLocalParticipantCamera;
- (void)didTapToggleVideoMute;
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (bool)effectsEnabled;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;
- (bool)hasJoined;
- (void)inCallControlsDragController:(id)arg1 didEndDragAt:(long long)arg2;
- (void)inCallControlsDragController:(id)arg1 didStartDragTo:(long long)arg2;
- (void)inCallControlsDragController:(id)arg1 willStartDragFrom:(long long)arg2;
- (long long)inCallControlsDragControllerShortestState:(id)arg1;
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 hasJoined:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)serverDidTimeout:(id)arg1;
- (void)setCall:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setHasJoined:(bool)arg1;
- (void)setStagingAreaDelegate:(id)arg1;
- (bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (id)stagingAreaDelegate;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
