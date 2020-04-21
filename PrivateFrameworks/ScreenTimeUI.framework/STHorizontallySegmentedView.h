/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STHorizontallySegmentedView : UIView {
    bool  _isWidget;
    NSNumber * _numberOfLines;
    double  _previousWidth;
    NSArray * _segmentConstraints;
    NSArray * _segmentItems;
    NSMutableArray * _segmentViews;
}

@property (nonatomic, readonly) bool isWidget;
@property (nonatomic, retain) NSNumber *numberOfLines;
@property (nonatomic) double previousWidth;
@property (nonatomic, copy) NSArray *segmentConstraints;
@property (nonatomic, copy) NSArray *segmentItems;
@property (nonatomic, readonly) NSMutableArray *segmentViews;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)init;
- (id)initForWidget:(bool)arg1;
- (bool)isWidget;
- (void)layoutSubviews;
- (id)numberOfLines;
- (double)previousWidth;
- (id)segmentConstraints;
- (id)segmentItems;
- (id)segmentViews;
- (void)setNumberOfLines:(id)arg1;
- (void)setPreviousWidth:(double)arg1;
- (void)setSegmentConstraints:(id)arg1;
- (void)setSegmentItems:(id)arg1;

@end