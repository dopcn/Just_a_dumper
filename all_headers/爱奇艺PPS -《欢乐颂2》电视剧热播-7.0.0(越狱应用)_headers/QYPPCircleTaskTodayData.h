//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSArray, NSString;
@protocol Optional, Optional><QYPPCircleTaskTodaySingleData><ConvertOnDemand;

@interface QYPPCircleTaskTodayData : QYPPJsonData
{
    NSString<Optional> *_score;
    NSString<Optional> *_complete;
    NSString<Optional> *_signDays;
    NSString<Optional> *_multiple;
    NSArray<Optional><QYPPCircleTaskTodaySingleData><ConvertOnDemand> *_list;
}

@property(retain, nonatomic) NSArray<Optional><QYPPCircleTaskTodaySingleData><ConvertOnDemand> *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString<Optional> *multiple; // @synthesize multiple=_multiple;
@property(retain, nonatomic) NSString<Optional> *signDays; // @synthesize signDays=_signDays;
@property(retain, nonatomic) NSString<Optional> *complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSString<Optional> *score; // @synthesize score=_score;
- (void).cxx_destruct;

@end

