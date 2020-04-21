/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup> {
    PSUICallingSubgroup * _callingSubgroup;
    PSUICoreTelephonyCarrierBundleCache * _carrierBundleCache;
    PSUICarrierSpaceGroup * _carrierSpaceSubgroup;
    CTCellularPlanManager * _cellularPlanManager;
    PSUICoreTelephonyDataCache * _dataCache;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    PSUIMyNumberSubgroup * _myNumberSubgroup;
    PSUINetworkSelectionSubgroup * _networkSelectionSubgroup;
    PSUINetworkSettingsSubgroup * _networkSettingsSubgroup;
    PSSpecifier * _parentSpecifier;
    PSUICellularPlanManagerCache * _planManagerCache;
    bool  _popViewControllerOnPlanDeletion;
    PSSimStatusCache * _simStatusCache;
    PSUISIMSubgroup * _simSubgroup;
}

@property (nonatomic, retain) PSUICallingSubgroup *callingSubgroup;
@property (nonatomic, retain) PSUICoreTelephonyCarrierBundleCache *carrierBundleCache;
@property (nonatomic, retain) PSUICarrierSpaceGroup *carrierSpaceSubgroup;
@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (nonatomic, retain) PSUICoreTelephonyDataCache *dataCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) PSUIMyNumberSubgroup *myNumberSubgroup;
@property (nonatomic, retain) PSUINetworkSelectionSubgroup *networkSelectionSubgroup;
@property (nonatomic, retain) PSUINetworkSettingsSubgroup *networkSettingsSubgroup;
@property (nonatomic, retain) PSSpecifier *parentSpecifier;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic) bool popViewControllerOnPlanDeletion;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;
@property (nonatomic, retain) PSUISIMSubgroup *simSubgroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callingSubgroup;
- (id)carrierBundleCache;
- (id)carrierSpaceSubgroup;
- (id)cellularPlanManager;
- (id)dataCache;
- (id)groupSpecifier;
- (id)initWithFactory:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (id)myNumberSubgroup;
- (id)networkSelectionSubgroup;
- (id)networkSettingsSubgroup;
- (id)parentSpecifier;
- (id)planManagerCache;
- (bool)popViewControllerOnPlanDeletion;
- (void)setCallingSubgroup:(id)arg1;
- (void)setCarrierBundleCache:(id)arg1;
- (void)setCarrierSpaceSubgroup:(id)arg1;
- (void)setCellularPlanManager:(id)arg1;
- (void)setDataCache:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setMyNumberSubgroup:(id)arg1;
- (void)setNetworkSelectionSubgroup:(id)arg1;
- (void)setNetworkSettingsSubgroup:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPopViewControllerOnPlanDeletion:(bool)arg1;
- (void)setSimStatusCache:(id)arg1;
- (void)setSimSubgroup:(id)arg1;
- (id)simStatusCache;
- (id)simSubgroup;
- (id)specifiers;
- (void)viewWillAppear;

@end
