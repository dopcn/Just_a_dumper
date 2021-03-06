//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPVolumeView.h>

#import "UIPopoverControllerDelegate-Protocol.h"

@class NSString, SOHUVideoPlayerController, UIButton;
@protocol SHAirplayControlDelegate;

@interface SHAirplayControl : MPVolumeView <UIPopoverControllerDelegate>
{
    double _top;
    double _left;
    double _bottom;
    double _right;
    _Bool _supportAirPlay;
    UIButton *_airplayButton;
    unsigned long long _popoverArrowDirection;
    id <SHAirplayControlDelegate> _delegate;
    UIButton *_originAirplayBtn;
    SOHUVideoPlayerController *_videoPlayer;
}

+ (_Bool)isAirplayPopoverControllerShowing;
+ (_Bool)isSupportAirPlayVideo;
@property(retain, nonatomic) SOHUVideoPlayerController *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIButton *originAirplayBtn; // @synthesize originAirplayBtn=_originAirplayBtn;
@property(nonatomic) __weak id <SHAirplayControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(retain, nonatomic) UIButton *airplayButton; // @synthesize airplayButton=_airplayButton;
@property(nonatomic) _Bool supportAirPlay; // @synthesize supportAirPlay=_supportAirPlay;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)enlargeTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (void)setAirplayButtonSelect:(_Bool)arg1;
- (void)playerAirPlayVideoActiveDidChange:(id)arg1;
- (void)onAirplay:(id)arg1;
@property(nonatomic) _Bool enabled;
- (void)showAirplayEvent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)activeAirplyButton:(_Bool)arg1;
- (void)layoutAirplayButton;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithAirPlayButton:(id)arg1 withPopoverArrowDirection:(unsigned long long)arg2;
- (void)setMPVolumeView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withPopoverArrowDirection:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

