/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSEntityDescription * _entity;
    short  _entitysReferenceIDForProperty;
    void * _extraIvars;
    NSString * _name;
    struct __propertyDescriptionFlags { 
        unsigned int _isReadOnly : 1; 
        unsigned int _isTransient : 1; 
        unsigned int _isOptional : 1; 
        unsigned int _isIndexed : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _isIndexedBySpotlight : 1; 
        unsigned int _isStoredInExternalRecord : 1; 
        unsigned int _extraIvarsAreInDataBlob : 1; 
        unsigned int _isOrdered : 1; 
        unsigned int _hasMaxValueInExtraIvars : 1; 
        unsigned int _hasMinValueInExtraIvars : 1; 
        unsigned int _storeBinaryDataExternally : 1; 
        unsigned int _preserveValueOnDelete : 1; 
        unsigned int _isTriggerBacked : 1; 
        unsigned int _isFileBackedFuture : 1; 
        unsigned int _reservedPropertyDescription : 1; 
    }  _propertyDescriptionFlags;
    NSMutableDictionary * _userInfo;
    NSArray * _validationPredicates;
    NSArray * _validationWarnings;
    NSData * _versionHash;
    NSString * _versionHashModifier;
}

@property (getter=vs_JSONKey, setter=vs_setJSONKey:, nonatomic, copy) NSString *JSONKey;
@property (getter=vs_JSONValueTransformerName, setter=vs_setJSONValueTransformerName:, nonatomic, copy) NSString *JSONValueTransformerName;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (getter=vs_expectedJSONValueClasses, setter=vs_setExpectedJSONValueClasses:, nonatomic, copy) NSArray *expectedJSONValueClass;
@property (getter=isIndexed) bool indexed;
@property (getter=isIndexedBySpotlight) bool indexedBySpotlight;
@property (nonatomic, copy) NSString *name;
@property (getter=isOptional) bool optional;
@property (getter=vs_propertyListKey, setter=vs_setPropertyListKey:, nonatomic, copy) NSString *propertyListKey;
@property (getter=vs_propertyListValueTransformerName, setter=vs_setPropertyListValueTransformerName:, nonatomic, copy) NSString *propertyListValueTransformerName;
@property (copy) NSString *renamingIdentifier;
@property (getter=vs_isRequiredJSONValue, setter=vs_setRequiredJSONValue:, nonatomic) bool requiredJSONValue;
@property (getter=isStoredInExternalRecord) bool storedInExternalRecord;
@property (getter=vs_subscriptionKeyPath, setter=vs_setSubscriptionKeyPath:, nonatomic, copy) NSString *subscriptionKeyPath;
@property (getter=vs_suitablePurposes, setter=vs_setSuitablePurposes:, nonatomic) long long suitablePurposes;
@property (getter=isTransient) bool transient;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (readonly) NSArray *validationPredicates;
@property (readonly) NSArray *validationWarnings;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;
- (bool)_comparePredicatesAndWarnings:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (long long)_entitysReferenceID;
- (bool)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (struct _NSExtraPropertyIVars { id x1; long long x2; long long x3; }*)_extraIVars;
- (bool)_hasMaxValueInExtraIvars;
- (bool)_hasMinValueInExtraIvars;
- (id)_initWithName:(id)arg1;
- (void)_initializeExtraIVars;
- (bool)_isEditable;
- (bool)_isFileBackedFuture;
- (bool)_isOrdered;
- (bool)_isRelationship;
- (bool)_isSchemaEqual:(id)arg1;
- (bool)_isToManyRelationship;
- (bool)_isTriggerBacked;
- (bool)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (bool)_preserveValueOnDelete;
- (unsigned long long)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (void)_restoreValidation;
- (void)_setEntity:(id)arg1;
- (void)_setEntityAndMaintainIndices:(id)arg1;
- (void)_setEntitysReferenceID:(long long)arg1;
- (void)_setOrdered:(bool)arg1;
- (bool)_skipValidation;
- (bool)_storeBinaryDataExternally;
- (void)_stripForMigration;
- (void)_throwIfNotEditable;
- (id)_underlyingProperty;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)elementID;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndexed;
- (bool)isIndexedBySpotlight;
- (bool)isOptional;
- (bool)isReadOnly;
- (bool)isSpotlightIndexed;
- (bool)isStoredInExternalRecord;
- (bool)isStoredInTruth;
- (bool)isStoredInTruthFile;
- (bool)isTransient;
- (id)name;
- (id)renamingIdentifier;
- (void)setElementID:(id)arg1;
- (void)setIndexed:(bool)arg1;
- (void)setIndexedBySpotlight:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOptional:(bool)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setSpotlightIndexed:(bool)arg1;
- (void)setStoredInExternalRecord:(bool)arg1;
- (void)setStoredInTruth:(bool)arg1;
- (void)setStoredInTruthFile:(bool)arg1;
- (void)setTransient:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)setVersionHashModifier:(id)arg1;
- (id)userInfo;
- (id)validationPredicates;
- (id)validationWarnings;
- (id)versionHash;
- (id)versionHashModifier;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_JSONKey;
- (id)vs_JSONValueTransformer;
- (id)vs_JSONValueTransformerName;
- (id)vs_expectedJSONValueClasses;
- (bool)vs_isRequiredJSONValue;
- (bool)vs_isSuitableForPurpose:(long long)arg1;
- (id)vs_propertyListKey;
- (id)vs_propertyListValueTransformer;
- (id)vs_propertyListValueTransformerName;
- (void)vs_setExpectedJSONValueClasses:(id)arg1;
- (void)vs_setJSONKey:(id)arg1;
- (void)vs_setJSONValueTransformerName:(id)arg1;
- (void)vs_setPropertyListKey:(id)arg1;
- (void)vs_setPropertyListValueTransformerName:(id)arg1;
- (void)vs_setRequiredJSONValue:(bool)arg1;
- (void)vs_setSubscriptionKeyPath:(id)arg1;
- (void)vs_setSuitablePurposes:(long long)arg1;
- (void)vs_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)vs_subscriptionKeyPath;
- (long long)vs_suitablePurposes;

@end
