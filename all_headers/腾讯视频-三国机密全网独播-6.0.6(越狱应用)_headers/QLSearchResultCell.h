//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLONAPosterViewActionDelegata-Protocol.h"

@class NSArray, NSString, QLJCEONASearchPoster, QLJCEVideoItemData, QLSearchPosterView, QLSearchResultTimelineView, UIButton;

@interface QLSearchResultCell : QLBaseTabelViewCell <QLONAPosterViewActionDelegata>
{
    QLSearchPosterView *_posterView;
    QLJCEONASearchPoster *_searchPoster;
    long long _GridCellCountOfLine;
    QLSearchResultTimelineView *_timelineView;
    UIButton *_moreItem;
    NSArray *_timelineList;
    QLJCEVideoItemData *_moreItemData;
}

+ (id)filterVideoItemList:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (double)videoItemBtnHeight;
+ (double)horizalGapBetweenBtn;
+ (unsigned long long)gridCellCountToFitScreen;
+ (double)heightForResultCell:(id)arg1;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLJCEVideoItemData *moreItemData; // @synthesize moreItemData=_moreItemData;
@property(retain, nonatomic) NSArray *timelineList; // @synthesize timelineList=_timelineList;
@property(retain, nonatomic) UIButton *moreItem; // @synthesize moreItem=_moreItem;
@property(retain, nonatomic) QLSearchResultTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void).cxx_destruct;
- (void)searchViewDidFireClickEvent;
- (void)searchViewHandleJumpAction:(id)arg1;
- (void)followingProcessAfterClickAction;
- (void)timelineMoreClick:(id)arg1;
- (void)resetTimelineDatas;
- (void)layoutTimelineView;
- (void)reportShowUp;
- (void)adaptiveAdjustGridCellLayout:(id)arg1;
- (void)reAdjustVideoItemByShiftNormalBtnForward:(id)arg1 forcedIndex:(long long)arg2;
- (_Bool)needReAdjustInteractTailVideoItemBtn:(id)arg1;
- (void)reAdjustVideoItemByShiftInteractBtnToIndex:(unsigned long long)arg1;
- (_Bool)needReAdjustInteractVideoItemBtn:(id)arg1;
- (void)listCellClick:(id)arg1;
- (void)gridCellClick:(id)arg1;
- (void)refreshHTMLLabel:(id)arg1 text:(id)arg2 color:(id)arg3 ignoreBg:(_Bool)arg4;
- (id)createImgCornerViewWithPosition:(int)arg1 forView:(id)arg2;
- (id)createHtmlLabelWithFontSize:(double)arg1 withPosition:(int)arg2 forView:(id)arg3;
- (void)refreshConerImgsLblsWithMark:(id)arg1 forView:(id)arg2;
- (void)refreshConerImgsWithMark:(id)arg1 forView:(id)arg2;
- (void)refreshConerLabelsWithMark:(id)arg1 forView:(id)arg2;
- (void)setMarkLabelList:(id)arg1 forVeiw:(id)arg2;
- (void)layoutListCell;
- (void)layoutGridCell;
- (void)layoutVideoList;
- (void)layoutSubviews;
- (void)preProcessReusedViews;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

