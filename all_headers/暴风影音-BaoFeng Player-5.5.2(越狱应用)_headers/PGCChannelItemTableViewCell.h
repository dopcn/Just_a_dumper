//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PGCChannelItem, PurePlayerView, UIButton, UIImageView, UILabel, UIView;
@protocol PGCChannelItemCellDelegate;

@interface PGCChannelItemTableViewCell : UITableViewCell
{
    PGCChannelItem *_channelItem;
    PurePlayerView *_purePlayer;
    id <PGCChannelItemCellDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIView *_bottomInfoView;
    UILabel *_pgcerNameLabel;
    UIImageView *_coverImageView;
    UIImageView *_pgcerImageView;
    UIButton *_shareButton;
    UIButton *_playButton;
    UILabel *_durationLabel;
}

@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIImageView *pgcerImageView; // @synthesize pgcerImageView=_pgcerImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UILabel *pgcerNameLabel; // @synthesize pgcerNameLabel=_pgcerNameLabel;
@property(retain, nonatomic) UIView *bottomInfoView; // @synthesize bottomInfoView=_bottomInfoView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) id <PGCChannelItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PurePlayerView *purePlayer; // @synthesize purePlayer=_purePlayer;
@property(retain, nonatomic) PGCChannelItem *channelItem; // @synthesize channelItem=_channelItem;
- (void)shareButtonAction:(id)arg1;
- (void)headImageAction:(id)arg1;
- (void)playButtonAction:(id)arg1;
- (void)stopCurrentPlayer;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

