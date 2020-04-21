/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTOrderedIndexBasedTaskScheduler : NSObject <AVTIndexBasedTaskScheduler> {
    struct NSMutableDictionary { Class x1; } * _readyTasks;
    struct NSMutableDictionary { Class x1; } * _scheduledTasks;
    struct NSMutableArray { Class x1; } * _scheduledTasksOrder;
    NSObject<OS_dispatch_queue> * _stateLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *readyTasks;
@property (nonatomic, readonly) NSMutableDictionary *scheduledTasks;
@property (nonatomic, readonly) NSMutableArray *scheduledTasksOrder;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) Class superclass;

+ (id)indexesForReadyTasksToRunGivenScheduledTasks:(struct NSMutableDictionary { Class x1; }*)arg1 order:(struct NSMutableArray { Class x1; }*)arg2 readyTasks:(struct NSMutableDictionary { Class x1; }*)arg3 readyRowIndex:(id)arg4;
+ (id)rowBaseIndexForIndex:(id)arg1;

- (void).cxx_destruct;
- (void)cancelAllTasks;
- (void)cancelTask:(id /* block */)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)performStateWork:(id /* block */)arg1;
- (struct NSMutableDictionary { Class x1; }*)readyTasks;
- (void)scheduleTask:(id /* block */)arg1 forIndex:(unsigned long long)arg2;
- (struct NSMutableDictionary { Class x1; }*)scheduledTasks;
- (struct NSMutableArray { Class x1; }*)scheduledTasksOrder;
- (id)stateLock;
- (void)taskReady:(id /* block */)arg1 forIndex:(unsigned long long)arg2;

@end