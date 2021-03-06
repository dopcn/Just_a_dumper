//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIMotionEffect;

@interface MPIAthenaMotionEffectView : UIView
{
    UIImageView *_backgroundImageView;
    UIImageView *_motionEffectImageView;
    UIMotionEffect *_effect;
}

@property(retain, nonatomic) UIMotionEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) UIImageView *motionEffectImageView; // @synthesize motionEffectImageView=_motionEffectImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)commonSetup;
- (void)stopMotionEffect;
- (void)startMotionEffect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

