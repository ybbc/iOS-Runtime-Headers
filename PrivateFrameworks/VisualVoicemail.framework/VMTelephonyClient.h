/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMTelephonyClient : NSObject <CoreTelephonyClientDelegate, VMTelephonyClient> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    <VMCoreTelephonyClient> * _client;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _subscriptions;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) <VMCoreTelephonyClient> *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSArray *subscriptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)abbreviatedLabelForSubscription:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)client;
- (struct os_unfair_lock_s { unsigned int x1; })delegateLock;
- (id)delegateToQueue;
- (id)fetchSubscriptions;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 client:(id)arg2;
- (id)isoCountryCodeForSubscription:(id)arg1;
- (void)performAtomicAccessorBlock:(id /* block */)arg1;
- (void)performAtomicDelegateBlock:(id /* block */)arg1;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)subscriptionInfoDidChange;
- (id)subscriptions;

@end