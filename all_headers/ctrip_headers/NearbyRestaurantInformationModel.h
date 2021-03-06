//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface NearbyRestaurantInformationModel : CTBusinessBean
{
    long long _poiId;
    NSString *_poiName;
    NSString *_image;
    NSString *_hotelName;
    NSString *_score;
    NSString *_star;
    NSString *_tags;
    NSString *_distance;
    NSString *_averagePrice;
    NSString *_recommendDescription;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *recommendDescription; // @synthesize recommendDescription=_recommendDescription;
@property(copy, nonatomic) NSString *averagePrice; // @synthesize averagePrice=_averagePrice;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *star; // @synthesize star=_star;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) long long poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

