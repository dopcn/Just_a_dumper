//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTOpDataBaseModel.h"

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface WMCMutualPullModel : TTOpDataBaseModel <NSCoding>
{
    long long _mode;
    NSString *_text;
    NSString *_buttonText;
    NSString *_picUrl;
    NSString *_buttonUrl;
    NSDate *_startTime;
    NSDate *_endTime;
    long long _period;
    NSString *_appMiniVerSchema;
    long long _pullAppVer;
}

@property(nonatomic) long long pullAppVer; // @synthesize pullAppVer=_pullAppVer;
@property(copy, nonatomic) NSString *appMiniVerSchema; // @synthesize appMiniVerSchema=_appMiniVerSchema;
@property(nonatomic) long long period; // @synthesize period=_period;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

