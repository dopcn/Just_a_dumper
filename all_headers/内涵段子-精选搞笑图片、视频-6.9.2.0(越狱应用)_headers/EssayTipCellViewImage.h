//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EssayTipCellViewBase.h"

@class EssayHeaderViewDislike, EssayMutiImageNewStyleTipView, EssayMutiImageTipView, EssayTipVideoPlayer, MutiImageTipViewMode, SSImageView, SSThemedView, UIImageView, UITapGestureRecognizer, UIVisualEffectView;

@interface EssayTipCellViewImage : EssayTipCellViewBase
{
    _Bool _tipVideoAutoPlay;
    SSThemedView *_bgView;
    EssayTipVideoPlayer *_videoPlayer;
    SSImageView *_contentImage;
    EssayMutiImageTipView *_mutiImageTipView;
    EssayMutiImageNewStyleTipView *_mutiImageTipViewNewStyle;
    MutiImageTipViewMode *_mutiImageTipViewMode;
    EssayHeaderViewDislike *_dislike;
    UIImageView *_coverBgBlurImage;
    UIVisualEffectView *_effectView;
    UITapGestureRecognizer *_tipGesture;
}

+ (double)getVideoDisplayHeightWithTipModel:(id)arg1 videoWidth:(double)arg2;
+ (_Bool)isWHScaleValidWithTipModel:(id)arg1;
+ (double)heightForTipModel:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tipGesture; // @synthesize tipGesture=_tipGesture;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIImageView *coverBgBlurImage; // @synthesize coverBgBlurImage=_coverBgBlurImage;
@property(retain, nonatomic) EssayHeaderViewDislike *dislike; // @synthesize dislike=_dislike;
@property(retain, nonatomic) MutiImageTipViewMode *mutiImageTipViewMode; // @synthesize mutiImageTipViewMode=_mutiImageTipViewMode;
@property(retain, nonatomic) EssayMutiImageNewStyleTipView *mutiImageTipViewNewStyle; // @synthesize mutiImageTipViewNewStyle=_mutiImageTipViewNewStyle;
@property(retain, nonatomic) EssayMutiImageTipView *mutiImageTipView; // @synthesize mutiImageTipView=_mutiImageTipView;
@property(retain, nonatomic) SSImageView *contentImage; // @synthesize contentImage=_contentImage;
@property(retain, nonatomic) EssayTipVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) SSThemedView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool tipVideoAutoPlay; // @synthesize tipVideoAutoPlay=_tipVideoAutoPlay;
- (void).cxx_destruct;
- (void)setMutePlay:(_Bool)arg1;
- (void)addCoverBgBlurImage;
- (void)dealloc;
- (void)didEndDisplay;
- (void)playOrPauseVideo:(_Bool)arg1;
- (void)stopTipVideo;
- (struct CGRect)videoPlayerConvertFrameTo:(id)arg1;
- (_Bool)isHaveVideo;
- (void)handleTipActionButton;
- (void)screenNameTapRecognizer:(id)arg1;
- (void)handleTipCellClick;
- (void)downLoadLabelAction:(id)arg1;
- (void)tipTapRecognizer:(id)arg1;
- (void)tipActionButtonAction:(id)arg1;
- (void)avatarButtonClicked:(id)arg1;
- (void)updateContentImage;
- (void)refreshUI;
- (void)setAllUILayout;
- (void)resetSubView;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

