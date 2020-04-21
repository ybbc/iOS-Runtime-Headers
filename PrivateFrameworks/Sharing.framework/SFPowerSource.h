/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPowerSource : NSObject <NSSecureCoding> {
    NSArray * _LEDs;
    NSString * _accessoryCategory;
    NSString * _accessoryID;
    long long  _adapterErrorFlags;
    long long  _adapterFamilyCode;
    NSString * _adapterName;
    bool  _adapterSharedSource;
    long long  _adapterSourceID;
    bool  _added;
    unsigned int  _changes;
    double  _chargeLevel;
    bool  _charging;
    long long  _familyCode;
    NSString * _groupID;
    NSDictionary * _ioKitAdapterDescription;
    NSDictionary * _ioKitDescription;
    bool  _lowPowerModeEnabled;
    int  _lowPowerMonitoringToken;
    double  _lowWarnLevel;
    double  _maxCapacity;
    NSString * _name;
    NSString * _partID;
    NSString * _partName;
    int  _powerState;
    bool  _present;
    long long  _productID;
    struct OpaqueIOPSPowerSourceID { } * _psID;
    int  _role;
    bool  _showChargingUI;
    long long  _sourceID;
    NSString * _state;
    long long  _temperature;
    NSString * _transportType;
    NSString * _type;
    long long  _vendorID;
}

@property (nonatomic, copy) NSArray *LEDs;
@property (nonatomic, copy) NSString *accessoryCategory;
@property (nonatomic, copy) NSString *accessoryID;
@property (nonatomic) long long adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode;
@property (nonatomic, copy) NSString *adapterName;
@property (nonatomic) bool adapterSharedSource;
@property (nonatomic) long long adapterSourceID;
@property (nonatomic) bool added;
@property (nonatomic) unsigned int changes;
@property (nonatomic) double chargeLevel;
@property (nonatomic) bool charging;
@property (nonatomic) long long familyCode;
@property (nonatomic, copy) NSString *groupID;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (nonatomic, copy) NSDictionary *ioKitAdapterDescription;
@property (nonatomic, copy) NSDictionary *ioKitDescription;
@property (getter=isLowPowerModeEnabled, nonatomic, readonly) bool lowPowerModeEnabled;
@property (nonatomic) double lowWarnLevel;
@property (nonatomic, readonly) long long matID;
@property (nonatomic) double maxCapacity;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *partID;
@property (nonatomic, copy) NSString *partName;
@property (nonatomic) int powerState;
@property (nonatomic) bool present;
@property (nonatomic) long long productID;
@property (nonatomic) int role;
@property (nonatomic) bool showChargingUI;
@property (nonatomic) long long sourceID;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) long long temperature;
@property (nonatomic, copy) NSString *transportType;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long vendorID;
@property (nonatomic, readonly) bool wirelessCharging;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)LEDs;
- (void)_updateWithCoder:(id)arg1;
- (id)accessoryCategory;
- (id)accessoryID;
- (long long)adapterErrorFlags;
- (long long)adapterFamilyCode;
- (id)adapterName;
- (bool)adapterSharedSource;
- (long long)adapterSourceID;
- (bool)added;
- (unsigned int)changes;
- (double)chargeLevel;
- (bool)charging;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)familyCode;
- (id)groupID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)ioKitAdapterDescription;
- (id)ioKitDescription;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (bool)isLowPowerModeEnabled;
- (void)lowPowerModeChanged:(int)arg1;
- (double)lowWarnLevel;
- (long long)matID;
- (double)maxCapacity;
- (id)name;
- (id)partID;
- (id)partName;
- (int)powerState;
- (bool)present;
- (long long)productID;
- (int)publish;
- (int)role;
- (void)setAccessoryCategory:(id)arg1;
- (void)setAccessoryID:(id)arg1;
- (void)setAdapterErrorFlags:(long long)arg1;
- (void)setAdapterFamilyCode:(long long)arg1;
- (void)setAdapterName:(id)arg1;
- (void)setAdapterSharedSource:(bool)arg1;
- (void)setAdapterSourceID:(long long)arg1;
- (void)setAdded:(bool)arg1;
- (void)setChanges:(unsigned int)arg1;
- (void)setChargeLevel:(double)arg1;
- (void)setCharging:(bool)arg1;
- (void)setFamilyCode:(long long)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIoKitAdapterDescription:(id)arg1;
- (void)setIoKitDescription:(id)arg1;
- (void)setLEDs:(id)arg1;
- (void)setLowWarnLevel:(double)arg1;
- (void)setMaxCapacity:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPartID:(id)arg1;
- (void)setPartName:(id)arg1;
- (void)setPowerState:(int)arg1;
- (void)setPresent:(bool)arg1;
- (void)setProductID:(long long)arg1;
- (void)setRole:(int)arg1;
- (void)setShowChargingUI:(bool)arg1;
- (void)setSourceID:(long long)arg1;
- (void)setState:(id)arg1;
- (void)setTemperature:(long long)arg1;
- (void)setTransportType:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVendorID:(long long)arg1;
- (bool)showChargingUI;
- (long long)sourceID;
- (void)startLowPowerMonitoringIfAppropriate;
- (id)state;
- (long long)temperature;
- (id)transportType;
- (id)type;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (void)updateWithPowerSource:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (long long)vendorID;
- (bool)wirelessCharging;

@end
