//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBAppInviteLocalStore : NSObject
{
    CDUnknownBlockType _indexPathTransformer;
    CDUnknownBlockType _itemTransformer;
    NSMutableArray *_invites;
    NSMutableArray *_visibleIndices;
}

- (void).cxx_destruct;
- (unsigned long long)_indexOfAggregratedInvitesFromApplication:(id)arg1;
- (Items_70a68623)changeSetForPresentingChevronNuxAtItemIndex:(unsigned long long)arg1;
- (Items_70a68623)changeSetForChangingVisibleInviteToInvite:(id)arg1;
- (vector_ceb42c11)changeSetsForRemovingInvitesWithSender:(id)arg1;
- (Items_70a68623)changeSetForRemovingInvitesWithApplication:(id)arg1;
- (Items_70a68623)changeSetForRemovingInvitesWithInvite:(id)arg1;
- (Items_70a68623)changeSetForRemovingAllInvites;
- (Items_70a68623)changeSetForSettingInvites:(id)arg1;
- (id)indexPathForInviteWithFBID:(id)arg1;
- (_Bool)hasInvites;
- (id)initWithIndexPathTransformer:(CDUnknownBlockType)arg1 itemTransformer:(CDUnknownBlockType)arg2;

@end

