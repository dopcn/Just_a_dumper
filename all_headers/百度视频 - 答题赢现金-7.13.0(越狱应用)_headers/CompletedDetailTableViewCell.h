//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BDEpisodeData, BDImageView, DownloadTaskInfo, UIImageView, UILabel, UIView;

@interface CompletedDetailTableViewCell : UITableViewCell
{
    UIView *tempBackgroundView;
    UILabel *_titleLabel;
    UILabel *_stateLabel;
    DownloadTaskInfo *_downloadInfo;
    UILabel *_watchLabel;
    UIImageView *_leftIconImg;
    BDImageView *_iconimage;
    UIImageView *_iconDefaultImage;
    BDEpisodeData *_downloadLocEpisode;
}

@property(retain, nonatomic) BDEpisodeData *downloadLocEpisode; // @synthesize downloadLocEpisode=_downloadLocEpisode;
@property(retain, nonatomic) UIImageView *iconDefaultImage; // @synthesize iconDefaultImage=_iconDefaultImage;
@property(retain, nonatomic) BDImageView *iconimage; // @synthesize iconimage=_iconimage;
@property(retain, nonatomic) UIImageView *leftIconImg; // @synthesize leftIconImg=_leftIconImg;
@property(retain, nonatomic) UILabel *watchLabel; // @synthesize watchLabel=_watchLabel;
@property(retain, nonatomic) DownloadTaskInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)ClickCmdButton;
- (void)initCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

