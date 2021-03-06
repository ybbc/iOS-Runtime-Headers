/* Generated by RuntimeBrowser.
 */

@protocol _UIClickInteractionDriverDelegate <NSObject>

@required

- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didPerformStateChange:(unsigned long long)arg2;
- (bool)clickDriverShouldBegin:(id <_UIClickInteractionDriving>)arg1;

@optional

- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
- (bool)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;

@end
