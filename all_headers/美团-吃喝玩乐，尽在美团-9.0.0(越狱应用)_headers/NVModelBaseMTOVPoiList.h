//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseMTOVPoiList : NVBaseModel
{
    NSString *_iUrl;
    NSString *_bookAvailable;
    NSString *_campaignTag;
    double _lat;
    double _lng;
    long long _poiId;
    NSString *_name;
    double _avgPrice;
    double _avgScore;
    NSString *_frontImg;
    NSArray *_paySummarys;
    NSString *_recommend;
    NSString *_areaName;
    NSString *_cateName;
    NSArray *_serviceIcons;
    NSString *_shortIntro;
    NSString *_distance;
    NSString *_price;
    NSString *_localName;
    NSString *_distance2Landmark;
    NSString *_tradeStatistics;
    NSString *_status;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *tradeStatistics; // @synthesize tradeStatistics=_tradeStatistics;
@property(copy, nonatomic) NSString *distance2Landmark; // @synthesize distance2Landmark=_distance2Landmark;
@property(copy, nonatomic) NSString *localName; // @synthesize localName=_localName;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *shortIntro; // @synthesize shortIntro=_shortIntro;
@property(retain, nonatomic) NSArray *serviceIcons; // @synthesize serviceIcons=_serviceIcons;
@property(copy, nonatomic) NSString *cateName; // @synthesize cateName=_cateName;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(copy, nonatomic) NSString *recommend; // @synthesize recommend=_recommend;
@property(retain, nonatomic) NSArray *paySummarys; // @synthesize paySummarys=_paySummarys;
@property(copy, nonatomic) NSString *frontImg; // @synthesize frontImg=_frontImg;
@property(nonatomic) double avgScore; // @synthesize avgScore=_avgScore;
@property(nonatomic) double avgPrice; // @synthesize avgPrice=_avgPrice;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long poiId; // @synthesize poiId=_poiId;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *campaignTag; // @synthesize campaignTag=_campaignTag;
@property(copy, nonatomic) NSString *bookAvailable; // @synthesize bookAvailable=_bookAvailable;
@property(copy, nonatomic) NSString *iUrl; // @synthesize iUrl=_iUrl;
- (void).cxx_destruct;

@end

