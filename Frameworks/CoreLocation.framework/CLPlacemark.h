/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding, RCLocationOfInterest, REDonatedActionIdentifierProviding> {
    CLPlacemarkInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *ISOcountryCode;
@property (nonatomic) unsigned long long RCRank;
@property (nonatomic, readonly, copy) NSDictionary *addressDictionary;
@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSArray *areasOfInterest;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOMapItem> *geoMapItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inlandWater;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *ocean;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly, copy) CLRegion *region;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *thoroughfare;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;
@property (nonatomic, readonly) double uncertainty;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)_geoMapItem;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)name;
- (id)ocean;
- (id)postalAddress;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)timeZone;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;

- (id)_intents_indexingRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (id)acs_formattedNameOrStreetAddress;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)_px_dynamicLocationString;
- (id)px_subtitle;
- (id)px_title;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (unsigned long long)RCRank;
- (double)confidence;
- (id)geoMapItem;
- (id)preferredName;
- (void)setRCRank:(unsigned long long)arg1;
- (double)uncertainty;

@end
