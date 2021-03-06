//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDRadialProgressView, NSTimer, UILabel;

@interface YYChannelGiftProgressView : UIView
{
    MDRadialProgressView *_progressView;
    UILabel *_label;
    NSTimer *_timer;
    unsigned long long _timeTotal;
    CDUnknownBlockType _didProgressFinish;
    CDUnknownBlockType _didSecondsTick;
}

@property(copy, nonatomic) CDUnknownBlockType didSecondsTick; // @synthesize didSecondsTick=_didSecondsTick;
@property(copy, nonatomic) CDUnknownBlockType didProgressFinish; // @synthesize didProgressFinish=_didProgressFinish;
- (void).cxx_destruct;
- (void)dispose;
- (void)setDateText:(id)arg1;
- (void)setIncSecs:(unsigned int)arg1 remainSecs:(unsigned int)arg2;
- (void)progressStartupWithTime:(unsigned long long)arg1 thisTime:(unsigned long long)arg2;
- (void)tickFunctioin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

