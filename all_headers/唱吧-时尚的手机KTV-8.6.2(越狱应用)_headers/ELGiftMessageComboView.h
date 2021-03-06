//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CABasicAnimation, CADisplayLink, CAKeyframeAnimation, ELComboSectorMaskView, ELGift, ELGiftMessageComboBackGroundView, ELSong, UIImageView;

@interface ELGiftMessageComboView : UIControl
{
    unsigned long long _status;
    ELGift *_comboGift;
    ELSong *_comboSong;
    ELComboSectorMaskView *_comboOrangeCircleView;
    UIImageView *_rotationImageView;
    double _duration;
    CADisplayLink *_displayLink;
    double _beginTime;
    ELGiftMessageComboBackGroundView *_comboBallView;
    CABasicAnimation *_pointRotationAnimation;
    CAKeyframeAnimation *_scaleAnimation;
}

@property(retain, nonatomic) CAKeyframeAnimation *scaleAnimation; // @synthesize scaleAnimation=_scaleAnimation;
@property(retain, nonatomic) CABasicAnimation *pointRotationAnimation; // @synthesize pointRotationAnimation=_pointRotationAnimation;
@property(retain, nonatomic) ELGiftMessageComboBackGroundView *comboBallView; // @synthesize comboBallView=_comboBallView;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *rotationImageView; // @synthesize rotationImageView=_rotationImageView;
@property(retain, nonatomic) ELComboSectorMaskView *comboOrangeCircleView; // @synthesize comboOrangeCircleView=_comboOrangeCircleView;
@property(retain, nonatomic) ELSong *comboSong; // @synthesize comboSong=_comboSong;
@property(retain, nonatomic) ELGift *comboGift; // @synthesize comboGift=_comboGift;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dealloc;
- (void)displayLinkAction:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)dismiss;
- (void)show;
- (void)stopGiftMessageComboView;
- (void)startTimeAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

