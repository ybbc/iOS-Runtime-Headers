/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    bool  _hadDeletions;
    _DKSyncHistory * _history;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _me;
    NSDate * _now;
    struct _CDPerfEvent { 
        unsigned long long CDPM_startTime; 
        unsigned long long CDPM_endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    _DKPerformSyncUpHistoryAdditionsOperation * _sibling;
    NSDate * _startDate;
    NSArray * _streamNames;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2;

- (void).cxx_destruct;
- (void)endOperation;
- (void)endPerfMetrics;
- (bool)existsAdditionsSyncHistory;
- (void)handleUpdateStorageWithStartDate:(id)arg1 endDate:(id)arg2 deletedEventIDsCount:(unsigned long long)arg3 orError:(id)arg4;
- (id)initWithParent:(id)arg1 sibling:(id)arg2 localStorage:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6 type:(id)arg7;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncUpHistoryDeletions;
- (void)performSyncUpHistoryDeletionsWithDeletionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryDeletionsWithPreviousHighWaterMark:(id)arg1;
- (void)startPerfMetrics;

@end
