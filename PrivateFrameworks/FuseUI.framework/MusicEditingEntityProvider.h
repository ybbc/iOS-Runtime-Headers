/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEditingEntityProvider : NSObject <MusicEntityProviding> {
    <MusicEntityProviding> * _baseEntityProvider;
    MusicEntityValueContext * _cachedEntityValueContextForCustomLookup;
    NSMutableArray * _changeRecords;
    struct vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > { 
        struct shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > {} *__begin_; 
        struct shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > *, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > > { 
            struct shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > {} *__value_; 
        } __end_cap_; 
    }  _entries;
}

@property (nonatomic, readonly) NSArray *changeRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forEntry:(const struct EditingEntityProviderEntry { long long x1; long long x2; id x3; }*)arg2;
- (id)_entityValueProviderForEntry:(const struct EditingEntityProviderEntry { long long x1; long long x2; id x3; }*)arg1;
- (void)_registerChangeRecord:(id)arg1;
- (void)_resetEntityValueContextOutput:(id)arg1;
- (id)changeRecords;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)deleteItemAtIndexPath:(id)arg1;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithBaseEntityProvider:(id)arg1;
- (void)insertEntityValueProvider:(id)arg1 atIndexPath:(id)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (bool)resetToCurrentStateOfBaseEntityProvider;
- (void)resetToOriginalStateReturningDeletedIndexPaths:(id*)arg1 andInsertedIndexPaths:(id*)arg2;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@end
