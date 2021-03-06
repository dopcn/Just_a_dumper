//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BBAReaderViewController, NSDateFormatter, NSString, NSTimer;

@interface WKTXTReaderReadingStateView : UIView
{
    NSDateFormatter *_formatter;
    NSTimer *_timer;
    _Bool shouldRending;
    double batteryPercent;
    double readingPercent;
    NSString *_titleString;
    NSString *_readTimeString;
    BBAReaderViewController *_readerVC;
}

+ (double)bottomBarHeight;
+ (double)topBarHeight;
@property(nonatomic) BBAReaderViewController *readerVC; // @synthesize readerVC=_readerVC;
@property(retain, nonatomic) NSString *readTimeString; // @synthesize readTimeString=_readTimeString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) _Bool shouldRending; // @synthesize shouldRending;
@property(nonatomic) double readingPercent; // @synthesize readingPercent;
@property(nonatomic) double batteryPercent; // @synthesize batteryPercent;
- (void)drawRect:(struct CGRect)arg1;
- (void)upadteBataryAndPercent:(double)arg1;
- (void)updateView;
- (void)updateReadTime:(id)arg1;
- (void)updateStateViewTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)refreshStatusBar;
- (void)cleanBeforeRelease;
- (void)dealloc;
- (id)initWithReaderVC:(id)arg1;

@end

