/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardLayout : UIView <_UIKBRTRecognizerDelegate, _UIKBRTTouchDriftingDelegate, _UIScreenEdgePanRecognizerDelegate, _UIViewRepresentingKeyboardLayout> {
    NSUUID * _activeTouchUUID;
    UIKBCadenceMonitor * _cadenceMonitor;
    unsigned long long  _cursorLocation;
    id /* block */  _deferredTaskForActiveTouch;
    id /* block */  _deferredTouchDownTask;
    id /* block */  _deferredTouchMovedTask;
    NSMutableDictionary * _deferredTouchTaskLists;
    NSObject<OS_dispatch_queue> * _deferredTouchTaskListsQueue;
    bool  _disableInteraction;
    _UIKBRTFingerDetection * _fingerDetection;
    _UIKBRTRecognizer * _handRestRecognizer;
    bool  _hasPreferredHeight;
    UITextInputTraits * _inputTraits;
    bool  _isExecutingDeferredTouchTasks;
    bool  _listeningForDidChange;
    bool  _listeningForWillChange;
    double  _preferredHeight;
    _UIScreenEdgePanRecognizer * _screenEdgePanRecognizer;
    UIKBScreenTraits * _screenTraits;
    NSUUID * _shiftKeyTouchUUID;
    UIKeyboardTaskQueue * _taskQueue;
    UIKBTextEditingTraits * _textEditingTraits;
    double  _timestampOfLastTouchesEnded;
    _UIKBRTTouchDrifting * _touchDrifting;
    NSMutableSet * _touchIgnoredUUIDSet;
    _UIKBRTTouchVelocities * _touchVelocities;
    NSMutableArray * _uncommittedTouchUUIDs;
    bool  hideKeysUnderIndicator;
    double  lastTouchUpTime;
}

@property (nonatomic, retain) NSUUID *activeTouchUUID;
@property (nonatomic, retain) UIKBCadenceMonitor *cadenceMonitor;
@property (nonatomic) unsigned long long cursorLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferredTaskForActiveTouch;
@property (nonatomic, copy) id /* block */ deferredTouchDownTask;
@property (nonatomic, copy) id /* block */ deferredTouchMovedTask;
@property (nonatomic, retain) NSMutableDictionary *deferredTouchTaskLists;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *deferredTouchTaskListsQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableInteraction;
@property (nonatomic, retain) _UIKBRTFingerDetection *fingerDetection;
@property (nonatomic, retain) _UIKBRTRecognizer *handRestRecognizer;
@property (nonatomic, readonly) bool hasPreferredHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideKeysUnderIndicator;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic) bool isExecutingDeferredTouchTasks;
@property (nonatomic) double lastTouchUpTime;
@property (nonatomic, retain) NSString *layoutTag;
@property (nonatomic) bool listeningForDidChange;
@property (nonatomic) bool listeningForWillChange;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic) double preferredHeight;
@property (nonatomic, retain) _UIScreenEdgePanRecognizer *screenEdgePanRecognizer;
@property (nonatomic, retain) NSUUID *shiftKeyTouchUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;
@property (nonatomic, retain) _UIKBRTTouchDrifting *touchDrifting;
@property (nonatomic, retain) NSMutableSet *touchIgnoredUUIDSet;
@property (nonatomic, retain) _UIKBRTTouchVelocities *touchVelocities;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_showSmallDisplayKeyplane;
+ (Class)_subclassForScreenTraits:(id)arg1;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;

- (void)_addTouchToScreenEdgePanRecognizer:(id)arg1;
- (bool)_canAddTouchesToScreenGestureRecognizer:(id)arg1;
- (void)_clearDeferredTouchTasks;
- (void)_enumerateDeferredTouchUUIDs:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_executeDeferredTouchTasks;
- (bool)_handRestRecognizerCancelShouldBeEnd;
- (bool)_hasRelatedTouchesForTouchState:(id)arg1;
- (void)_ignoreTouchState:(id)arg1;
- (id)_keyboardLayoutView;
- (id)_keyboardLongPressInteractionRegions;
- (void)_removeTouchesFromProcessing:(id)arg1;
- (void)_resetFingerDetectionFromLayout;
- (void)_setRequiresExclusiveTouch:(bool)arg1;
- (bool)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)arg1 phase:(long long)arg2 withTouchState:(id)arg3 task:(id /* block */)arg4;
- (void)_touchEndedProcessingForTouches:(id)arg1;
- (unsigned long long)_uikbrtTouchDrifting:(id)arg1 fingerIDFortouchIdentifier:(id)arg2;
- (struct CGPoint { double x1; double x2; })_uikbrtTouchDrifting:(id)arg1 touchCenterForFingerID:(unsigned long long)arg2;
- (id)_uikbrtTouchDrifting:(id)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2;
- (void)_uikbrtTouchDriftingStateChanged:(id)arg1;
- (void)_updateTouchState:(id)arg1 errorVector:(struct CGPoint { double x1; double x2; })arg2 rowOffsetFromHomeRow:(long long)arg3;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)acceptRecentInputIfNecessary;
- (id)activationIndicatorView;
- (id)activeTouchUUID;
- (void)addWipeRecognizer;
- (void)assertSavedLocation:(struct CGPoint { double x1; double x2; })arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(bool)arg4;
- (id)baseKeyForString:(id)arg1;
- (double)biasedKeyboardWidthRatio;
- (id)cadenceMonitor;
- (bool)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2;
- (bool)canHandleEvent:(id)arg1;
- (bool)canMultitap;
- (bool)canProduceString:(id)arg1;
- (void)cancelTouchesForTwoFingerTapGesture:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)clearShiftIfNecessaryForEndedTouchState:(id)arg1;
- (void)clearTransientState;
- (void)clearUnusedObjects:(bool)arg1;
- (void)commitTouchUUIDs:(id)arg1;
- (void)commitTouches:(id)arg1 executionContext:(id)arg2;
- (long long)currentHandBias;
- (id)currentKeyplane;
- (unsigned long long)cursorLocation;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(bool)arg1 clearingDimming:(bool)arg2;
- (id /* block */)deferredTaskForActiveTouch;
- (id /* block */)deferredTouchDownTask;
- (id /* block */)deferredTouchMovedTask;
- (id)deferredTouchTaskLists;
- (id)deferredTouchTaskListsQueue;
- (bool)diacriticForwardCompose;
- (void)didClearInput;
- (void)didCommitTouchState:(id)arg1;
- (void)didEndIndirectSelectionGesture;
- (void)didMoveToWindow;
- (bool)disableInteraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dragGestureRectInView:(id)arg1;
- (void)fadeWithInvocation:(id)arg1;
- (id)fingerDetection;
- (unsigned long long)fingerIDForTouchUUID:(id)arg1;
- (double)flickDistance;
- (void)forceUpdatesForCommittedTouch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (struct CGPoint { double x1; double x2; })getCenterForKeyUnderLeftIndexFinger;
- (struct CGPoint { double x1; double x2; })getCenterForKeyUnderRightIndexFinger;
- (unsigned char)getHandRestRecognizerState;
- (id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1;
- (bool)globeKeyDisplaysAsEmojiKey;
- (id)handRestRecognizer;
- (void)handRestRecognizerNotifyRestForBegin:(bool)arg1 location:(struct CGPoint { double x1; double x2; })arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6;
- (bool)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5;
- (id /* block */)handRestRecognizerSilenceNextTouchDown;
- (struct CGSize { double x1; double x2; })handRestRecognizerStandardKeyPixelSize;
- (SEL)handlerForNotification:(id)arg1;
- (bool)hasAccentKey;
- (bool)hasCandidateKeys;
- (bool)hasPreferredHeight;
- (bool)hideKeysUnderIndicator;
- (double)hitBuffer;
- (long long)idiom;
- (bool)ignoresShiftState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internationalKeyDisplayStringOnEmojiKeyboard;
- (bool)isAlphabeticPlane;
- (bool)isEmojiKeyplane;
- (bool)isExecutingDeferredTouchTasks;
- (bool)isReachableDevice;
- (bool)isShiftKeyBeingHeld;
- (bool)isShiftKeyPlaneChooser;
- (bool)keyplaneContainsDismissKey;
- (bool)keyplaneContainsEmojiKey;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (double)lastTouchUpTime;
- (id)layoutTag;
- (struct CGPoint { double x1; double x2; })leftVirtualDriftOffset;
- (bool)listeningForDidChange;
- (bool)listeningForWillChange;
- (void)longPressAction;
- (long long)orientation;
- (bool)performReturnAction;
- (bool)performSpaceAction;
- (double)preferredHeight;
- (bool)queryShouldNeverIgnoreTouchStateWithIdentifier:(id)arg1 touchState:(id)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 forRestingState:(unsigned long long)arg4;
- (void)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 forBeginState:(unsigned long long)arg4 whenStateReady:(id /* block */)arg5;
- (void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 whenReady:(id /* block */)arg5;
- (void)recognizer:(id)arg1 continueTrackingIgnoredTouchWithId:(id)arg2 currentPoint:(struct CGPoint { double x1; double x2; })arg3 whenReady:(id /* block */)arg4;
- (void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 whenReady:(id /* block */)arg5;
- (void)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 currentPoint:(struct CGPoint { double x1; double x2; })arg5 whenStateReady:(id /* block */)arg6;
- (void)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 currentPoint:(struct CGPoint { double x1; double x2; })arg5 forContinueState:(unsigned long long)arg6 whenStateReady:(id /* block */)arg7;
- (void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 currentPoint:(struct CGPoint { double x1; double x2; })arg5 whenReady:(id /* block */)arg6;
- (void)recognizerBlockUntilTaskQueueReadyForceUsingDeferredTask:(bool)arg1;
- (void)reloadKeyboardGestureRecognition;
- (void)resetHRRLayoutState;
- (void)resetTouchProcessingForKeyboardChange;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })rightVirtualDriftOffset;
- (id)screenEdgePanRecognizer;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveTouchUUID:(id)arg1;
- (void)setAutoshift:(bool)arg1;
- (void)setCadenceMonitor:(id)arg1;
- (void)setCursorLocation:(unsigned long long)arg1;
- (void)setDeferredTaskForActiveTouch:(id /* block */)arg1;
- (void)setDeferredTouchDownTask:(id /* block */)arg1;
- (void)setDeferredTouchMovedTask:(id /* block */)arg1;
- (void)setDeferredTouchTaskLists:(id)arg1;
- (void)setDeferredTouchTaskListsQueue:(id)arg1;
- (void)setDisableInteraction:(bool)arg1;
- (void)setDisableTouchInput:(bool)arg1;
- (void)setFingerDetection:(id)arg1;
- (void)setHandRestRecognizer:(id)arg1;
- (void)setHideKeysUnderIndicator:(bool)arg1;
- (void)setIsExecutingDeferredTouchTasks:(bool)arg1;
- (void)setKeyboardBias:(long long)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLastTouchUpTime:(double)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setListeningForDidChange:(bool)arg1;
- (void)setListeningForWillChange:(bool)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setNeedsVirtualDriftUpdate;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setReturnKeyEnabled:(bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setScreenEdgePanRecognizer:(id)arg1;
- (void)setShift:(bool)arg1;
- (void)setShiftKeyTouchUUID:(id)arg1;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setTaskQueue:(id)arg1;
- (void)setTextEditingTraits:(id)arg1;
- (void)setTouchDrifting:(id)arg1;
- (void)setTouchIgnoredUUIDSet:(id)arg1;
- (void)setTouchVelocities:(id)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (id)shiftKeyTouchUUID;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldFadeFromLayout;
- (bool)shouldFadeToLayout;
- (bool)shouldMergeAssistantBarWithKeyboardLayout;
- (bool)shouldShowIndicator;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)simulateTouch:(struct CGPoint { double x1; double x2; })arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4;
- (struct CGSize { double x1; double x2; })stretchFactor;
- (bool)supportsEmoji;
- (bool)supportsVirtualDrift;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (id)taskQueue;
- (unsigned long long)textEditingKeyMask;
- (double)timestampOfLastTouchesEnded;
- (void)touchCancelled:(id)arg1;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchCancelled:(id)arg1 forResting:(bool)arg2 executionContext:(id)arg3;
- (id /* block */)touchCancelledTaskForTouchState:(id)arg1 forResting:(bool)arg2;
- (void)touchChanged:(id)arg1;
- (void)touchChanged:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchChangedTaskForTouchState:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchDownTaskForTouchState:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchDraggedTaskForTouchState:(id)arg1;
- (id)touchDrifting;
- (id)touchIgnoredUUIDSet;
- (id)touchUUIDsToCommitBeforeTouchUUID:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchUpTaskForTouchState:(id)arg1;
- (id)touchVelocities;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)updateBackgroundCorners;
- (void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg1;
- (void)updateLocalizedKeys:(bool)arg1;
- (void)updateTouchProcessingForKeyboardChange;
- (void)updateTouchProcessingForKeyplaneChange;
- (void)updateUndoKeyState;
- (bool)usesAutoShift;
- (void)willBeginIndirectSelectionGesture;
- (void)willMoveToWindow:(id)arg1;
- (void)wipeGestureRecognized:(id)arg1;

@end