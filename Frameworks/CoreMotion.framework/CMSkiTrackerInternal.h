/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSkiTrackerInternal : NSObject {
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { id x1; struct CLCallbackDropManager { int (**x_2_1_1)(); struct shared_ptr<int> { int *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_2_1_2; } x2; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct CLConnectionClientNotificationContext {} *x4; } * fLocationdConnection;
    CMSkiData * fMostRecentRecord;
    double  fRunDistanceOffset;
    double  fRunElevationDescendedOffset;
    bool  fStartedUpdates;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (void)_handleUpdates:(id)arg1;
- (void)_queryUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startWatchdogCheckins;
- (void)_stopUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
