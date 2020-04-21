/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIExternalDisplayManager : NSObject {
    BrightnessSystemClient * _brightnessSystemClient;
}

@property (nonatomic, retain) BrightnessSystemClient *brightnessSystemClient;
@property (nonatomic, retain) NSString *currentHDRMode;
@property (nonatomic, readonly) bool externalDisplayAvailable;
@property (nonatomic, retain) NSNumber *externalDisplayBrightness;
@property (nonatomic, readonly) bool externalDisplayBrightnessAvailable;
@property (nonatomic) bool matchContent;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)brightnessSystemClient;
- (id)currentHDRMode;
- (void)dealloc;
- (bool)externalDisplayAvailable;
- (id)externalDisplayBrightness;
- (bool)externalDisplayBrightnessAvailable;
- (id)externalDisplayName;
- (id)init;
- (bool)matchContent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredHDRModes;
- (void)setBrightnessSystemClient:(id)arg1;
- (void)setCurrentHDRMode:(id)arg1;
- (void)setExternalDisplayBrightness:(id)arg1;
- (void)setMatchContent:(bool)arg1;
- (id)supportedHDRModes;

@end