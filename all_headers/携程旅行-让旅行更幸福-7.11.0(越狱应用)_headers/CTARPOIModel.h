//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSString;

@interface CTARPOIModel : NSObject
{
    int _status;
    CLLocation *_objectLocation;
    double _poiID;
    double _lBSActivityID;
    NSString *_showName;
    NSString *_showPic;
    double _longitude;
    double _latitude;
    NSString *_uuid;
    NSString *_poiInfo;
    NSString *_dataExtend;
}

@property(copy, nonatomic) NSString *dataExtend; // @synthesize dataExtend=_dataExtend;
@property(copy, nonatomic) NSString *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *showPic; // @synthesize showPic=_showPic;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(nonatomic) double lBSActivityID; // @synthesize lBSActivityID=_lBSActivityID;
@property(nonatomic) double poiID; // @synthesize poiID=_poiID;
@property(retain, nonatomic) CLLocation *objectLocation; // @synthesize objectLocation=_objectLocation;
- (void).cxx_destruct;

@end

