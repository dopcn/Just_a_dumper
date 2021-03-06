//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionClearableObject-Protocol.h"

@class IGAutocompleteBrandedContentStore, IGAutocompleteUsersStore, IGRecentHashtagsStore, IGRecentPlacesStore, IGUserDefaults, NSArray, NSMutableOrderedSet, NSString;

@interface IGBlendedSearchRecentItemsOrderStore : NSObject <IGUserSessionClearableObject>
{
    _Bool _needsToBeArchived;
    NSMutableOrderedSet *_mutableRecentItems;
    NSString *_userSessionPK;
    IGUserDefaults *_sessionUserDefaults;
    IGAutocompleteUsersStore *_autocompleteUsersStore;
    IGRecentPlacesStore *_recentPlacesStore;
    IGRecentHashtagsStore *_recentHashtagsStore;
    IGAutocompleteBrandedContentStore *_autocompleteBrandedContentStore;
    NSArray *_sectionControllers;
}

+ (void)clearForUserPK:(id)arg1;
@property(nonatomic) _Bool needsToBeArchived; // @synthesize needsToBeArchived=_needsToBeArchived;
@property(readonly, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(readonly, nonatomic) IGAutocompleteBrandedContentStore *autocompleteBrandedContentStore; // @synthesize autocompleteBrandedContentStore=_autocompleteBrandedContentStore;
@property(readonly, nonatomic) IGRecentHashtagsStore *recentHashtagsStore; // @synthesize recentHashtagsStore=_recentHashtagsStore;
@property(readonly, nonatomic) IGRecentPlacesStore *recentPlacesStore; // @synthesize recentPlacesStore=_recentPlacesStore;
@property(readonly, nonatomic) IGAutocompleteUsersStore *autocompleteUsersStore; // @synthesize autocompleteUsersStore=_autocompleteUsersStore;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void).cxx_destruct;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)addBrandedContentUser:(id)arg1 addToRecent:(_Bool)arg2;
- (void)addHashtagsFromText:(id)arg1 addToRecent:(_Bool)arg2;
- (void)addHashtag:(id)arg1 addToRecent:(_Bool)arg2;
- (void)addUser:(id)arg1 addToRecent:(_Bool)arg2;
- (void)addPlaceToRecent:(id)arg1;
- (void)archiveIfNeeded;
- (void)saveRecentItems:(id)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (id)restoreRecentItems;
- (id)sectionControllerForObjectType:(id)arg1;
- (void)clearHistory;
- (id)recentItems;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableRecentItems; // @synthesize mutableRecentItems=_mutableRecentItems;
- (void)addRecentItem:(id)arg1;
- (void)onFriendStatusReceived:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 autocompleteUsersStore:(id)arg3 recentPlacesStore:(id)arg4 recentHashtagsStore:(id)arg5 autocompleteBrandedContentStore:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

