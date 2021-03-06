//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UILabel;

@interface UCVideoLoadDataResultView : UIView
{
    UIView *_addSuperView;
    double _topOffset;
    NSString *_text;
    NSTimer *_timer;
    UIView *_backgroundView;
    UILabel *_textLabel;
}

+ (void)showWithText:(id)arg1 inView:(id)arg2 top:(double)arg3;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(retain, nonatomic) UIView *addSuperView; // @synthesize addSuperView=_addSuperView;
- (void).cxx_destruct;
- (void)hidden;
- (void)show;
- (void)didThemeChange;
- (void)custSizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

