//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EntNetworkBaseObject.h"

#import "IEntResultResponse-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface PayOneAnchorScheduleRsp : EntNetworkBaseObject <IEntResultResponse>
{
    long long _result;
    unsigned long long _aid;
    NSString *_srvDesc;
    NSArray *_schedules;
    NSDictionary *_extendInfo;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) NSArray *schedules; // @synthesize schedules=_schedules;
@property(copy, nonatomic) NSString *srvDesc; // @synthesize srvDesc=_srvDesc;
@property(nonatomic) unsigned long long aid; // @synthesize aid=_aid;
@property(nonatomic) long long result; // @synthesize result=_result;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long ext_now;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *msg;
@property(readonly) Class superclass;

@end

