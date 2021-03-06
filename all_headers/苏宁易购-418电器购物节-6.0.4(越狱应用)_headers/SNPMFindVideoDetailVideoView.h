//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerItem, AVPlayerLayer, AVPlayerViewController, SNPMContentDTO, SNUIImageView;
@protocol SNPMFindVideoDetailVideoViewDelegate;

@interface SNPMFindVideoDetailVideoView : UIView
{
    id <SNPMFindVideoDetailVideoViewDelegate> _delegate;
    AVPlayerViewController *_playerVCtrler;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    SNUIImageView *_coverImgView;
    SNPMContentDTO *_contentDTO;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) SNPMContentDTO *contentDTO; // @synthesize contentDTO=_contentDTO;
@property(retain, nonatomic) SNUIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayerViewController *playerVCtrler; // @synthesize playerVCtrler=_playerVCtrler;
@property(nonatomic) __weak id <SNPMFindVideoDetailVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playFinished:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)exitFullScreen:(_Bool)arg1;
- (void)enterFullScreen:(_Bool)arg1;
- (void)updatePlayStatus:(long long)arg1;
- (void)refreshView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

