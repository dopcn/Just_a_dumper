//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseHotelOrderPoiInfo : NVBaseModel
{
    long long _poiId;
    NSString *_poiName;
    NSString *_address;
    NSArray *_phoneList;
    double _latitude;
    double _longitude;
    NSString *_detailUrl;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSArray *phoneList; // @synthesize phoneList=_phoneList;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) long long poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;

@end

