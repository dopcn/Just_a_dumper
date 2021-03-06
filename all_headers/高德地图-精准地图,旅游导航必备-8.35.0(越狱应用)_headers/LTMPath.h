//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LTMPath : NSObject
{
    struct IVariantPath *_curNaviPath;
    struct DrivePathAccessor *_basePathAccessor;
    NSString *_displayRoadName;
}

+ (struct NMNaviSegmentNaviAction)naviActionWithPath:(struct IVariantPath *)arg1 withSegmentIndex:(long long)arg2;
+ (id)pathWithPathID:(unsigned long long)arg1 pathResult:(struct IPathResult *)arg2;
+ (id)ltmPathWithIPathPointer:(struct IVariantPath *)arg1;
@property(copy, nonatomic) NSString *displayRoadName; // @synthesize displayRoadName=_displayRoadName;
- (void).cxx_destruct;
- (long long)totalDistance;
- (id)roadForbiddenInfo;
- (id)roadFacilityInfo;
- (_Bool)grayPathShadowPoint:(struct PathShadowPoint)arg1 pathGrayInfo:(struct PathGrayInfo *)arg2;
- (void)resetGrayPathInfo;
- (int)passingCityCodeWtihSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (id)nextThreeSegmentRoadName;
- (id)stringWithString16:(const struct String16 *)arg1;
- (struct DriveLinkAccessor)linkGroup:(int)arg1 segIndex:(int)arg2;
- (id)location3DWithSegmentIndex:(long long)arg1 linkIndex:(long long)arg2;
- (id)locationsWithSegmentIndex:(long long)arg1 linkIndex:(long long)arg2;
- (id)cameraArray;
- (id)trafficLightArray;
- (id)coorFromSeg:(int)arg1 fromLink:(int)arg2 toSeg:(int)arg3 toLink:(int)arg4;
- (id)coorFromSeg:(int)arg1 fromLink:(int)arg2 fromPoint:(int)arg3 toSeg:(int)arg4 toLink:(int)arg5 toPoint:(int)arg6;
- (id)coorIs3D:(_Bool)arg1 fromSeg:(int)arg2 fromLink:(int)arg3 toSeg:(int)arg4 toLink:(int)arg5;
- (long long)distanceWithFromSeg:(int)arg1 fromLink:(int)arg2 toSeg:(int)arg3 toLink:(int)arg4;
- (long long)tollCost;
- (long long)groupSegmentNum;
- (id)segCoor:(int)arg1 turnCoor:(id)arg2;
- (struct NMNaviSegmentNaviAction)currentSegNaviAction;
- (int)currentRoadClass;
- (int)nextSegFirstLinkType;
- (int)nextSegFirstLinkFormway;
- (int)currentLinkFormway;
- (int)currentLinkType;
- (struct DriveLinkAccessor)currentLink;
- (long long)linkCountOfSegment:(const struct DriveSegmentAccessor *)arg1;
- (long long)segmentCount;
- (int)segNum;
- (unsigned long long)currentPathID;
- (int)travelTime;
- (int)routeLength;
- (struct DriveSegmentAccessor)segmentGroup:(int)arg1;
- (id)tbtNaviID;
- (_Bool)isOnline;
- (void)dealloc;
- (void)clearPath;
- (id)carNaviUtilityService;
- (_Bool)isValid;
- (struct IVariantPath *)currentPathPointer;
- (id)initWithIPathPointer:(struct IVariantPath *)arg1;
- (id)parseCarRestrictInfo;
- (id)stringWithString16:(struct String16)arg1;
- (id)matchAdcode:(id)arg1 adcode:(id)arg2;
- (id)parseAllCityCodeList;

@end

