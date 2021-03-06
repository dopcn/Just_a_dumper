//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface AMapNaviStatisticsInfo : NSObject <NSCopying, NSCoding>
{
    long long _actualDrivenTime;
    long long _actualDrivenDisance;
    long long _averageSpeed;
    long long _highestSpeed;
    long long _overspeedCount;
    long long _rerouteCount;
    long long _brakesCount;
    long long _slowTime;
    long long _startSecond;
    long long _normalRouteTime;
    long long _estimateTime;
    long long _estimateDistance;
}

@property(nonatomic) long long estimateDistance; // @synthesize estimateDistance=_estimateDistance;
@property(nonatomic) long long estimateTime; // @synthesize estimateTime=_estimateTime;
@property(nonatomic) long long normalRouteTime; // @synthesize normalRouteTime=_normalRouteTime;
@property(nonatomic) long long startSecond; // @synthesize startSecond=_startSecond;
@property(nonatomic) long long slowTime; // @synthesize slowTime=_slowTime;
@property(nonatomic) long long brakesCount; // @synthesize brakesCount=_brakesCount;
@property(nonatomic) long long rerouteCount; // @synthesize rerouteCount=_rerouteCount;
@property(nonatomic) long long overspeedCount; // @synthesize overspeedCount=_overspeedCount;
@property(nonatomic) long long highestSpeed; // @synthesize highestSpeed=_highestSpeed;
@property(nonatomic) long long averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(nonatomic) long long actualDrivenDisance; // @synthesize actualDrivenDisance=_actualDrivenDisance;
@property(nonatomic) long long actualDrivenTime; // @synthesize actualDrivenTime=_actualDrivenTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

