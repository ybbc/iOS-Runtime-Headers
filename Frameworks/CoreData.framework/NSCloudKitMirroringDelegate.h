/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegate : NSObject <NSPersistentStoreMirroringDelegate, PFCloudKitExporterDelegate> {
    _Atomic int  _accountChangeNotificationIteration;
    NSString * _ckDatabaseName;
    NSObject<OS_dispatch_queue> * _cloudKitQueue;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    CKContainer * _container;
    CKDatabase * _database;
    PFCloudKitExporterOptions * _exporterOptions;
    bool  _hadObservedStore;
    NSError * _lastInitializationError;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSSQLCore * _observedStore;
    NSCloudKitMirroringDelegateOptions * _options;
    bool  _successfullyInitialized;
    CKRecordZone * _zone;
    CKRecordZoneSubscription * _zoneSubscription;
}

@property (nonatomic, readonly) NSString *ckDatabaseName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PFCloudKitExporterOptions *exporterOptions;
@property (nonatomic, readonly) bool hadObservedStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly, copy) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) bool successfullyInitialized;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKRecordZone *zone;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;

+ (id)describeMetadataForStoreAtURL:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_beginWatchingForChanges;
- (void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(id /* block */)arg2;
- (void)_performExportWithRequest:(id)arg1;
- (void)_performFetchRecordsRequest:(id)arg1;
- (void)_performImportWithRequest:(id)arg1;
- (void)_performResetZoneRequest:(id)arg1;
- (bool)_recoverFromError:(id)arg1 withMonitor:(id)arg2;
- (bool)_recoverFromPartialError:(id)arg1 withMonitor:(id)arg2;
- (void)_requestAbortedNotInitialized:(id)arg1;
- (void)_requestEncounteredRecoverableError:(id)arg1 withResult:(id)arg2;
- (void)_requestEncounteredUnrecoverableError:(id)arg1 withResult:(id)arg2;
- (void)_setAccountNotificationBackoffInterval:(long long)arg1;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (void)_setUpCloudKitIntegration;
- (void)_setZone:(id)arg1;
- (void)checkForNewChanges;
- (void)ckAccountChanged:(id)arg1;
- (id)ckDatabaseName;
- (void)ckIdentityChanged:(id)arg1;
- (id)cloudKitQueue;
- (id)cloudKitQueueSemaphore;
- (id)container;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)database;
- (void)dealloc;
- (id)executeMirroringRequest:(id)arg1 error:(id*)arg2;
- (void)exporter:(id)arg1 willScheduleOperations:(id)arg2;
- (id)exporterOptions;
- (void)fetchChangesAndUpdateObservedStore;
- (bool)hadObservedStore;
- (void)handleErrorInResult:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (bool)isPrivateContextSave:(id)arg1;
- (id)lastInitializationError;
- (void)logMessage:(id)arg1;
- (void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (id)observedCoordinator;
- (id)observedStore;
- (id)options;
- (void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3;
- (void)postDidResetNotificationForError:(id)arg1;
- (void)postWillResetNotificationForError:(id)arg1;
- (bool)pruneExternalAssetFileAtURL:(id)arg1 error:(id*)arg2;
- (bool)recoverFromError:(id)arg1;
- (void)resetAfterError:(id)arg1;
- (void)resetAfterError:(id)arg1 andKeepContainer:(bool)arg2;
- (id)resetNotificationUserInfoForError:(id)arg1;
- (void)storesDidChange:(id)arg1;
- (bool)successfullyInitialized;
- (void)tearDown;
- (bool)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3;
- (bool)wipeAllCloudDataAndPurgeHistoryToken:(bool)arg1 error:(id*)arg2;
- (bool)wipeCachedIdentityInformationFromStore:(id)arg1 error:(id*)arg2;
- (bool)wipeCachedZoneMetadataFromStore:(id)arg1 error:(id*)arg2;
- (bool)wipeCloudMetadataFromMirroredObjects:(id*)arg1;
- (id)zone;
- (id)zoneSubscription;

@end