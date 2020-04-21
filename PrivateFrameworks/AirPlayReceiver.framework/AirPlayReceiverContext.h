/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverContext : NSObject {
    unsigned char  _audioSessionActive;
    struct { 
        unsigned int type; 
        unsigned long long format; 
        unsigned char loopback; 
        unsigned char varispeed; 
        unsigned char voice; 
        unsigned char movieAudioMode; 
        unsigned char volumeControl; 
        struct __CFString {} *timingProtocol; 
        unsigned int activeType; 
        struct AirPlayReceiverSessionPrivate {} *session; 
        struct APReceiverAudioSessionPrivate {} *audioSession; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } asbd; 
        struct opaqueCMFormatDescription {} *formatDescription; 
        struct OpaqueFigValeria {} *consumer; 
        NSObject<OS_dispatch_queue> *consumerQueue; 
        NSObject<OS_dispatch_source> *consumerTimer; 
        unsigned long long sampleTimeStart; 
        unsigned long long sampleTimeLast; 
        int samplePTSAdjustment; 
        int converterNode; 
        struct OpaqueAudioComponentInstance {} *converterUnit; 
        NSObject<OS_dispatch_source> *ducker; 
        struct OpaqueAUGraph {} *graph; 
        int mixerNode; 
        struct OpaqueAudioComponentInstance {} *mixerUnit; 
        int outputNode; 
        struct OpaqueAudioComponentInstance {} *outputUnit; 
        unsigned char outputStarted; 
        float outputVolume; 
        int varispeedNode; 
        struct OpaqueAudioComponentInstance {} *varispeedUnit; 
    }  _mainAudioCtx;
    unsigned int  _powerAssertion;
    unsigned int  _receiverUISessionID;
    unsigned char  _receiverUIStarted;
    struct AirPlayReceiverSessionPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; struct AirPlayReceiverServerPrivate {} *x3; struct OpaqueAPReceiverRequestProcessor {} *x4; struct APReceiverSessionManagerOpaque {} *x5; void *x6; struct { void *x_7_1_1; void *x_7_1_2; int (*x_7_1_3)(); int (*x_7_1_4)(); int (*x_7_1_5)(); int (*x_7_1_6)(); int (*x_7_1_7)(); int (*x_7_1_8)(); } x7; BOOL x8[32]; BOOL x9[17]; struct OpaqueAPReceiverStatsCollector {} *x10; id x11; unsigned int x12; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_13_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_13_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_13_1_3; } x13; } * _session;
    unsigned char  _sessionStarted;
}

- (void)_handleAVAudioSessionInterruptionBegan;
- (void)_handleAVAudioSessionInterruptionEnded;

@end
