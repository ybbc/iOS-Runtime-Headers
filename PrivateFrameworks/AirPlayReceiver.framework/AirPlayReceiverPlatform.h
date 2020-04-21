/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverPlatform : NSObject {
    AirPlayControllerServer * _controllerServer;
    unsigned char  _isMuted;
    int  _lockDownActivationStateToken;
    int  _managedDefaultsChangedNotificationToken;
    int  _playbackAllowNotifyToken;
    int  _playbackPreventNotifyToken;
    unsigned char  _playbackPrevented;
    int  _prefChangedNotifyToken;
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; void *x2; id x3; int x4; struct OpaqueAPAdvertiser {} *x5; unsigned char x6; unsigned char x7; struct HTTPServerPrivate {} *x8; id x9; struct HTTPServerPrivate {} *x10; unsigned char x11[16]; float x12; unsigned char x13; int x14; unsigned char x15; unsigned char x16; struct OpaqueAPReceiverSystemInfo {} *x17; unsigned char x18; unsigned char x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct MediaControlServerPrivate {} *x22; struct __CFDictionary {} *x23; unsigned int x24; int x25; unsigned int x26; struct APReceiverSessionManagerOpaque {} *x27; struct OpaqueFigValeria {} *x28; int (*x29)(); unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; } * _server;
    int  _systemBufferSamples;
    int  _systemSampleRate;
    struct AirPlayReceiverUIPrivate { } * _ui;
    int  _uiErrorNotifyToken;
    unsigned char  _voiceForSiri;
    unsigned char  _voiceForTelephony;
    int  _volumeControlType;
    float  _volumeSliderValue;
    float  _volumeSliderValueBeforeMute;
}

- (void)_avSystemControllerVolumeChanged:(id)arg1;
- (void)_avSystemControllerVolumeConfigChanged:(id)arg1;
- (void)_handleAVAudioSessionInterruption:(id)arg1;
- (void)_handleAVAudioSessionServicesReset:(id)arg1;
- (void)_handleVolumeControlTypeChange;
- (void)_setupVolumeNotificationHandlers;

@end
