//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseCell.h"

#import "TGScrollViewDataSource-Protocol.h"

@class NSString, NVModelBaseWorthRank, TGScrollView, UIImageView, UILabel;

@interface TGWorthRanksCell : TGBaseCell <TGScrollViewDataSource>
{
    NVModelBaseWorthRank *_rank;
    UILabel *_labelForRankTitle;
    UIImageView *_viewForLeftLine;
    UIImageView *_viewForRightLine;
    TGScrollView *_scrollViewForRankItem;
    UILabel *_labelForSlideSeeMore;
    UIImageView *_imgForSlideSeeMore;
    UILabel *_labelForSeeMore;
    UIImageView *_imgForSeeMore;
}

+ (id)viewForRank:(id)arg1 andIndex:(long long)arg2;
+ (id)colorForRankType:(long long)arg1;
+ (id)gaPicLabelForType:(long long)arg1;
+ (id)gaLabelForType:(long long)arg1;
+ (double)scrollHeightForRankType:(long long)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *imgForSeeMore; // @synthesize imgForSeeMore=_imgForSeeMore;
@property(retain, nonatomic) UILabel *labelForSeeMore; // @synthesize labelForSeeMore=_labelForSeeMore;
@property(retain, nonatomic) UIImageView *imgForSlideSeeMore; // @synthesize imgForSlideSeeMore=_imgForSlideSeeMore;
@property(retain, nonatomic) UILabel *labelForSlideSeeMore; // @synthesize labelForSlideSeeMore=_labelForSlideSeeMore;
@property(retain, nonatomic) TGScrollView *scrollViewForRankItem; // @synthesize scrollViewForRankItem=_scrollViewForRankItem;
@property(retain, nonatomic) UIImageView *viewForRightLine; // @synthesize viewForRightLine=_viewForRightLine;
@property(retain, nonatomic) UIImageView *viewForLeftLine; // @synthesize viewForLeftLine=_viewForLeftLine;
@property(retain, nonatomic) UILabel *labelForRankTitle; // @synthesize labelForRankTitle=_labelForRankTitle;
@property(retain, nonatomic) NVModelBaseWorthRank *rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)tgScrollView:(id)arg1 didSelectRowAtIndex:(unsigned long long)arg2;
- (void)tgScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tgScrollViewDidScroll:(id)arg1;
- (id)tgScrollView:(id)arg1 viewForRowAtIndex:(unsigned long long)arg2;
- (long long)numberOfRowsPerPageInTGScrollView:(id)arg1;
- (long long)numberOfRowsInTGScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

