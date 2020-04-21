/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECConsumer : NSObject {
    _DECResult * _cachedResult;
    _Atomic unsigned long long  _category;
    NSXPCConnection * _connection;
    PETScalarEventTracker * _consumerInitTracker;
    _Atomic unsigned long long  _consumerType;
    id /* block */  _handler;
    unsigned long long  _limit;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _startedMonitoring;
    _Atomic unsigned long long  _timeout;
}

@property unsigned long long category;
@property unsigned long long consumerType;

- (void).cxx_destruct;
- (void)_setupConnection;
- (unsigned long long)category;
- (unsigned long long)consumerType;
- (void)dealloc;
- (void)decDeviceIdWithReply:(id /* block */)arg1;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 timeout:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(bool)arg2 criteria:(id)arg3 handler:(id /* block */)arg4;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(bool)arg2 criteria:(id)arg3 timeout:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(bool)arg2 handler:(id /* block */)arg3;
- (void)handleDaemonStart;
- (id)init;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)provideAppPredictionFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned long long)arg2 atxResponse:(id)arg3 engagementType:(unsigned long long)arg4 engagedBundleId:(id)arg5 bundleIdsShown:(id)arg6;
- (void)receivePrediction:(id)arg1 consumer:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)setCategory:(unsigned long long)arg1;
- (void)setConsumerType:(unsigned long long)arg1;
- (void)startMonitoringForPredictionsWithLimit:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)stopMonitoringForPredictions;

@end
