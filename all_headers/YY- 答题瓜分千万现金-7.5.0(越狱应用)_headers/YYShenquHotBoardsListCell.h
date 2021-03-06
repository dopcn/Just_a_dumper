//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYShenquBaseCell.h"

@class UIImageView, UILabel;

@interface YYShenquHotBoardsListCell : YYShenquBaseCell
{
    _Bool _isHiddenRank;
    UILabel *_shenquRecommendedLabel;
    UIImageView *_hotRankIcon;
    UIImageView *_hotFlagIcon;
    UILabel *_shenquRankLabel;
    UIImageView *_rankChangeIcon;
    UILabel *_rankChangeLabel;
    UIImageView *_rankChangeBg;
    UIImageView *_rankChangeSpecialIcon;
}

@property(nonatomic) _Bool isHiddenRank; // @synthesize isHiddenRank=_isHiddenRank;
@property(nonatomic) __weak UIImageView *rankChangeSpecialIcon; // @synthesize rankChangeSpecialIcon=_rankChangeSpecialIcon;
@property(retain, nonatomic) UIImageView *rankChangeBg; // @synthesize rankChangeBg=_rankChangeBg;
@property(nonatomic) __weak UILabel *rankChangeLabel; // @synthesize rankChangeLabel=_rankChangeLabel;
@property(nonatomic) __weak UIImageView *rankChangeIcon; // @synthesize rankChangeIcon=_rankChangeIcon;
@property(nonatomic) __weak UILabel *shenquRankLabel; // @synthesize shenquRankLabel=_shenquRankLabel;
@property(nonatomic) __weak UIImageView *hotFlagIcon; // @synthesize hotFlagIcon=_hotFlagIcon;
@property(nonatomic) __weak UIImageView *hotRankIcon; // @synthesize hotRankIcon=_hotRankIcon;
@property(nonatomic) __weak UILabel *shenquRecommendedLabel; // @synthesize shenquRecommendedLabel=_shenquRecommendedLabel;
- (void).cxx_destruct;
- (id)getHotTopRankIconAddress:(unsigned long long)arg1;
- (void)displayNoTop3Icon:(unsigned long long)arg1;
- (void)dealloc;
- (void)displayIcon:(unsigned long long)arg1;
- (void)hiddenIcon;
- (void)setRankChange:(long long)arg1;
- (void)setIsHiddenRankAndShare:(_Bool)arg1;
- (void)updateCellWithShenquDetailInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

