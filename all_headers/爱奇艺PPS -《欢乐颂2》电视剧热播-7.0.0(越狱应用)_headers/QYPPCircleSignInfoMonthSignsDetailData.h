//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSString;
@protocol Optional;

@interface QYPPCircleSignInfoMonthSignsDetailData : QYPPJsonData
{
    NSString<Optional> *_day;
    NSString<Optional> *_status;
    NSString<Optional> *_duration;
    NSString<Optional> *_signBeginTime;
    NSString<Optional> *_signEndTime;
}

@property(retain, nonatomic) NSString<Optional> *signEndTime; // @synthesize signEndTime=_signEndTime;
@property(retain, nonatomic) NSString<Optional> *signBeginTime; // @synthesize signBeginTime=_signBeginTime;
@property(retain, nonatomic) NSString<Optional> *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString<Optional> *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString<Optional> *day; // @synthesize day=_day;
- (void).cxx_destruct;

@end

