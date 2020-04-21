/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManagerInternal : NSObject {
    id /* block */  fActivityHandler;
    struct CLConnectionClient { id x1; struct CLCallbackDropManager { int (**x_2_1_1)(); struct shared_ptr<int> { int *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_2_1_2; } x2; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct CLConnectionClientNotificationContext {} *x4; } * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fMotionStateSimQueue;
    long long  fMotionStateSimResult;
    NSObject<OS_dispatch_semaphore> * fMotionStateSimSemaphore;
    bool  fMotionStateSimWaiting;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSObject<OS_dispatch_queue> * fSidebandOverrideQueue;
    long long  fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> * fSidebandOverrideSemaphore;
    bool  fSidebandOverrideWaiting;
    bool  fSubscribedToMotionState;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)overrideOscarSideband:(bool)arg1 withState:(long long)arg2;
- (void)simulateMotionState:(bool)arg1 withState:(long long)arg2;
- (void)startActivityUpdatesWithHandlerPrivate:(id /* block */)arg1;
- (void)startWatchdogCheckinsPrivate;
- (void)stopActivityUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;

@end
