/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface MediaControlServer : NSObject {
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; void *x2; id x3; int x4; struct OpaqueAPAdvertiser {} *x5; unsigned char x6; unsigned char x7; struct HTTPServerPrivate {} *x8; id x9; struct HTTPServerPrivate {} *x10; unsigned char x11[16]; float x12; unsigned char x13; int x14; unsigned char x15; unsigned char x16; struct OpaqueAPReceiverSystemInfo {} *x17; unsigned char x18; unsigned char x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct MediaControlServerPrivate {} *x22; struct __CFDictionary {} *x23; unsigned int x24; int x25; unsigned int x26; struct APReceiverSessionManagerOpaque {} *x27; struct OpaqueFigValeria {} *x28; int (*x29)(); unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; } * _connectionsServer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _lastActivity;
    AirPlayLocalSlideshow * _slideshow;
}

- (int)_ensurePresentationStarted:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 type:(id)arg2;
- (void)_ensurePresentationStopped:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 type:(id)arg2;
- (int)_showPhoto:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 options:(id)arg2 data:(id)arg3 path:(id)arg4;
- (void)_slideshowActivity:(id)arg1;
- (void)_slideshowWillStart:(id)arg1;
- (void)_slideshowWillStop:(id)arg1;
- (int)_startSlideshow:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 options:(id)arg2;
- (int)_startVideo:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 params:(id)arg2;
- (int)_stopSlideshow:(struct OpaqueAPReceiverRequestProcessor { }*)arg1;
- (void)_stopVideo:(struct OpaqueAPReceiverRequestProcessor { }*)arg1;
- (void)dealloc;
- (id)init:(struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; void *x2; id x3; int x4; struct OpaqueAPAdvertiser {} *x5; unsigned char x6; unsigned char x7; struct HTTPServerPrivate {} *x8; id x9; struct HTTPServerPrivate {} *x10; unsigned char x11[16]; float x12; unsigned char x13; int x14; unsigned char x15; unsigned char x16; struct OpaqueAPReceiverSystemInfo {} *x17; unsigned char x18; unsigned char x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct MediaControlServerPrivate {} *x22; struct __CFDictionary {} *x23; unsigned int x24; int x25; unsigned int x26; struct APReceiverSessionManagerOpaque {} *x27; struct OpaqueFigValeria {} *x28; int (*x29)(); unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; }*)arg1;
- (void)invalidate;
- (void)postEvent:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)slideshowRequestAssetWithInfo:(id)arg1 sessionUUID:(const char *)arg2 completion:(id /* block */)arg3;

@end