//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "WBGifPalyerDelegate-Protocol.h"

@class NSString, WBAdGifPlayer, WBAdImage;
@protocol WBAdImageViewDelegate;

@interface WBAdImageAdView : UIImageView <WBGifPalyerDelegate>
{
    WBAdGifPlayer *gifPlayer;
    _Bool _animationEnable;
    int _format;
    NSString *_imagePath;
    id <WBAdImageViewDelegate> _delegate;
    WBAdImage *_gifImage;
}

@property(retain, nonatomic) WBAdImage *gifImage; // @synthesize gifImage=_gifImage;
@property(nonatomic) int format; // @synthesize format=_format;
@property(nonatomic) __weak id <WBAdImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic, getter=isAnimationEnable) _Bool animationEnable; // @synthesize animationEnable=_animationEnable;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gifPlayerStartPlay:(id)arg1;
- (void)gifPlayerDidStopPlay:(id)arg1;
- (void)gifPlayer:(id)arg1 didUpdateImage:(id)arg2 index:(unsigned long long)arg3;
- (void)tryGifAnimation;
- (void)stopGifAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)pauseAnimation;
- (void)originalSetImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 new:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

