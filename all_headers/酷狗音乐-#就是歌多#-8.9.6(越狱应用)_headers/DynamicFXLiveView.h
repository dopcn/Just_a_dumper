//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, KTVOpusModel, KTVThemeLabel, UIImageView;

@interface DynamicFXLiveView : UIView
{
    KTVOpusModel *_opusModel;
    UIImageView *_roomImg;
    UIImageView *_liveImg;
    UIImageView *_playImg;
    KTVThemeLabel *_infolab;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) KTVThemeLabel *infolab; // @synthesize infolab=_infolab;
@property(retain, nonatomic) UIImageView *playImg; // @synthesize playImg=_playImg;
@property(retain, nonatomic) UIImageView *liveImg; // @synthesize liveImg=_liveImg;
@property(retain, nonatomic) UIImageView *roomImg; // @synthesize roomImg=_roomImg;
@property(retain, nonatomic) KTVOpusModel *opusModel; // @synthesize opusModel=_opusModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

