//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDateComponents, UILabel;

@interface MTCCountDownView : UIView
{
    _Bool _isShowHourView;
    NSDateComponents *_remainingTime;
    UILabel *_countDownLabel;
    NSArray *_countDownDigitalViews;
    UILabel *_hourColonLabel;
    UILabel *_minuteColonLabel;
}

@property(nonatomic) _Bool isShowHourView; // @synthesize isShowHourView=_isShowHourView;
@property(retain, nonatomic) UILabel *minuteColonLabel; // @synthesize minuteColonLabel=_minuteColonLabel;
@property(retain, nonatomic) UILabel *hourColonLabel; // @synthesize hourColonLabel=_hourColonLabel;
@property(copy, nonatomic) NSArray *countDownDigitalViews; // @synthesize countDownDigitalViews=_countDownDigitalViews;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) NSDateComponents *remainingTime; // @synthesize remainingTime=_remainingTime;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

