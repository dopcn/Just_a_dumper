//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NTESNBALCommonCollectionViewCell.h"

@class NSDictionary, NTESNBALNewsCommentTagView, NTESNBVideo, UIImageView, UILabel;

@interface NTESNBALVideoListCell : NTESNBALCommonCollectionViewCell
{
    struct CGSize _lastSize;
    NSDictionary *_videoInfoDic;
    NTESNBVideo *_videoModel;
    UIImageView *_coverImageView;
    UILabel *_vTitleLabel;
    UIImageView *_timeIcon;
    UILabel *_timeLabel;
    UIImageView *_pvIcon;
    UILabel *_pvLabel;
    NTESNBALNewsCommentTagView *_commentTagView;
    UIImageView *_playIcon;
}

@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) NTESNBALNewsCommentTagView *commentTagView; // @synthesize commentTagView=_commentTagView;
@property(retain, nonatomic) UILabel *pvLabel; // @synthesize pvLabel=_pvLabel;
@property(retain, nonatomic) UIImageView *pvIcon; // @synthesize pvIcon=_pvIcon;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *timeIcon; // @synthesize timeIcon=_timeIcon;
@property(retain, nonatomic) UILabel *vTitleLabel; // @synthesize vTitleLabel=_vTitleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(readonly, nonatomic) NTESNBVideo *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NSDictionary *videoInfoDic; // @synthesize videoInfoDic=_videoInfoDic;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (id)timeStrWithDuration:(id)arg1;
- (void)applyThemeProperty;
- (void)updateCellWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

