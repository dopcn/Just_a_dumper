//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class GrayLabel;

@interface NMCountdownView : LTMBaseView
{
    int _secondCount;
    GrayLabel *_h1Label;
    GrayLabel *_h2Label;
    GrayLabel *_m1Label;
    GrayLabel *_m2Label;
    GrayLabel *_s1Label;
    GrayLabel *_s2Label;
}

@property(nonatomic) int secondCount; // @synthesize secondCount=_secondCount;
@property(retain, nonatomic) GrayLabel *s2Label; // @synthesize s2Label=_s2Label;
@property(retain, nonatomic) GrayLabel *s1Label; // @synthesize s1Label=_s1Label;
@property(retain, nonatomic) GrayLabel *m2Label; // @synthesize m2Label=_m2Label;
@property(retain, nonatomic) GrayLabel *m1Label; // @synthesize m1Label=_m1Label;
@property(retain, nonatomic) GrayLabel *h2Label; // @synthesize h2Label=_h2Label;
@property(retain, nonatomic) GrayLabel *h1Label; // @synthesize h1Label=_h1Label;
- (void).cxx_destruct;
- (void)timerFireMethod:(id)arg1;
- (void)dealloc;
- (void)setTime:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

