//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseWeather : NVBaseModel
{
    _Bool _isNight;
    NSString *_guessUrl;
    NSString *_guessName;
    NSString *_ico;
    NSString *_temperature;
    NSString *_title;
    NSString *_desc;
    NSString *_festival;
    NSString *_backpic;
}

+ (id)metaInfo;
@property(nonatomic) _Bool isNight; // @synthesize isNight=_isNight;
@property(copy, nonatomic) NSString *backpic; // @synthesize backpic=_backpic;
@property(copy, nonatomic) NSString *festival; // @synthesize festival=_festival;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property(copy, nonatomic) NSString *ico; // @synthesize ico=_ico;
@property(copy, nonatomic) NSString *guessName; // @synthesize guessName=_guessName;
@property(copy, nonatomic) NSString *guessUrl; // @synthesize guessUrl=_guessUrl;
- (void).cxx_destruct;

@end

