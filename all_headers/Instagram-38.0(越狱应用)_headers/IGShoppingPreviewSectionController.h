//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGFeedItemActionCellConfigurableDelegate-Protocol.h"
#import "IGFeedItemCarouselCellDelegate-Protocol.h"
#import "IGFeedItemPhotoCellDelegate-Protocol.h"
#import "IGFeedItemTextCellDelegate-Protocol.h"
#import "IGFeedItemUFICellConfigurableDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGObjectInTagDisplayDelegate-Protocol.h"

@class FBTimer, IGComposition, IGFeedItem, IGFeedItemPageCellState, IGFeedItemTimelineViewModel, IGFeedUFITooltipManager, IGMediaMetadata, IGUserSession, NSString;
@protocol IGFeedConfigurationType, IGFeedItemConfigurationType;

@interface IGShoppingPreviewSectionController : IGListSectionController <IGFeedItemPhotoCellDelegate, IGListDisplayDelegate, IGObjectInTagDisplayDelegate, IGFeedItemActionCellConfigurableDelegate, IGFeedItemUFICellConfigurableDelegate, IGFeedItemTextCellDelegate, IGFeedItemCarouselCellDelegate>
{
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedConfigurationType> _feedConfiguration;
    FBTimer *_ctaDwellDetectionTimer;
    FBTimer *_dwellDetectionTimer;
    IGFeedUFITooltipManager *_ufiTooltipManager;
    IGFeedItemTimelineViewModel *_itemViewModel;
    IGFeedItemPageCellState *_pageCellState;
    IGMediaMetadata *_singleMediaMetadata;
    IGComposition *_carouselComposition;
}

+ (id)feedCellTypeClassMap;
@property(retain, nonatomic) IGComposition *carouselComposition; // @synthesize carouselComposition=_carouselComposition;
@property(retain, nonatomic) IGMediaMetadata *singleMediaMetadata; // @synthesize singleMediaMetadata=_singleMediaMetadata;
@property(retain, nonatomic) IGFeedItemPageCellState *pageCellState; // @synthesize pageCellState=_pageCellState;
@property(retain, nonatomic) IGFeedItemTimelineViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(readonly, nonatomic) __weak IGFeedUFITooltipManager *ufiTooltipManager; // @synthesize ufiTooltipManager=_ufiTooltipManager;
@property(retain, nonatomic) FBTimer *dwellDetectionTimer; // @synthesize dwellDetectionTimer=_dwellDetectionTimer;
@property(retain, nonatomic) FBTimer *ctaDwellDetectionTimer; // @synthesize ctaDwellDetectionTimer=_ctaDwellDetectionTimer;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)isViewOnScreen;
- (_Bool)shouldShowPriceOnTags;
- (_Bool)shouldShowShoppingTags;
- (void)objectInTagView:(id)arg1 didTapOnTagView:(id)arg2;
- (void)feedItemPhotoCell:(id)arg1 willLoadURL:(id)arg2;
- (void)feedItemPhotoCellDidShowTags:(id)arg1;
- (void)feedItemPhotoCellPercentVisibleDidChange:(id)arg1 percentVisible:(double)arg2;
- (void)feedItemPhotoCellImageDidLoadImage:(id)arg1;
- (void)feedItemPhotoCellDidSingleTap:(id)arg1;
- (void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1;
- (void)peekShoppingTagHints;
- (void)clearDwellDetectionTimer;
- (void)setUpDwellDetectionTimer;
- (void)clearCTADwellDetectionTimer;
- (void)handleCTADwellDetectionTimer;
- (_Bool)feedItemActionCellIsOwnPhoto:(id)arg1;
- (void)feedItemActionCellCustomizableButtonDidChange:(id)arg1 toVisible:(_Bool)arg2;
- (void)feedItemActionCellDidLongPressSaveButton:(id)arg1;
- (void)feedItemActionCellDidTapSaveButton:(id)arg1;
- (void)feedItemActionCellDidTapSendButton:(id)arg1;
- (void)feedItemActionCellDidTapLikeButton:(id)arg1;
- (void)feedItemActionCellDidTapCommentButton:(id)arg1;
- (void)feedItemActionCellCustomizableButtonStateDidChange:(id)arg1 toState:(unsigned long long)arg2 withIntent:(id)arg3;
- (void)feedItemActionCellDidTapCustomizableButton:(id)arg1;
- (_Bool)showSubmittedLabelForFeedItemActionCell:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)feedItemCarouselCellDidUpdatePercentVisible:(id)arg1 percentVisible:(double)arg2;
- (void)feedItemCarouselCell:(id)arg1 itemDidStartViewing:(id)arg2;
- (void)feedItemCarouselCellDidDoubleTap:(id)arg1;
- (void)feedItemCarouselCellDidSingleTap:(id)arg1;
- (id)ufiCell;
- (void)feedItemCarouselCell:(id)arg1 didScrollToIndex:(long long)arg2 fromIndex:(long long)arg3;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)feedItemTextCell:(id)arg1 coreTextView:(id)arg2 didLongTapOnString:(id)arg3 URL:(id)arg4;
- (void)feedItemTextCell:(id)arg1 coreTextView:(id)arg2 didTapOnString:(id)arg3 URL:(id)arg4;
- (void)configureHeaderCell:(id)arg1;
- (void)configureTextCell:(id)arg1 feedItemRow:(id)arg2 forIndex:(long long)arg3;
- (void)configurePhotoCell:(id)arg1;
- (void)configureUFICell:(id)arg1;
- (void)configureCarouselCell:(id)arg1;
- (double)contentWidth;
- (id)photoCell;
- (id)headerCell;
- (struct UIEdgeInsets)inset;
@property(readonly, copy) NSString *description;
- (id)initWithItemConfiguration:(id)arg1 feedConfiguration:(id)arg2 userSession:(id)arg3 carouselComposition:(id)arg4;
- (id)initWithItemConfiguration:(id)arg1 feedConfiguration:(id)arg2 userSession:(id)arg3 singleMediaMetadata:(id)arg4;
- (id)initWithItemConfiguration:(id)arg1 feedConfiguration:(id)arg2 userSession:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

