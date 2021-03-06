//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, PBFansVideoInfo, PPImageView, UIImageView, UILabel;

@interface PHLiveHorizontalCell : UICollectionViewCell
{
    _Bool _isPlaying;
    UILabel *_cornerLabel;
    UIImageView *_bluePayImageView;
    UILabel *_titleLabel;
    PPImageView *_iconImageView;
    UILabel *_payCountLabel;
    UILabel *_timeLabel;
    UIImageView *_sliderbgImageView;
    NSLayoutConstraint *_cornerLabelWidthConstraint;
    PBFansVideoInfo *_fansVideoInfo;
}

@property(retain, nonatomic) PBFansVideoInfo *fansVideoInfo; // @synthesize fansVideoInfo=_fansVideoInfo;
@property(nonatomic) __weak NSLayoutConstraint *cornerLabelWidthConstraint; // @synthesize cornerLabelWidthConstraint=_cornerLabelWidthConstraint;
@property(nonatomic) __weak UIImageView *sliderbgImageView; // @synthesize sliderbgImageView=_sliderbgImageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *payCountLabel; // @synthesize payCountLabel=_payCountLabel;
@property(nonatomic) __weak PPImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *bluePayImageView; // @synthesize bluePayImageView=_bluePayImageView;
@property(nonatomic) __weak UILabel *cornerLabel; // @synthesize cornerLabel=_cornerLabel;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupInitUI;
- (void)refreshCellWithInfo:(id)arg1;
- (void)awakeFromNib;

@end

