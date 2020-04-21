/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPencilEvent : UIEvent {
    NSMutableSet * _trackedInteractions;
}

@property (nonatomic, retain) NSMutableSet *trackedInteractions;

- (void).cxx_destruct;
- (id)_init;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (void)setTrackedInteractions:(id)arg1;
- (id)trackedInteractions;

@end