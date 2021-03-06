//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString, UIColor, UIFont;

@interface CTFlightClockInfoViewModel : CTViewModel
{
    NSString *_clockFileName;
    NSString *_title;
    NSString *_content;
    double _clock2Title;
    double _title2Info;
    double _clock2Info;
    double _maxWidth;
    UIColor *_textColor;
    UIColor *_backGroundColor;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *backGroundColor; // @synthesize backGroundColor=_backGroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double clock2Info; // @synthesize clock2Info=_clock2Info;
@property(nonatomic) double title2Info; // @synthesize title2Info=_title2Info;
@property(nonatomic) double clock2Title; // @synthesize clock2Title=_clock2Title;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *clockFileName; // @synthesize clockFileName=_clockFileName;
- (void).cxx_destruct;
- (id)init;

@end

