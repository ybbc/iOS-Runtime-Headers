/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextClient : NSObject {
    NSSet * _capabilities;
    unsigned long long  _defaultRequestType;
    NSString * _indexVersionId;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    NSMutableArray * _updateHandlers;
}

@property (nonatomic, readonly) NSSet *capabilities;
@property (nonatomic, readonly) unsigned long long defaultRequestType;

+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_handleConfigurationUpdate;
- (void)_updateCachedCapabilites;
- (id)capabilities;
- (void)capabilitiesWithReply:(id /* block */)arg1;
- (unsigned long long)defaultRequestType;
- (id)indexVersionId;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)newRequest;
- (void)registerConfigurationUpdateHandler:(id /* block */)arg1;
- (id)retrieveCapabilites;

@end
