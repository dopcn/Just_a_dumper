//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightRecommendHotelInformationModel : CTBusinessBean
{
    long long hotelID;
    NSString *name;
    NSString *enName;
    NSString *imageUrl;
    NSString *address;
    NSString *enAddress;
    NSMutableArray *nearByPOIsList;
    NSString *starLevel;
    NSString *remarkScore;
    int scoreCount;
    NSString *hotelLevelRmk;
    NSMutableArray *hotelTagList;
    NSMutableArray *roomInfoList;
    long long cityID;
    NSString *cityName;
    int xProductTypeID;
    _Bool isOversea;
}

@property(nonatomic) _Bool isOversea; // @synthesize isOversea;
@property(nonatomic) int xProductTypeID; // @synthesize xProductTypeID;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName;
@property(nonatomic) long long cityID; // @synthesize cityID;
@property(retain, nonatomic) NSMutableArray *roomInfoList; // @synthesize roomInfoList;
@property(retain, nonatomic) NSMutableArray *hotelTagList; // @synthesize hotelTagList;
@property(copy, nonatomic) NSString *hotelLevelRmk; // @synthesize hotelLevelRmk;
@property(nonatomic) int scoreCount; // @synthesize scoreCount;
@property(copy, nonatomic) NSString *remarkScore; // @synthesize remarkScore;
@property(copy, nonatomic) NSString *starLevel; // @synthesize starLevel;
@property(retain, nonatomic) NSMutableArray *nearByPOIsList; // @synthesize nearByPOIsList;
@property(copy, nonatomic) NSString *enAddress; // @synthesize enAddress;
@property(copy, nonatomic) NSString *address; // @synthesize address;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(copy, nonatomic) NSString *enName; // @synthesize enName;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) long long hotelID; // @synthesize hotelID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

