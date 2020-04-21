/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTextKnobTracker : TSDKnobTracker {
    bool  _didShowMagnifier;
    bool  _doneTracking;
    TSWPEditingController * _editingController;
    unsigned long long  _headCharAtStart;
    bool  _ignoreNextCall;
    bool  _knobMoved;
    TSWPTextMagnifierRanged * _magnifier;
    bool  _multiTap;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeAtStart;
    int  _selectionType;
    unsigned long long  _tailCharAtStart;
    NSTimer * _textMagnifierTimer;
}

@property (nonatomic, readonly) bool didShowMagnifier;
@property (nonatomic, retain) TSWPEditingController *editingController;
@property (nonatomic) bool ignoreNextCall;

+ (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; double x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; double x_9_1_6; double x_9_1_7; double x_9_1_8; } x9; struct TSWPListLabel {} *x10; id x11; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_12_1_1; struct TSWPLineRef {} *x_12_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_12_1_3; } x12; double x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; }*)p_lineFragmentForCharIndex:(unsigned long long)arg1 knobTag:(unsigned long long)arg2 selectionType:(int)arg3 rep:(id)arg4;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })adjustSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forStorage:(id)arg2;
- (void)autoscrollWillNotStart;
- (void)dealloc;
- (double)delay;
- (bool)didShowMagnifier;
- (id)editingController;
- (void)endMovingKnob;
- (bool)fixupWordSelection;
- (id)icc;
- (bool)ignoreNextCall;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (void)moveKnobToCanvasPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)p_charIndexForKnob:(unsigned long long)arg1 selection:(id)arg2;
- (void)p_cleanupWhenDone;
- (void)p_fixUpWordSelection;
- (bool)p_isMagnifyingVerticalText;
- (void)p_magnifyWithTarget:(id)arg1 magnificationPoint:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4 delayed:(bool)arg5;
- (bool)p_newHeadCharIndex:(unsigned long long)arg1 isPastTailCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (bool)p_newTailCharIndex:(unsigned long long)arg1 isPastHeadCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (id)p_rangedMagnifier;
- (void)p_setSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_startMagnifying;
- (void)p_stopMagnifyingWithAnimation:(bool)arg1;
- (void)setEditingController:(id)arg1;
- (void)setIgnoreNextCall:(bool)arg1;
- (bool)shouldHideOtherKnobs;
- (double)unscaledStartAutoscrollThreshold;
- (void)updateAfterAutoscroll:(id)arg1;
- (void)updateAfterAutoscroll:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
