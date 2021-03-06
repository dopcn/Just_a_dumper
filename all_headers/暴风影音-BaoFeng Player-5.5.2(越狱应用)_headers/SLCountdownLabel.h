//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class BFAlertView, NSDate, NSDateComponents, NSTimer;
@protocol SLCountdownDelegate;

@interface SLCountdownLabel : UILabel
{
    BFAlertView *alert;
    _Bool fromSetting;
    int numSeconds;
    NSTimer *timer;
    id <SLCountdownDelegate> _delegate;
    NSDate *_expirationDate;
    NSDateComponents *_countdown;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDateComponents *countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) id <SLCountdownDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fromSetting; // @synthesize fromSetting;
@property(nonatomic) int numSeconds; // @synthesize numSeconds;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
- (id)currentTimeString;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateLabel;
- (void)defaultLabel;
- (void)cancelCountdown;
- (void)restartCountdown;
- (void)setTime:(int)arg1;
- (void)dealloc;

@end

