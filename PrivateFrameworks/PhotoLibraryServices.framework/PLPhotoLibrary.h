/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibrary : NSObject {
    PLGenericAlbum * _allImportedPhotosAlbum;
    struct __CFDictionary { } * _allPhotos;
    PLAssetsdClient * _assetsdClient;
    NSSet * _audioFileExtensions;
    NSString * _cachedName;
    PLManagedAlbum * _cameraRollAlbum;
    PLFetchingAlbum * _cameraSessionAlbum;
    int  _databaseMigrationKind;
    NSArray * _eventAlbums;
    NSCalendar * _exifConversionCalendar;
    NSSet * _extraVideoExtensions;
    NSArray * _faceAlbums;
    PLSimpleDCIMDirectory * _iTunesSyncedAssetsDCIMDirectory;
    NSSet * _imageFileExtensions;
    NSArray * _importAlbums;
    bool  _isTransient;
    PLGenericAlbum * _lastImportedPhotosAlbum;
    bool  _listeningForITunesSyncing;
    PLPhotoLibraryPathManager * _pathManager;
    unsigned long long  _pendingTransactions;
    PLPhotoAnalysisServiceClient * _photoAnalysisClient;
    NSArray * _placeAlbums;
    NSSet * _rawImageFileExtensions;
    PLManagedAlbumList * _rootAlbumList;
    PLManagedFolder * _rootFolder;
    PLSimpleDCIMDirectory * _simpleDCIMDirectory;
    NSMutableArray * _transactionCompletionHandlers;
    PLFetchingAlbum * _userLibraryAlbum;
    PLManagedObjectContext * managedObjectContext;
}

@property (nonatomic, readonly, copy) NSArray *albums;
@property (nonatomic, readonly, copy) NSArray *eventAlbums;
@property (nonatomic, readonly, copy) NSArray *faceAlbums;
@property (nonatomic, readonly, copy) NSObject<PLAlbumProtocol> *favoritesAlbum;
@property (nonatomic, readonly, copy) NSArray *importAlbums;
@property (nonatomic, retain) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, readonly, copy) NSArray *photoStreamAlbums;
@property (nonatomic, readonly, copy) NSArray *photoStreamAlbumsForPreferences;
@property (nonatomic, readonly, copy) NSArray *placeAlbums;
@property (nonatomic, readonly, copy) NSObject<PLAlbumProtocol> *placesAlbum;
@property (nonatomic, readonly, retain) PLManagedAlbumList *rootAlbumList;
@property (nonatomic, readonly, retain) PLManagedFolder *rootFolder;
@property (nonatomic, readonly, copy) NSArray *userAlbums;
@property (nonatomic, readonly, retain) PLFetchingAlbum *userLibraryAlbum;

+ (unsigned long long)CloudPhotoLibrarySize;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (bool)_assetsdQueueingMode;
+ (bool)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;
+ (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;
+ (id)_dataMigratorFinishedFilePath;
+ (id)_dataMigratorFinishedMarkerQueue;
+ (id)_dataProtectionIndicatorFilePath;
+ (void)_enqeueRecoveryJob:(id)arg1;
+ (void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(id /* block */)arg3;
+ (id)_getLibraryPathFromTriggerFile;
+ (void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2;
+ (bool)_isRebuildingPersons;
+ (void)_loadFileExtensionInformation;
+ (id)_operationQueueForPriority:(long long)arg1;
+ (id)_pauseDataOnPath:(id)arg1;
+ (id)_rebuildingPersonsIndicatorFilePath;
+ (void)_setIsRebuildingPersons:(bool)arg1;
+ (void)_setSqliteErrorAndExitIfNecessaryForReason:(int)arg1;
+ (id)_statusDescriptionForQueue:(id)arg1;
+ (void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (void)_writeDisableICloudPhotosMarker;
+ (void)_writeEnableICloudPhotosMarker;
+ (bool)areOpportunisticTasksDisabled;
+ (bool)canSaveVideoToCameraRoll:(id)arg1;
+ (bool)clearPauseMarkerForReason:(short)arg1;
+ (id)cplDownloadFinishedMarkerFilePath;
+ (id)cplEnableMarkerFilePath;
+ (id)crashRecoveryIndicatorFilePaths:(bool)arg1;
+ (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2;
+ (void)createRelocateLibraryTriggerFileWithPath:(id)arg1;
+ (bool)createSqliteErrorIndicatorFile;
+ (short)currentPauseReason;
+ (unsigned long long)defaultUnverifiedFaceCountThreshold;
+ (void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1;
+ (void)deleteCPLDownloadFinishedMarkerFilePath;
+ (id)deletedMemoryUUIDsFilePath;
+ (id)disableICloudPhotosFilePath;
+ (void)disableOpportunisticTasks;
+ (id)dupeAnalysisNeededFilePath;
+ (id)enableICloudPhotosFilePath;
+ (void)enableOpportunisticTasks;
+ (void)exitToRelocatePhotoLibrary;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(bool)arg2;
+ (void)forceSoftResetSync;
+ (id)forceSoftResetSyncPath;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (bool)hasITunesSyncedContent;
+ (bool)isAlbumSynced:(id)arg1;
+ (bool)isApplicationWildcat;
+ (bool)isAudioFileExtension:(id)arg1;
+ (bool)isDataMigratorFinished;
+ (bool)isDataProtectionComplete;
+ (bool)isDisableICloudPhotos;
+ (bool)isDupeAnalysisNeeded;
+ (bool)isEnableICloudPhotos;
+ (bool)isForceSoftResetSync;
+ (bool)isICloudPhotosPaused;
+ (bool)isImageFileExtension:(id)arg1;
+ (bool)isMomentAnalysisNeeded;
+ (bool)isNonRawImageFileExtension:(id)arg1;
+ (bool)isRawImageFileExtension:(id)arg1;
+ (bool)isRunningInStoreDemoMode;
+ (bool)isSafeToRecoverAfterCrash;
+ (bool)isStreamsLibraryUpdatingExpired;
+ (bool)isUserPause;
+ (bool)isVideoFileExtension:(id)arg1;
+ (bool)libraryAvailableIndicatorState;
+ (id)momentAnalysisNeededFilePath;
+ (id)opportunisticTaskIsolationQueue;
+ (id)pauseICloudPhotosFilePath;
+ (void)performAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(id /* block */)arg2;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(id /* block */)arg3;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (void)performTransactionAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(id /* block */)arg2;
+ (bool)photoLibraryIsObtainable;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (int)priorityForFileExtension:(id)arg1;
+ (bool)processCanReadSandboxForPath:(id)arg1;
+ (bool)processCanWriteSandboxForPath:(id)arg1;
+ (bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (id)queueStatusDescription;
+ (void)recordDataMigrationInfo:(id)arg1;
+ (void)recoverFromCrashIfNeeded;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
+ (void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3;
+ (bool)removeFaceMetadataAtURL:(id)arg1 includingPeople:(bool)arg2;
+ (void)removeRelocateLibraryTriggerFile;
+ (void)repairSingletonObjects;
+ (void)setApplicationIsWildcat:(bool)arg1;
+ (void)setCameraRollCountedInQuota:(bool)arg1;
+ (void)setCloudAlbumSharingEnabled:(bool)arg1;
+ (void)setDataMigratorFinished:(bool)arg1;
+ (void)setDataProtectionComplete:(bool)arg1;
+ (void)setDupeAnalysisNeeded:(bool)arg1;
+ (void)setICloudPhotosEnabled:(bool)arg1;
+ (void)setICloudPhotosEnabledInternal:(bool)arg1;
+ (void)setImageWriterIsBusy:(bool)arg1;
+ (void)setLibraryAvailableIndicatorState:(bool)arg1;
+ (void)setMomentAnalysisNeeded:(bool)arg1;
+ (void)setPhotoStreamEnabled:(bool)arg1;
+ (void)setSqliteErrorAndExitIfNecessaryForDemoContentInstallation;
+ (void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(bool)arg1;
+ (void)setStreamsLibraryUpdatingExpired:(bool)arg1;
+ (void)setTakingPhotoIsBusy:(bool)arg1;
+ (void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1;
+ (void)setVideoCaptureIsBusy:(bool)arg1;
+ (id)sharedPhotoLibrary;
+ (unsigned long long)sharedStreamsSize;
+ (id)syncedAlbumSubtitleStringFormat;
+ (id)unpauseTime;
+ (unsigned long long)unverifiedFaceCountThreshold;
+ (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
+ (void)updateAssetPlayShareViewCountsInContext:(id)arg1;
+ (void)updateICloudPhotosMarkerForEnable:(bool)arg1;
+ (void)updateMemoryPlayShareViewCountsInContext:(id)arg1;
+ (void)updateUnverifiedFaceCountThreshold;

- (void).cxx_destruct;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5;
- (void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (bool)_checkMomentAnalysisCompletion;
- (id)_dataMigrationInfo;
- (unsigned long long)_dbFileSizes;
- (void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1;
- (void)_deleteITunesSyncedContentWithReason:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2;
- (void)_enumerateFilesAtURL:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_enumerateFilesAtURLs:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)_fileSizeAtPath:(id)arg1;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4;
- (bool)_hasAtLeastOneItem:(bool)arg1;
- (bool)_hasIncompleteAsset;
- (bool)_hasPendingAssetsIgnoreiTunes:(bool)arg1;
- (bool)_isHeifUTI:(struct __CFString { }*)arg1;
- (bool)_isOTARestoreInProgress;
- (void)_legacyCleanupForStoreDemoMode;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_loadDatabase:(const char *)arg1;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1;
- (void)_removeOldFaceMetadataAsync;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_reportExpungedAssets:(id)arg1;
- (void)_resetSyncedAssetsDCIMDirectory;
- (void)_safeSave:(id)arg1;
- (bool)_safeSave:(id)arg1 error:(id*)arg2;
- (bool)_shouldCreateDatabase;
- (bool)_stageDemoLibraryContentForStoreDemoMode;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(bool)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(bool)arg5 performTransaction:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)addCompletionHandlerToCurrentTransaction:(id /* block */)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(bool)arg14 isPlaceholder:(bool)arg15;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)albumListForAlbumOfKind:(int)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (id)albums;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(bool)arg1;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (id)assetsdClient;
- (void)batchDeleteAssets:(id)arg1 withReason:(id)arg2;
- (bool)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id*)arg3;
- (bool)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupIncompleteAssetsAfterOTARestore;
- (void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)clientApplicationWillEnterForeground;
- (unsigned long long)concurrencyType;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2;
- (void)dealloc;
- (bool)deleteAllDiagnosticFiles:(id*)arg1;
- (void)deleteExpiredTrashBinObjects;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (unsigned long long)editableAlbumCount;
- (id)estimatedLibrarySizes;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (id)eventAlbums;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (id)faceAlbums;
- (struct NSObject { Class x1; }*)favoritesAlbum;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (bool)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2;
- (bool)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(bool)arg3 excludeInvisible:(bool)arg4 excludeCloudShared:(bool)arg5;
- (id)globalValueForKey:(id)arg1;
- (bool)hasAtLeastOneItem;
- (bool)hasAtLeastOnePhoto;
- (bool)hasCompletedMomentAnalysis;
- (bool)hasCompletedRestorePostProcessing;
- (bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (id)iTunesSyncedAssetsDCIMDirectory;
- (id)iTunesSyncedContentInfo;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)importAlbums;
- (id)incompleteRestoreProcesses;
- (id)init;
- (id)initWithName:(const char *)arg1;
- (id)initWithTransientContext:(bool)arg1 name:(const char *)arg2;
- (id)initWithTransientContext:(bool)arg1 name:(const char *)arg2 basePath:(id)arg3;
- (id)initWithTransientContext:(bool)arg1 name:(const char *)arg2 pathManager:(id)arg3;
- (bool)isReadyForCloudPhotoLibrary;
- (bool)isTransient;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(bool)arg1;
- (id)librarySizes;
- (id)librarySizesFromDB;
- (id)managedObjectContext;
- (id)managedObjectContextStoreUUID;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)name;
- (bool)needsMigration;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
- (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2;
- (unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1;
- (id)objectWithObjectID:(id)arg1;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (id)pathManager;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 withPriority:(long long)arg3;
- (void)performBlock:(id /* block */)arg1 withPriority:(long long)arg2;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performTransaction:(id /* block */)arg1;
- (void)performTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2 withPriority:(long long)arg3;
- (void)performTransaction:(id /* block */)arg1 withPriority:(long long)arg2;
- (void)performTransactionAndWait:(id /* block */)arg1;
- (void)performTransactionAndWait:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performTransactionAndWaitWithName:(id)arg1 transaction:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)photoAnalysisClient;
- (id)photoFromAssetURL:(id)arg1;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (id)placeAlbums;
- (struct NSObject { Class x1; }*)placesAlbum;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (void)recreateAlbumsAndPersonsFromMetadata;
- (void)recreatePersonsFromMetadata;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)rootAlbumList;
- (id)rootFolder;
- (void)scheduleUserInitiatedAnalysisForAssets:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (id)simpleDCIMDirectory;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (id)syncProgressAlbumsIgnoreiTunes:(bool)arg1;
- (id)syncedAlbums;
- (void)testForRecoveryInBackground;
- (id)userAlbums;
- (void)userExpungeAlbums:(id)arg1;
- (void)userExpungeAssets:(id)arg1;
- (id)userLibraryAlbum;
- (void)userTrashAlbums:(id)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (void)withDispatchGroup:(id)arg1 performBlock:(id /* block */)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id /* block */)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
