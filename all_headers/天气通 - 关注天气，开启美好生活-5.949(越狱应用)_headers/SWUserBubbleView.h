//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, NSTimer, UIColor, UIImageView, UILabel;

@interface SWUserBubbleView : UIControl
{
    CDUnknownBlockType _clickBlock;
    long long _location;
    NSString *_bubbleIdentifer;
    UIImageView *_arrowImgView;
    UIImageView *_bgImgView;
    UIImageView *_iconImageView;
    UILabel *_infoLabel;
    UIColor *_extraColor;
    double _locationMergin;
    NSTimer *_timer;
}

+ (id)pollutionBubbleWithClick:(CDUnknownBlockType)arg1;
+ (id)fifteenBubbleWithClick:(CDUnknownBlockType)arg1;
+ (id)forecastRainBubbleWithClick:(CDUnknownBlockType)arg1;
+ (id)addCityBubbleWithClick:(CDUnknownBlockType)arg1;
+ (id)bubbleViewWithLocation:(long long)arg1 mergin:(double)arg2 title:(id)arg3 extraSubTitle:(id)arg4 icon:(id)arg5 clickHandler:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double locationMergin; // @synthesize locationMergin=_locationMergin;
@property(retain, nonatomic) UIColor *extraColor; // @synthesize extraColor=_extraColor;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) NSString *bubbleIdentifer; // @synthesize bubbleIdentifer=_bubbleIdentifer;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)removeBubble;
- (void)bubbleViewClicked:(id)arg1;
- (void)timerOut:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)boldFont;
- (id)normalFont;
- (void)loadTitles:(id)arg1 extra:(id)arg2 icon:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

