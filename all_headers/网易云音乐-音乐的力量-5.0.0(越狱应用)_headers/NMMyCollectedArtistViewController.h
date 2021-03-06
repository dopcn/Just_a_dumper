//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMMyCollectionSubViewController.h"

#import "NMMyCollectedArtistRecommendCellDelegate-Protocol.h"

@class NSString;

@interface NMMyCollectedArtistViewController : NMMyCollectionSubViewController <NMMyCollectedArtistRecommendCellDelegate>
{
}

- (void)willRemoveItem:(id)arg1;
- (id)itemTypeName;
- (void)setItemUncollected:(id)arg1;
- (unsigned long long)maxRecommendCount;
- (id)recommendResultKey;
- (void)prepareItems:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)itemWithDictionary:(id)arg1;
- (id)idForItem:(id)arg1;
- (id)moreRecommendViewController;
- (void)logMoreButtonClick;
- (void)logImpressWithItem:(id)arg1 atIndex:(unsigned long long)arg2 recommend:(_Bool)arg3;
- (void)logClickActionWithItem:(id)arg1 recommend:(_Bool)arg2;
- (id)itemViewControllerWithItem:(id)arg1;
- (id)recommendCellWithTableView:(id)arg1 cellIdentifier:(id)arg2 items:(id)arg3;
- (double)recommendCellHeightWithItems:(id)arg1;
- (_Bool)recommentItemSingleCell;
- (id)itemCellWithTableView:(id)arg1 cellIdentifier:(id)arg2 item:(id)arg3;
- (double)itemCellHeight;
- (id)recommendRequest;
- (id)refreshRequestWithCount:(unsigned long long)arg1;
- (id)loadMoreRequestWithCount:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)logSearchBegin;
- (_Bool)searchMatchedItem:(id)arg1 keyword:(id)arg2;
- (id)artistNotification;
- (id)collectForItem:(id)arg1;
- (id)collectNotifications;
- (double)tableViewLeftEdgeInset;
- (unsigned long long)type;
- (void)myCollectedArtistRecommendCell:(id)arg1 artistClicked:(id)arg2 index:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

