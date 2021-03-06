//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWIBaseTableViewCell.h"

@class NSTimer, RACCommand, TWIImageView, UIButton, UIView;

@interface TWIHolidayHeaderADCell : TWIBaseTableViewCell
{
    RACCommand *_closeButtonClickCommand;
    TWIImageView *_ADImageView;
    NSTimer *_ADCloseTimer;
    UIButton *_closeButton;
    UIView *_naviBarPlaceHolderView;
    long long _closeTimeInterval;
    unsigned long long _lastStyle;
}

+ (double)lengthFromBigADTopToBannerTop;
+ (double)estimateBannerCellHeight;
@property(nonatomic) unsigned long long lastStyle; // @synthesize lastStyle=_lastStyle;
@property(nonatomic) long long closeTimeInterval; // @synthesize closeTimeInterval=_closeTimeInterval;
@property(retain, nonatomic) UIView *naviBarPlaceHolderView; // @synthesize naviBarPlaceHolderView=_naviBarPlaceHolderView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSTimer *ADCloseTimer; // @synthesize ADCloseTimer=_ADCloseTimer;
@property(retain, nonatomic) TWIImageView *ADImageView; // @synthesize ADImageView=_ADImageView;
@property(retain, nonatomic) RACCommand *closeButtonClickCommand; // @synthesize closeButtonClickCommand=_closeButtonClickCommand;
- (void).cxx_destruct;
- (void)timerHandler;
- (void)bindWithViewModel:(id)arg1;
- (void)_remakeUIForADAndBannerStyle;
- (void)_remakeUIForBannerOnlyStyle;
- (void)switchToStyle:(unsigned long long)arg1;
- (void)_setupUI;
- (void)startDisappearAnimationWithDuration:(double)arg1;

@end

