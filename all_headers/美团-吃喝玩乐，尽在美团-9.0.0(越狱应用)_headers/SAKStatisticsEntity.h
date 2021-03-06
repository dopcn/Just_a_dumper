//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKStatisticsObject.h"

@class NSString, SAKStatisticsEnvironment;

@interface SAKStatisticsEntity : SAKStatisticsObject
{
    NSString *_entityID;
    long long _priority;
    NSString *_bid;
    NSString *_cid;
    NSString *_category;
    SAKStatisticsEnvironment *_environment;
    SAKStatisticsObject *_event;
    unsigned long long _packageFailedTimes;
}

@property(nonatomic) unsigned long long packageFailedTimes; // @synthesize packageFailedTimes=_packageFailedTimes;
@property(copy, nonatomic) SAKStatisticsObject *event; // @synthesize event=_event;
@property(copy, nonatomic) SAKStatisticsEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *entityID; // @synthesize entityID=_entityID;
- (void).cxx_destruct;
- (void)tryCheckValidity;
- (id)init;

@end

