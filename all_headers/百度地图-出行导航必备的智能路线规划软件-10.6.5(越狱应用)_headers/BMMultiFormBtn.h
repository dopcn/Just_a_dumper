//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaiDubutton;

@interface BMMultiFormBtn : UIView
{
    BaiDubutton *_eventControl;
    UIView *_background;
}

@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) BaiDubutton *eventControl; // @synthesize eventControl=_eventControl;
- (void).cxx_destruct;
- (void)updatePercent:(double)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

