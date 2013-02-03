/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarModel;

@interface CalendarUnknownAttendeeViewController : ABUnknownPersonViewController <ABUnknownPersonViewControllerDelegate> {
    CalendarModel *_model;
}

- (void)_selectedAttendeeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (void)setDisplayedAttendee:(void*)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;

@end