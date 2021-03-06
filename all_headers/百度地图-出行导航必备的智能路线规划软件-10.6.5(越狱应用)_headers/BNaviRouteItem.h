//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BNaviPoint, NSString;

@interface BNaviRouteItem : NSObject
{
    int eManeuverKind;
    int nLength;
    int nTime;
    int nShapePointIdx;
    int unOutLinkAngle;
    int _roadCondition;
    NSString *nextRoadName;
    BNaviPoint *crossPos;
    NSString *usInstructions;
}

@property(nonatomic) int roadCondition; // @synthesize roadCondition=_roadCondition;
@property(copy, nonatomic) NSString *usInstructions; // @synthesize usInstructions;
@property(nonatomic) int unOutLinkAngle; // @synthesize unOutLinkAngle;
@property(nonatomic) int nShapePointIdx; // @synthesize nShapePointIdx;
@property(retain, nonatomic) BNaviPoint *crossPos; // @synthesize crossPos;
@property(nonatomic) int nTime; // @synthesize nTime;
@property(nonatomic) int nLength; // @synthesize nLength;
@property(copy, nonatomic) NSString *nextRoadName; // @synthesize nextRoadName;
@property(nonatomic) int eManeuverKind; // @synthesize eManeuverKind;
- (void).cxx_destruct;
- (int)worstCaseInRoadConditionsTable:(struct _NE_RouteRoadCondition_t)arg1;
- (void)dealloc;
- (id)initWithNE_RouteInfoItem_t:(const struct _NE_RouteInfoItem_t *)arg1;

@end

