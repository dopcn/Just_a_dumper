//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightIntlPassengerSaleInformationModel : CTBusinessBean
{
    int passengerType;
    int minCount;
    int maxCount;
    int unitType;
    int promotionUnit;
    PriceType *price;
    NSString *packageSubTitle;
    NSString *descKey;
    NSString *extendParams;
    _Bool isUnDefault;
    int flightIndex;
    int segmentNo;
}

@property(nonatomic) int segmentNo; // @synthesize segmentNo;
@property(nonatomic) int flightIndex; // @synthesize flightIndex;
@property(nonatomic) _Bool isUnDefault; // @synthesize isUnDefault;
@property(copy, nonatomic) NSString *extendParams; // @synthesize extendParams;
@property(copy, nonatomic) NSString *descKey; // @synthesize descKey;
@property(copy, nonatomic) NSString *packageSubTitle; // @synthesize packageSubTitle;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(nonatomic) int promotionUnit; // @synthesize promotionUnit;
@property(nonatomic) int unitType; // @synthesize unitType;
@property(nonatomic) int maxCount; // @synthesize maxCount;
@property(nonatomic) int minCount; // @synthesize minCount;
@property(nonatomic) int passengerType; // @synthesize passengerType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

