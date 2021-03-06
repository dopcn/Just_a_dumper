//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSURL, UGCVideoView, UIImage;

@interface UGCAddVideoPlayerCell : UITableViewCell
{
    NSURL *_posterImageUrl;
    UIImage *_posterImage;
    UGCVideoView *_playerView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UGCVideoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(retain, nonatomic) NSURL *posterImageUrl; // @synthesize posterImageUrl=_posterImageUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *videoUrl;
- (void)replayVideo;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

