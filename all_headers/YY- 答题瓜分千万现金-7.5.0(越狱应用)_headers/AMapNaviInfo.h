//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class AMapNaviPoint, NSString;

@interface AMapNaviInfo : NSObject <NSCopying, NSCoding>
{
    long long _naviMode;
    long long _iconType;
    long long _carDirection;
    AMapNaviPoint *_carCoordinate;
    NSString *_currentRoadName;
    NSString *_nextRoadName;
    long long _routeRemainDistance;
    long long _routeRemainTime;
    long long _currentSegmentIndex;
    long long _segmentRemainDistance;
    long long _segmentRemainTime;
    long long _currentLinkIndex;
    long long _cameraIndex;
    long long _cameraDistance;
    long long _cameraType;
    AMapNaviPoint *_cameraCoordinate;
    long long _cameraLimitSpeed;
    long long _serviceAreaDistance;
    long long _currentPointIndex;
}

@property(nonatomic) long long currentPointIndex; // @synthesize currentPointIndex=_currentPointIndex;
@property(nonatomic) long long serviceAreaDistance; // @synthesize serviceAreaDistance=_serviceAreaDistance;
@property(nonatomic) long long cameraLimitSpeed; // @synthesize cameraLimitSpeed=_cameraLimitSpeed;
@property(retain, nonatomic) AMapNaviPoint *cameraCoordinate; // @synthesize cameraCoordinate=_cameraCoordinate;
@property(nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
@property(nonatomic) long long cameraDistance; // @synthesize cameraDistance=_cameraDistance;
@property(nonatomic) long long cameraIndex; // @synthesize cameraIndex=_cameraIndex;
@property(nonatomic) long long currentLinkIndex; // @synthesize currentLinkIndex=_currentLinkIndex;
@property(nonatomic) long long segmentRemainTime; // @synthesize segmentRemainTime=_segmentRemainTime;
@property(nonatomic) long long segmentRemainDistance; // @synthesize segmentRemainDistance=_segmentRemainDistance;
@property(nonatomic) long long currentSegmentIndex; // @synthesize currentSegmentIndex=_currentSegmentIndex;
@property(nonatomic) long long routeRemainTime; // @synthesize routeRemainTime=_routeRemainTime;
@property(nonatomic) long long routeRemainDistance; // @synthesize routeRemainDistance=_routeRemainDistance;
@property(retain, nonatomic) NSString *nextRoadName; // @synthesize nextRoadName=_nextRoadName;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(retain, nonatomic) AMapNaviPoint *carCoordinate; // @synthesize carCoordinate=_carCoordinate;
@property(nonatomic) long long carDirection; // @synthesize carDirection=_carDirection;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) long long naviMode; // @synthesize naviMode=_naviMode;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

