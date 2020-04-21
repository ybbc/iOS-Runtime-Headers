/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRFeatureRegulatoryPanelViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver> {
    NSArray * _displayableItems;
    HKHeartRhythmAvailability * _heartRateAvailability;
}

@property (nonatomic, readonly) NSArray *displayableItems;
@property (nonatomic, retain) HKHeartRhythmAvailability *heartRateAvailability;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayableItems;
- (id)heartRateAvailability;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)receivedHeartRhythmAvailabilityNotification;
- (void)setHeartRateAvailability:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
