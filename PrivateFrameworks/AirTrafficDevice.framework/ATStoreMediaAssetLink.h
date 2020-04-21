/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreMediaAssetLink : NSObject <ATAssetLink, ATEnvironmentMonitorObserver, ATStoreDownloadObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableSet * _cancelledAssets;
    <ATAssetLinkDelegate> * _delegate;
    ATStoreDownloadService * _downloadService;
    NSMutableSet * _enqueuedAssets;
    bool  _open;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _resumableAssets;
    bool  _resumeAssetDownloadsActivity;
    NSObject<OS_dispatch_queue> * _resumeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ATStoreDownloadService:(id)arg1 didChangeStateForAsset:(id)arg2 oldState:(long long)arg3 newState:(long long)arg4;
- (void)ATStoreDownloadService:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)ATStoreDownloadService:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
- (void)ATStoreDownloadService:(id)arg1 didResumeAsset:(id)arg2;
- (void)ATStoreDownloadService:(id)arg1 didUpdateProgressForAsset:(id)arg2 progress:(float)arg3;
- (long long)_ATAssetStateForStoreDownloadState:(long long)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2;
- (void)_setupActivityToResumeDownloads;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (id)init;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;

@end
