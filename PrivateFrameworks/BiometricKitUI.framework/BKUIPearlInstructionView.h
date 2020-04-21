/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlInstructionView : UIView {
    bool  _darkMode;
    NSString * _detail;
    UILabel * _detailLabel;
    NSString * _instruction;
    UILabel * _instructionLabel;
    double  _labelsHorizontalMargin;
    NSLayoutConstraint * _labelsWidthConstraint;
    UIScrollView * _scrollView;
}

@property (nonatomic) bool darkMode;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic) UILabel *detailLabel;
@property (nonatomic, retain) NSString *instruction;
@property (nonatomic) UILabel *instructionLabel;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *instructionTextTopAnchor;
@property (nonatomic) double labelsHorizontalMargin;
@property (nonatomic, retain) NSLayoutConstraint *labelsWidthConstraint;
@property (nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (bool)darkMode;
- (id)detail;
- (id)detailLabel;
- (id)init;
- (id)instruction;
- (id)instructionLabel;
- (id)instructionTextTopAnchor;
- (double)labelsHorizontalMargin;
- (id)labelsWidthConstraint;
- (void)layoutSubviews;
- (id)scrollView;
- (void)setDarkMode:(bool)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setInstruction:(id)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setLabelsHorizontalMargin:(double)arg1;
- (void)setLabelsWidthConstraint:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
