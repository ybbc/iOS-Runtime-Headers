/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {
    struct OpaqueFigSubtitleCALayerInternal { struct OpaqueFigPlayer {} *x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned char x5; unsigned char x6; bool x7; unsigned char x8; unsigned char x9; id x10; unsigned int x11; struct __CFString {} *x12; struct OpaqueFigCDSSession {} *x13; struct OpaqueFigSubtitleRenderer {} *x14; struct __CFDictionary {} *x15; unsigned char x16; struct __CFDictionary {} *x17; struct __CFArray {} *x18; struct __CFArray {} *x19; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_20_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_20_1_2; } x20; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_21_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_21_1_2; } x21; } * layerInternal;
}

@property (nonatomic, copy) NSString *captionRenderingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOverscanSubtitleSupportEnabled, nonatomic) bool overscanSubtitleSupportEnabled;
@property (readonly) Class superclass;

+ (id)defaultActionForKey:(id)arg1;

- (void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addPositionAnimation:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)addAnimations:(id)arg1 forKey:(id)arg2;
- (id)captionRenderingStrategy;
- (void)clear;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)finalize;
- (void)handleNeedsLayoutNotification;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isOverscanSubtitleSupportEnabled;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)removeAnimationsForKey:(id)arg1;
- (void)setCaptionRenderingStrategy:(id)arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (void)setPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;

@end
