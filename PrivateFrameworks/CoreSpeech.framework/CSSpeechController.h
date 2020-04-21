/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeechController : NSObject <CSAudioConverterDelegate, CSSpIdSpeakerRecognizerDelegate, CSSpeechManagerDelegate, CSVoiceTriggerDelegate> {
    unsigned long long  _activeChannel;
    CSAudioConverter * _audioConverter;
    CSPlainAudioFileWriter * _audioFileWriter;
    NSDictionary * _avvcContext;
    CSAudioZeroCounter * _continuousZeroCounter;
    <CSSpeechControllerDelegate> * _delegate;
    CSAudioSampleRateConverter * _downsampler;
    CSEndpointerProxy * _endpointerProxy;
    bool  _isActivated;
    bool  _isAlarmPlaying;
    bool  _isMediaPlaying;
    bool  _isNarrowBand;
    bool  _isOpus;
    bool  _isSoundPlaying;
    bool  _isTimerPlaying;
    NSDictionary * _lastVoiceTriggerInfo;
    bool  _myriadPreventingTwoShotFeedback;
    CSAudioConverter * _narrowBandOpusConverter;
    CSAudioConverter * _opusAudioConverter;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _requestedRecordSettings;
    CSSpeakerIdRecognizerFactory * _spIdFactory;
    <CSSpIdSpeakerRecognizer> * _spIdRecognizer;
    NSDictionary * _spIdUserScores;
    CSSpeechManager * _speechManager;
    NSObject<OS_dispatch_group> * _twoShotAudibleFeedbackDecisionGroup;
    NSObject<OS_dispatch_queue> * _twoShotAudibleFeedbackQueue;
    bool  _twoShotNotificationEnabled;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic, retain) NSDictionary *avvcContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpeechControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool duckOthersOption;
@property (nonatomic, readonly) <CSEndpointAnalyzer> *endpointAnalyzer;
@property (nonatomic, retain) CSEndpointerProxy *endpointerProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActivated;
@property (nonatomic) bool isAlarmPlaying;
@property (nonatomic) bool isMediaPlaying;
@property (nonatomic) bool isNarrowBand;
@property (nonatomic) bool isOpus;
@property (nonatomic) bool isSoundPlaying;
@property (nonatomic) bool isTimerPlaying;
@property (nonatomic) bool myriadPreventingTwoShotFeedback;
@property (nonatomic, retain) CSSpeakerIdRecognizerFactory *spIdFactory;
@property (nonatomic, retain) <CSSpIdSpeakerRecognizer> *spIdRecognizer;
@property (nonatomic, retain) NSDictionary *spIdUserScores;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic) bool twoShotNotificationEnabled;

+ (bool)isSmartSiriVolumeAvailable;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (bool)PacketDecodingUsed;
- (id)_contextToString:(id)arg1;
- (long long)_currentAudioRecorderSampleRate;
- (void)_deviceAudioLogging;
- (id)_getRecordSettings;
- (id)_getSpeechIdentifier;
- (void)_initializeAlarmState;
- (void)_initializeMediaPlayingState;
- (void)_initializeTimerState;
- (bool)_isAutoPrompted;
- (bool)_isSpeakerIdTrainingTriggered;
- (bool)_isVoiceTriggered;
- (bool)_private_PacketDecodingUsed;
- (bool)_private_PacketEncodingUsed;
- (void)_setSoundPlayingState;
- (bool)_setupAudioConverter:(bool)arg1;
- (void)_setupDownsamplerIfNeeded;
- (void)_setupSpeakerId;
- (bool)_shouldSetStartSampleCount;
- (unsigned long long)activeChannel;
- (unsigned long long)alertStartTime;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)audioFileWriter;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForOutputReference;
- (id)avvcContext;
- (void)beginWaitingForMyriad;
- (id)delegate;
- (bool)duckOthersOption;
- (void)endWaitingForMyriadWithDecision:(unsigned long long)arg1;
- (id)endpointAnalyzer;
- (id)endpointerModelVersion;
- (id)endpointerProxy;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })getLPCMAudioStreamBasicDescription;
- (double)getRecordBufferDuration;
- (float)getSmartSiriVolume;
- (id)initWithManager:(id)arg1;
- (bool)initializeRecordSessionWithContext:(id)arg1;
- (bool)isActivated;
- (bool)isAlarmPlaying;
- (bool)isMediaPlaying;
- (bool)isNarrowBand;
- (bool)isOpus;
- (bool)isRTSTriggered;
- (bool)isRecording;
- (bool)isSmartSiriVolumeAvailable;
- (bool)isSoundPlaying;
- (bool)isTimerPlaying;
- (bool)isVoiceTriggered;
- (void)keywordDetectorDidDetectKeyword;
- (double)lastEndOfVoiceActivityTime;
- (id)metrics;
- (bool)myriadPreventingTwoShotFeedback;
- (unsigned long long)outputReferenceChannel;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForOutputReference;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointer;
- (void)preheat;
- (bool)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (void)prewarmAudioSession;
- (void)processServerEndpointFeatures:(id)arg1;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (id)recordSettings;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)reset;
- (void)resetAudioSession;
- (void)resetEndpointer;
- (void)setActiveChannel:(unsigned long long)arg1;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)setAudioFileWriter:(id)arg1;
- (void)setAvvcContext:(id)arg1;
- (bool)setCurrentContext:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setEndpointAnalyzerDelegate:(id)arg1;
- (void)setEndpointerProxy:(id)arg1;
- (void)setIsActivated:(bool)arg1;
- (void)setIsAlarmPlaying:(bool)arg1;
- (void)setIsMediaPlaying:(bool)arg1;
- (void)setIsNarrowBand:(bool)arg1;
- (void)setIsOpus:(bool)arg1;
- (void)setIsSoundPlaying:(bool)arg1;
- (void)setIsTimerPlaying:(bool)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setMyriadPreventingTwoShotFeedback:(bool)arg1;
- (bool)setRecordBufferDuration:(double)arg1;
- (void)setSpIdFactory:(id)arg1;
- (void)setSpIdRecognizer:(id)arg1;
- (void)setSpIdUserScores:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setSynchronousCallbackEnabled:(bool)arg1;
- (void)setTwoShotNotificationEnabled:(bool)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(id /* block */)arg2;
- (id)spIdFactory;
- (id)spIdRecognizer;
- (id)spIdUserScores;
- (void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2;
- (id)speechManager;
- (void)speechManager:(id)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)speechManager:(id)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)speechManagerBeginRecordInterruption:(id)arg1;
- (void)speechManagerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)speechManagerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2 forReason:(unsigned long long)arg3;
- (void)speechManagerDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerEndRecordInterruption:(id)arg1;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (id)speechManagerRecordingContext;
- (void)startController;
- (bool)startRecording:(id*)arg1;
- (bool)startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (void)stopRecording;
- (bool)twoShotNotificationEnabled;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)updateMeters;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (id)voiceTriggerInfo;

@end
