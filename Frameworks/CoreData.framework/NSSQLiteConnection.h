/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteConnection : NSObject {
    NSMutableArray * _activeGenerations;
    NSSQLiteStatement * _beginStatement;
    struct __CFDictionary { } * _cachedEntityConstrainedValuesUpdateStatements;
    struct __CFDictionary { } * _cachedEntityUpdateStatements;
    NSArray * _columnsToFetch;
    NSSQLiteStatement * _commitStatement;
    struct sqlite3 { } * _db;
    NSString * _dbPath;
    NSString * _dbPathRegisteredWithBackupd;
    unsigned long long  _debugInode;
    void * _extraBuffersForRegisteredFunctions;
    struct sqlite3_stmt { } * _fetchPKStatement;
    NSSQLEntity * _finalEntity;
    NSSQLEntity * _lastEntity;
    unsigned int  _lastEntityKey;
    NSMutableSet * _mObjectIDsUpdatedByTriggers;
    NSArray * _metadataColumns;
    NSMutableDictionary * _pragmaSettings;
    NSSQLitePrefetchRequestCache * _prefetchRequestCache;
    NSObject<OS_dispatch_queue> * _queue;
    NSSQLiteStatement * _rollbackStatement;
    int  _rowsProcessedCount;
    NSSQLCore * _sqlCore;
    NSSQLiteStatement * _sqlStatement;
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _usingWAL : 1; 
        unsigned int _disallowReconnect : 1; 
        unsigned int _isWriter : 1; 
        unsigned int _didSnapshotRecovery : 1; 
        unsigned int _createdAncillaryTables : 1; 
        unsigned int _reserved : 21; 
    }  _sqliteConnectionFlags;
    struct __CFDictionary { } * _statementCachesByEntity;
    NSMutableArray * _temporaryTables;
    double  _timeOutIncrement;
    double  _timeOutOption;
    bool  _transactionIsCurrentlyReadOnly;
    bool  _transactionIsOpen;
    struct sqlite3_stmt { } * _updatePKStatement;
    bool  _useSyntaxColoredLogging;
    long long  _vacuumTracker;
    struct __CFDictionary { } * _vmCachedStatements;
    struct sqlite3_stmt { } * _vmstatement;
    NSURL * _workingURL;
}

@property (nonatomic) bool isWriter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
+ (const char *)_databaseOpenURLStringForURL:(id)arg1;
+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (void)_setDebugFlags:(int)arg1;
+ (void)initialize;
+ (int)openAtPath:(const char *)arg1 withKey:(id)arg2 handle:(struct sqlite3 {}**)arg3 flags:(int)arg4 module:(const char *)arg5 checkpointOnClose:(bool)arg6;
+ (int)readMagicWordFromPath:(const char *)arg1 options:(id)arg2;

- (void)_adoptQueryGenerationWithSnapshot:(id)arg1;
- (void)_bindVariablesForConstrainedValuesWithRow:(id)arg1;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector { }*)arg3;
- (void**)_buffersForRegisteredFunctions;
- (id)_checkActiveGenerationsForIdentfier:(id)arg1;
- (void)_clearBindVariablesForConstrainedValuesUpdateStatement:(id)arg1;
- (void)_clearBindVariablesForInsertedRow;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)_clearCachedStatements;
- (void)_clearOtherStatements;
- (void)_clearSaveGeneratedCachedStatements;
- (void)_clearTransactionCaches;
- (id)_compressedDataWithModel:(id)arg1;
- (void)_configureAutoVacuum;
- (void)_configureIntegrityCheck;
- (void)_configurePageSize;
- (void)_configurePragmaOptions:(int)arg1 createdSchema:(bool)arg2;
- (void)_configureSynchronousMode;
- (long long)_countOfRowsInTable:(id)arg1;
- (unsigned long long)_countOfVMCachedStatements;
- (id)_currentQueryGenerationSnapshot:(id*)arg1;
- (id)_decompressedModelWithData:(id)arg1;
- (void)_dropKnownHistoryTrackingTables;
- (void)_dropOldCloudKitTables;
- (void)_dropOldHistoryTrackingTables;
- (void)_dropOldHistoryTrackingTablesV0;
- (void)_dropOldHistoryTrackingTablesV1;
- (void)_dropTableForCloudKitMetadataEntity:(id)arg1;
- (void)_endFetch;
- (void)_ensureDatabaseOpen;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoStatementPrepared;
- (void)_ensureNoTransactionOpen;
- (void)_ensureWalFileExists;
- (void)_executeSQLString:(id)arg1;
- (long long)_fetchMaxPrimaryKeyForEntity:(id)arg1;
- (void)_finalizeStatement;
- (void)_forceDisconnectOnError;
- (void)_freeQueryGenerationSnapshot:(id)arg1 pointerResponsibility:(unsigned long long)arg2;
- (long long)_getCurrentAutoVacuumValue;
- (bool)_hasOldHistoryTrackingTables;
- (bool)_hasOldHistoryTrackingTablesV0;
- (bool)_hasOldHistoryTrackingTablesV1;
- (bool)_hasPersistentHistoryTables;
- (bool)_hasTableWithName:(id)arg1;
- (bool)_hasTableWithName:(id)arg1 isTemp:(bool)arg2;
- (bool)_hasTempTableWithName:(id)arg1;
- (long long)_insertTransactionForRequestContext:(id)arg1 andStrings:(id)arg2;
- (id)_insertTransactionStringsForRequestContext:(id)arg1;
- (bool)_isQueryGenerationTrackingConnection;
- (id)_lastInsertRowID;
- (id)_newValueForColumn:(id)arg1 atIndex:(unsigned int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)_performPostSaveTasks:(bool)arg1 andForceFullVacuum:(bool)arg2;
- (void)_registerExtraFunctions;
- (int)_registerNewQueryGenerationSnapshot:(id)arg1 pointerResponsibility:(unsigned long long)arg2;
- (void)_restoreBusyTimeOutSettings;
- (int)_rowsChangedByLastExecute;
- (void)_setupVacuumIfNecessary;
- (bool)_tableHasRows:(id)arg1;
- (bool)_useContextObjects;
- (struct sqlite3_stmt { }*)_vmstatement;
- (id)adapter;
- (void)addPeerRange:(id)arg1;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (bool)addTombstoneColumnsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)addTransactionStringColumnsToTransactionTable;
- (void)addVMCachedStatement:(id)arg1;
- (void)adoptQueryGenerationWithIdentifier:(id)arg1;
- (id)allPeerRanges;
- (void)beginReadTransaction;
- (void)beginTransaction;
- (void)bindTempTableForBindIntarray:(id)arg1;
- (void)bindTempTablesForStatementIfNecessary:(id)arg1;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (void)cacheUpdateConstrainedValuesStatement:(id)arg1 forEntity:(id)arg2;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector { }*)arg3;
- (id)cachedUpdateConstrainedValuesStatmentForEntity:(id)arg1;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector { }*)arg2;
- (bool)canConnect;
- (void)clearObjectIDsUpdatedByTriggers;
- (void)clearPrefetchRequestCache;
- (id)columnsToFetch;
- (void)commitTransaction;
- (void)configureUbiquityMetadataTable;
- (void)connect;
- (id)connectionManager;
- (bool)createAncillaryModelTables;
- (void)createCachedModelTable;
- (void)createHistoryTrackingTables;
- (void)createIndexesForEntity:(id)arg1;
- (void)createManyToManyTablesForEntity:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (void)createMetadata;
- (void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(bool)arg2;
- (void)createSchema;
- (id)createSetOfObjectIDsUpdatedByTriggers;
- (void)createTableForEntity:(id)arg1;
- (void)createTablesForEntities:(id)arg1;
- (void)createTriggersForEntities:(id)arg1;
- (bool)createdAncillaryTables;
- (id)currentQueryGenerationIdentifier;
- (bool)databaseIsEmpty;
- (void)dealloc;
- (void)deleteCloudKitMetadataEntity:(id)arg1 withPrimaryKeys:(id)arg2;
- (bool)deleteRow:(id)arg1 forRequestContext:(id)arg2;
- (void)didCreateSchema;
- (void)disconnect;
- (void)dropHistoryBeforeTransactionID:(id)arg1;
- (void)dropHistoryTrackingTables;
- (void)dropUbiquityTables;
- (void)endFetchAndRecycleStatement:(bool)arg1;
- (void)execute;
- (id)executeAttributeUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2;
- (void)executeCorrelationChangesForValue1:(unsigned long long)arg1 value2:(unsigned long long)arg2 value3:(unsigned long long)arg3 value4:(unsigned long long)arg4;
- (id)executeMulticolumnUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2;
- (id)fetchCachedModel;
- (id)fetchCreationSQLForType:(id)arg1;
- (id)fetchIndexCreationSQL;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (id)fetchMetadata;
- (int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (id)fetchUbiquityKnowledgeVector;
- (void)forceTransactionClosed;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)gatherUpdatedObjectIDs;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (void)handleCorruptedDB:(id)arg1;
- (id)hasAncillaryEntitiesInHistory;
- (bool)hasCachedModelTable;
- (bool)hasChangeTrackingTables;
- (bool)hasCloudKitTables;
- (bool)hasHistoryRows;
- (bool)hasHistoryTransactionWithNumber:(id)arg1;
- (bool)hasMetadataTable;
- (bool)hasMirroredRelationshipTable;
- (bool)hasOpenTransaction;
- (bool)hasPrimaryKeyTable;
- (bool)hasTransactionStringColumnsInTransactionTable;
- (id)initAsQueryGenerationTrackingConnectionForSQLCore:(id)arg1;
- (id)initForSQLCore:(id)arg1;
- (void)insertAncillaryModelObject:(id)arg1 withEntity:(id)arg2;
- (void)insertBatchDeleteChangesForTransactionID:(long long)arg1;
- (void)insertChanges:(id)arg1 type:(long long)arg2 transactionID:(long long)arg3 context:(id)arg4;
- (long long)insertImportOperation:(id)arg1;
- (void)insertImportPendingRelationship:(id)arg1 withOperationPrimaryKey:(long long)arg2;
- (void)insertRow:(id)arg1;
- (void)insertUpdates:(id)arg1 transactionID:(long long)arg2 updatedAttributes:(id)arg3;
- (bool)isFetchInProgress;
- (bool)isLocalFS;
- (bool)isOpen;
- (bool)isWriter;
- (int)logQueryPlanForStatement:(id)arg1;
- (id)metadataColumns;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (id)newFetchedArray;
- (int)numberOfTombstones;
- (void)performAndWait:(id /* block */)arg1;
- (bool)performIntegrityCheck;
- (id)prefetchRequestCache;
- (void)prepareAndExecuteSQLStatement:(id)arg1;
- (void)prepareInsertStatementForAncillaryEntity:(id)arg1;
- (void)prepareSQLStatement:(id)arg1;
- (void)processDeleteRequest:(id)arg1;
- (void)processExternalDataReferenceFilesDeletedByRequest:(id)arg1;
- (void)processRelationshipUpdatesForRequestContext:(id)arg1;
- (void)processSaveRequest:(id)arg1;
- (void)processUpdateRequest:(id)arg1 withOIDs:(id)arg2 forAttributes:(id)arg3;
- (id)queue;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (void)recreateIndices;
- (void)registerCurrentQueryGenerationWithStore:(id)arg1;
- (void)registerCurrentQueryGenerationWithStore:(id)arg1 retries:(unsigned long long)arg2;
- (bool)registerMigrationUpdateFunctionWithMigrator:(id)arg1;
- (void)releaseSQLStatement;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)replaceUbiquityKnowledgeVector:(id)arg1;
- (void)resetSQLStatement;
- (void)rollbackTransaction;
- (int)rowsChangedByLastStatement;
- (void)saveCachedModel:(id)arg1;
- (void)saveMetadata:(id)arg1;
- (bool)selectCountWithStatement:(id)arg1;
- (void)selectRowsWithStatement:(id)arg1 cached:(bool)arg2;
- (void)setColumnsToFetch:(id)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;
- (void)setIsWriter:(bool)arg1;
- (void)setSecureDeleteMode:(bool)arg1;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)sqlStatement;
- (id)statementCacheForEntity:(id)arg1;
- (void)transactionDidBegin;
- (void)transactionDidCommit;
- (void)transactionDidRollback;
- (id)transactionStringForName:(id)arg1;
- (void)triggerUpdatedRowInTable:(const char *)arg1 withEntityID:(long long)arg2 primaryKey:(long long)arg3 columnName:(const char *)arg4 newValue:(long long)arg5;
- (id)ubiquityTableKeysAndValues;
- (id)ubiquityTableValueForKey:(id)arg1;
- (void)uncacheVMStatement:(id)arg1;
- (void)updateAncillaryModelObject:(id)arg1 withEntity:(id)arg2;
- (void)updateConstrainedValuesForRow:(id)arg1;
- (void)updateRow:(id)arg1 forRequestContext:(id)arg2;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)willCreateSchema;
- (void)writeCorrelationChangesFromTracker:(id)arg1;
- (void)writeCorrelationDeletesFromTracker:(id)arg1;
- (void)writeCorrelationInsertsFromTracker:(id)arg1;
- (void)writeCorrelationMasterReordersFromTracker:(id)arg1;
- (void)writeCorrelationReordersFromTracker:(id)arg1;

@end
