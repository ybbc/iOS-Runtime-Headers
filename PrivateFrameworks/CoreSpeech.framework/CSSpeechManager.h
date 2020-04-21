/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeechManager : NSObject <CSAudioRecorderDelegate, CSAudioRouteChangeMonitorDelegate, CSAudioServerCrashMonitorGibraltarDelegate, CSLanguageCodeUpdateMonitorDelegate, CSSiriEnabledMonitorDelegate, CSSmartSiriVolumeDelegate, CSStateMachineDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate, CSVoiceTriggerDelegate> {
    NSHashTable * _activeAudioProcessors;
    NSObject<OS_dispatch_queue> * _assetQueryQueue;
    CSAudioCircularBuffer * _audioBuffer;
    CSAudioRecorder * _audioRecorder;
    double  _audioSessionActivationDelay;
    NSObject<OS_dispatch_source> * _clearLoggingFileTimer;
    long long  _clearLoggingFileTimerCount;
    <CSSpeechManagerDelegate> * _clientController;
    unsigned long long  _clientStartSampleCount;
    NSHashTable * _continuousAudioProcessors;
    CSContinuousVoiceTrigger * _continuousVoiceTrigger;
    CSAsset * _currentVoiceTriggerAsset;
    bool  _deviceRoleIsStereo;
    bool  _isAudioSessionActive;
    bool  _isSiriEnabled;
    CSKeywordDetector * _keywordDetector;
    unsigned long long  _lastForwardedSampleCount;
    NSDictionary * _lastVoiceTriggerEventInfo;
    NSObject<OS_dispatch_source> * _listenPollingTimer;
    long long  _listenPollingTimerCount;
    CSMyriadPHash * _myriad;
    id /* block */  _pendingSetRecordModeToRecordingCompletion;
    NSUUID * _pendingSetRecordModeToRecordingToken;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _secondPassStartSampleCount;
    CSSelfTriggerDetector * _selfTriggerDetector;
    CSSmartSiriVolume * _smartSiriVolume;
    CSStateMachine * _stateMachine;
    CSVoiceTriggerEventNotifier * _voiceTriggerEventNotifier;
    CSVoiceTriggerFidesClient * _voiceTriggerFidesClient;
    CSVoiceTriggerFileLogger * _voiceTriggerFileLogger;
    CSVoiceTriggerFirstPass * _voiceTriggerFirstPass;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic, retain) NSHashTable *activeAudioProcessors;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetQueryQueue;
@property (nonatomic, retain) CSAudioCircularBuffer *audioBuffer;
@property (nonatomic, retain) CSAudioRecorder *audioRecorder;
@property (nonatomic) double audioSessionActivationDelay;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *clearLoggingFileTimer;
@property (nonatomic) long long clearLoggingFileTimerCount;
@property (nonatomic) <CSSpeechManagerDelegate> *clientController;
@property (nonatomic) unsigned long long clientStartSampleCount;
@property (nonatomic, retain) NSHashTable *continuousAudioProcessors;
@property (nonatomic, retain) CSContinuousVoiceTrigger *continuousVoiceTrigger;
@property (nonatomic, retain) CSAsset *currentVoiceTriggerAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceRoleIsStereo;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAudioSessionActive;
@property (nonatomic) bool isSiriEnabled;
@property (nonatomic, retain) CSKeywordDetector *keywordDetector;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic, retain) NSDictionary *lastVoiceTriggerEventInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *listenPollingTimer;
@property (nonatomic) long long listenPollingTimerCount;
@property (nonatomic, retain) CSMyriadPHash *myriad;
@property (nonatomic, copy) id /* block */ pendingSetRecordModeToRecordingCompletion;
@property (nonatomic, retain) NSUUID *pendingSetRecordModeToRecordingToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long secondPassStartSampleCount;
@property (nonatomic, retain) CSSelfTriggerDetector *selfTriggerDetector;
@property (nonatomic, retain) CSSmartSiriVolume *smartSiriVolume;
@property (nonatomic, retain) CSStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSVoiceTriggerEventNotifier *voiceTriggerEventNotifier;
@property (nonatomic, retain) CSVoiceTriggerFidesClient *voiceTriggerFidesClient;
@property (nonatomic, retain) CSVoiceTriggerFileLogger *voiceTriggerFileLogger;
@property (nonatomic, retain) CSVoiceTriggerFirstPass *voiceTriggerFirstPass;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(bool)arg2;
- (void)_cancelPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_createCircularBuffer;
- (void)_createClearLoggingFileTimer;
- (void)_createListenPollingTimer;
- (bool)_createRecorderWithContextIfNeeded:(id)arg1 error:(id*)arg2;
- (void)_destroyAudioRecorderIfNeeded;
- (void)_destroyCircularBuffer;
- (void)_enableMiniDucking:(bool)arg1;
- (id)_eventName:(unsigned long long)arg1;
- (id)_getClientRecordContext;
- (void)_getVoiceTriggerAsset:(id /* block */)arg1;
- (void)_getVoiceTriggerAssetForMac:(id /* block */)arg1;
- (bool)_handleAOPFirstPassTriggerEvent:(unsigned long long)arg1 settings:(id)arg2 error:(id*)arg3;
- (bool)_handleVoiceTriggerSwitchAOP2APEvent:(unsigned long long)arg1 settings:(id)arg2 error:(id*)arg3;
- (id)_myriadCreateIfNeeded:(bool)arg1;
- (void)_notifyEvent:(unsigned long long)arg1;
- (void)_performPendingSetRecordModeToRecordingForReason:(id)arg1;
- (bool)_prepareListenWithSettings:(id)arg1 error:(id*)arg2;
- (bool)_prepareRecorderWithSettings:(id)arg1 error:(id*)arg2;
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;
- (void)_reinitializeVoiceTriggerIfNeeded;
- (void)_reinitializeVoiceTriggerWithAsset:(id)arg1;
- (bool)_releaseAudioSessionForListening:(unsigned long long)arg1 error:(id*)arg2;
- (void)_releaseClientAudioSession:(unsigned long long)arg1;
- (void)_reset;
- (void)_scheduleSetRecordModeToRecordingWithDelay:(double)arg1 forReason:(id)arg2 validator:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)_setCurrentContext:(id)arg1 error:(id*)arg2;
- (bool)_setRecordMode:(long long)arg1 error:(id*)arg2;
- (bool)_setRecordMode:(long long)arg1 withDelay:(double)arg2 error:(id*)arg3;
- (void)_setupCircularBuffer;
- (void)_setupStateMachine;
- (void)_setupVoiceTriggerWithCompletion:(id /* block */)arg1;
- (void)_startClearLoggingFilesTimer;
- (void)_startForwardingToClient;
- (void)_startForwardingToContinuousVoiceTrigger;
- (void)_startForwardingToFirstPassVoiceTrigger;
- (void)_startForwardingToKeywordDetector;
- (void)_startForwardingToSecondPassVoiceTrigger;
- (void)_startForwardingToSelfTriggerDetector;
- (void)_startForwardingToSmartSiriVolume;
- (void)_startListenPolling;
- (bool)_startListening:(id*)arg1;
- (bool)_startRecordingForAOPFirstPassTriggerWithSettings:(id)arg1 error:(id*)arg2;
- (void)_startRecordingForClient:(id)arg1 error:(id*)arg2;
- (bool)_startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (bool)_startRecordingWithSettings:(id)arg1 event:(unsigned long long)arg2 error:(id*)arg3;
- (void)_startVoiceTrigger;
- (id)_stateName:(long long)arg1;
- (void)_stopForwardingToClient;
- (void)_stopForwardingToContinuousVoiceTrigger;
- (void)_stopForwardingToFirstPassVoiceTrigger;
- (void)_stopForwardingToKeywordDetector;
- (void)_stopForwardingToSecondPassVoiceTrigger;
- (void)_stopForwardingToSelfTriggerDetector;
- (void)_stopListenPolling;
- (void)_stopRecordingWithEvent:(unsigned long long)arg1;
- (id)_voiceTriggerEventNotifierCreateIfNeeded:(bool)arg1;
- (id)activeAudioProcessors;
- (unsigned long long)alertStartTime;
- (id)assetQueryQueue;
- (id)audioBuffer;
- (id)audioRecorder;
- (void)audioRecorder:(id)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)audioRecorder:(id)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)audioRecorderBeginRecordInterruption:(id)arg1;
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderEndRecordInterruption:(id)arg1;
- (void)audioRecorderLostMediaserverd:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (double)audioSessionActivationDelay;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)clearLoggingFileTimer;
- (long long)clearLoggingFileTimerCount;
- (id)clientController;
- (unsigned long long)clientStartSampleCount;
- (id)continuousAudioProcessors;
- (id)continuousVoiceTrigger;
- (id)currentVoiceTriggerAsset;
- (void)dealloc;
- (bool)deviceRoleIsStereo;
- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;
- (bool)duckOthersOption;
- (long long)getCurrentState;
- (float)getEstimatedTTSVolume;
- (void)handleLostServerConnection;
- (void)handleServerDidRestart;
- (id)init;
- (id)initWithVoiceTriggerFirstPass:(id)arg1 voicetriggerSecondPass:(id)arg2 voicetriggerEventNotifier:(id)arg3 audioRecorder:(id)arg4;
- (bool)isAudioSessionActive;
- (bool)isClientRecording;
- (bool)isNarrowBand;
- (bool)isSiriEnabled;
- (id)keywordDetector;
- (unsigned long long)lastForwardedSampleCount;
- (id)lastVoiceTriggerEventInfo;
- (id)listenPollingTimer;
- (long long)listenPollingTimerCount;
- (void)mediaserverdDidRestart;
- (id)metrics;
- (id)myriad;
- (void)notifyEvent:(unsigned long long)arg1;
- (id)passThruVoiceTriggerInfo;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (id /* block */)pendingSetRecordModeToRecordingCompletion;
- (id)pendingSetRecordModeToRecordingToken;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointer;
- (bool)prepareRecordingForClient:(id)arg1 error:(id*)arg2;
- (void)prewarmAudioSession;
- (id)queue;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (id)recordSettings;
- (void)registerSpeechController:(id)arg1;
- (void)releaseClientAudioSession;
- (void)releaseClientAudioSession:(unsigned long long)arg1;
- (void)reset;
- (unsigned long long)secondPassStartSampleCount;
- (id)selfTriggerDetector;
- (void)setActiveAudioProcessors:(id)arg1;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)setAssetQueryQueue:(id)arg1;
- (void)setAudioBuffer:(id)arg1;
- (void)setAudioRecorder:(id)arg1;
- (void)setAudioSessionActivationDelay:(double)arg1;
- (void)setClearLoggingFileTimer:(id)arg1;
- (void)setClearLoggingFileTimerCount:(long long)arg1;
- (bool)setClientContext:(id)arg1 error:(id*)arg2;
- (void)setClientController:(id)arg1;
- (void)setClientStartSampleCount:(unsigned long long)arg1;
- (void)setContinuousAudioProcessors:(id)arg1;
- (void)setContinuousVoiceTrigger:(id)arg1;
- (void)setCurrentVoiceTriggerAsset:(id)arg1;
- (void)setDeviceRoleIsStereo:(bool)arg1;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setIsAudioSessionActive:(bool)arg1;
- (void)setIsSiriEnabled:(bool)arg1;
- (void)setKeywordDetector:(id)arg1;
- (void)setLastForwardedSampleCount:(unsigned long long)arg1;
- (void)setLastVoiceTriggerEventInfo:(id)arg1;
- (void)setListenPollingTimer:(id)arg1;
- (void)setListenPollingTimerCount:(long long)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setMyriad:(id)arg1;
- (void)setPendingSetRecordModeToRecordingCompletion:(id /* block */)arg1;
- (void)setPendingSetRecordModeToRecordingToken:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSecondPassStartSampleCount:(unsigned long long)arg1;
- (void)setSelfTriggerDetector:(id)arg1;
- (void)setSmartSiriVolume:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setVoiceTriggerEventNotifier:(id)arg1;
- (void)setVoiceTriggerFidesClient:(id)arg1;
- (void)setVoiceTriggerFileLogger:(id)arg1;
- (void)setVoiceTriggerFirstPass:(id)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (id)smartSiriVolume;
- (void)startManager;
- (void)startRecordingAsyncWithSetting:(id)arg1 event:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (bool)startRecordingWithSetting:(id)arg1 event:(unsigned long long)arg2 error:(id*)arg3;
- (id)stateMachine;
- (void)stopRecordingWithEvent:(unsigned long long)arg1;
- (void)updateMeters;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (id)voiceTriggerEventNotifier;
- (id)voiceTriggerFidesClient;
- (id)voiceTriggerFileLogger;
- (id)voiceTriggerFirstPass;
- (id)voiceTriggerSecondPass;

@end
