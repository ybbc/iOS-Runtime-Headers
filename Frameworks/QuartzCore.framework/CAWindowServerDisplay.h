/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServerDisplay : NSObject {
    struct CAWindowServerDisplayImpl { struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_1_1_1; } x1; struct Server {} *x2; } * _impl;
    bool  _mirroringEnabled;
}

@property (copy) NSString *TVMode;
@property (copy) NSString *TVSignalType;
@property bool allowsDisplayCompositing;
@property bool allowsExtendedDynamicRange;
@property bool allowsVirtualModes;
@property (getter=isBlanked) bool blanked;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) CAWindowServerDisplay *cloneMaster;
@property (readonly) NSSet *clones;
@property (nonatomic, copy) NSString *colorMode;
@property float contrast;
@property (readonly) NSString *deviceName;
@property bool disabled;
@property bool disablesUpdates;
@property (readonly) unsigned int displayId;
@property (getter=isGrayscale) bool grayscale;
@property float idealRefreshRate;
@property bool invertsColors;
@property float maximumBrightness;
@property (getter=isMirroringEnabled) bool mirroringEnabled;
@property (readonly) NSString *name;
@property (copy) NSString *orientation;
@property double overscanAmount;
@property struct CGSize { double x1; double x2; } overscanAmounts;
@property int processId;
@property (readonly) unsigned int rendererFlags;
@property double scale;
@property (getter=isSecure) bool secure;
@property (readonly) bool supportsExtendedColors;
@property long long tag;
@property (readonly) NSString *uniqueId;
@property bool usesPreferredModeRefreshRate;

- (id)TVMode;
- (id)TVSignalType;
- (id)_initWithCADisplayServer:(struct Server { int (**x1)(); struct SpinLock { struct { int x_1_2_1; } x_2_1_1; } x2; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; id x4; struct Display {} *x5; struct __CFString {} *x6; struct ContextItem {} *x7; unsigned long long x8; unsigned long long x9; struct ContextItem {} *x10; unsigned long long x11; struct SpinLock { struct { int x_1_2_1; } x_12_1_1; } x12; struct PendingOperation {} *x13; struct Context {} *x14; struct Shape {} *x15; unsigned int x16; struct Context {} *x17; struct Renderer {} *x18; struct Bounds { int x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; double x20; double x21; double x22; struct __CFDictionary {} *x23; struct HangEvent { int (**x_24_1_1)(); struct hangEvent {} *x_24_1_2; } x24; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; }*)arg1;
- (void)addClone:(id)arg1;
- (void)addClone:(id)arg1 options:(id)arg2;
- (bool)allowsDisplayCompositing;
- (bool)allowsExtendedDynamicRange;
- (bool)allowsVirtualModes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned int)clientPortAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (id)cloneMaster;
- (id)clones;
- (id)colorMode;
- (unsigned int)contextIdAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint { double x1; double x2; })arg1 excludingContextIds:(id)arg2;
- (float)contrast;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toContextId:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (bool)disabled;
- (bool)disablesUpdates;
- (unsigned int)displayId;
- (void)freeze;
- (float)idealRefreshRate;
- (void)invalidate;
- (bool)invertsColors;
- (bool)isBlanked;
- (bool)isGrayscale;
- (bool)isMirroringEnabled;
- (bool)isSecure;
- (float)maximumBrightness;
- (float)maximumRefreshRate;
- (float)minimumRefreshRate;
- (id)name;
- (id)orientation;
- (double)overscanAmount;
- (struct CGSize { double x1; double x2; })overscanAmounts;
- (int)processId;
- (void)removeAllClones;
- (void)removeClone:(id)arg1;
- (unsigned int)rendererFlags;
- (double)scale;
- (void)setAccessibilityColorMatrix:(float*)arg1 scale:(float)arg2;
- (void)setAllowsDisplayCompositing:(bool)arg1;
- (void)setAllowsExtendedDynamicRange:(bool)arg1;
- (void)setAllowsVirtualModes:(bool)arg1;
- (void)setBlanked:(bool)arg1;
- (void)setColorMatrix:(float*)arg1 scale:(float)arg2 rampDuration:(double)arg3;
- (void)setColorMode:(id)arg1;
- (void)setContrast:(float)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisablesUpdates:(bool)arg1;
- (void)setGrayscale:(bool)arg1;
- (void)setIdealRefreshRate:(float)arg1;
- (void)setInvertsColors:(bool)arg1;
- (void)setMaximumBrightness:(float)arg1;
- (void)setMaximumRefreshRate:(float)arg1;
- (void)setMinimumRefreshRate:(float)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setNits:(float)arg1;
- (void)setOrientation:(id)arg1;
- (void)setOverscanAmount:(double)arg1;
- (void)setOverscanAmounts:(struct CGSize { double x1; double x2; })arg1;
- (void)setProcessId:(int)arg1;
- (void)setScale:(double)arg1;
- (void)setSecure:(bool)arg1;
- (void)setTVMode:(id)arg1;
- (void)setTVSignalType:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setUsesPreferredModeRefreshRate:(bool)arg1;
- (bool)supportsExtendedColors;
- (long long)tag;
- (unsigned int)taskNamePortOfContextId:(unsigned int)arg1;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (id)uniqueId;
- (void)update;
- (bool)usesPreferredModeRefreshRate;
- (void)willUnblank;

@end
