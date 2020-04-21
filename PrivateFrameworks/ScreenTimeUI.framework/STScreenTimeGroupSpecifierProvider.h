/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _thisDeviceSpecifier;
    PSSpecifier * _usageSummarySpecifier;
}

@property (nonatomic, retain) PSSpecifier *thisDeviceSpecifier;
@property (nonatomic, retain) PSSpecifier *usageSummarySpecifier;

- (void).cxx_destruct;
- (id)getCoordinator:(id)arg1;
- (id)getUsageDescription:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadScreenTimeSummarySpecifier;
- (void)setCoordinator:(id)arg1;
- (void)setThisDeviceSpecifier:(id)arg1;
- (void)setUsageSummarySpecifier:(id)arg1;
- (void)showUsageDetailController:(id)arg1;
- (id)thisDeviceSpecifier;
- (id)usageSummarySpecifier;

@end
