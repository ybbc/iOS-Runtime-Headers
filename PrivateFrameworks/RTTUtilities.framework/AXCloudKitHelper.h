/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
 */

@interface AXCloudKitHelper : NSObject <APSConnectionDelegate> {
    APSConnection * _apsConnection;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    NSObject<OS_dispatch_queue> * _cloudkitQueue;
    CKContainer * _container;
    NSString * _containerIdentifier;
    CKDatabase * _database;
    NSURL * _largeBlobDirectoryURL;
    NSError * _lastInitializationError;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSPersistentStore * _observedStore;
    CKRecordZone * _zone;
    CKRecordZoneSubscription * _zoneSubscription;
}

@property (nonatomic, readonly) APSConnection *apsConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKRecordZone *zone;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;

- (void).cxx_destruct;
- (void)_beginWatchingForChanges;
- (bool)_checkAccountStatus:(id*)arg1;
- (bool)_createSchemaIfNecessary:(id*)arg1;
- (bool)_createZoneIfNecessary:(id*)arg1;
- (bool)_initializeAssetStorageURLError:(id*)arg1;
- (void)_initializeCloudkitForObservedStore;
- (void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(id /* block */)arg2;
- (void)_setApsConnection:(id)arg1;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (bool)_setupPushConnection:(id*)arg1;
- (bool)_setupZoneSubscriptionIfNecessary:(id*)arg1;
- (id)_writeLargeData:(id)arg1 forUID:(id)arg2 error:(id*)arg3;
- (id)apsConnection;
- (id)cloudKitQueueSemaphore;
- (id)cloudkitQueue;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (id)containerIdentifier;
- (id)createCKRecordFromObject:(id)arg1 withExternalAssetFile:(bool*)arg2;
- (id)database;
- (void)dealloc;
- (void)fetchChangesAndUpdateObservedStore;
- (id)init;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)largeBlobDirectoryURL;
- (id)lastInitializationError;
- (void)logMessage:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (id)observedCoordinator;
- (id)observedStore;
- (void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4;
- (bool)pruneExternalAssetFileAtURL:(id)arg1 error:(id*)arg2;
- (bool)shouldExportManagedObject:(id)arg1;
- (id)zone;
- (id)zoneSubscription;

@end