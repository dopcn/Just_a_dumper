//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMBaseEntity.h"

@class NSDictionary, NSString;

@interface CMNewStreamerEntity : CMBaseEntity
{
    long long _autoId;
    long long _level;
    long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_picUrl;
    NSString *_actionValue;
    long long _actionType;
    NSDictionary *_eventData;
    NSDictionary *_eventAction;
    NSString *_startDateTime;
    NSString *_endDateTime;
    NSString *_routerUrl;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *routerUrl; // @synthesize routerUrl=_routerUrl;
@property(copy, nonatomic) NSString *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(copy, nonatomic) NSString *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(retain, nonatomic) NSDictionary *eventAction; // @synthesize eventAction=_eventAction;
@property(retain, nonatomic) NSDictionary *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long autoId; // @synthesize autoId=_autoId;
- (void).cxx_destruct;

@end

