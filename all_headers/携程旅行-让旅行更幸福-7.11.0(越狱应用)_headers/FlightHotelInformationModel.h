//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightHotelInformationModel : CTBusinessBean
{
    long long hotelID;
    long long roomID;
    PriceType *price;
    int passengerID;
    NSString *hotelParamString;
    PriceType *discountAmount;
    PriceType *printPrice;
    int roomCount;
    NSString *checkInDate;
    NSString *checkOutDate;
}

@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate;
@property(nonatomic) int roomCount; // @synthesize roomCount;
@property(retain, nonatomic) PriceType *printPrice; // @synthesize printPrice;
@property(retain, nonatomic) PriceType *discountAmount; // @synthesize discountAmount;
@property(copy, nonatomic) NSString *hotelParamString; // @synthesize hotelParamString;
@property(nonatomic) int passengerID; // @synthesize passengerID;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(nonatomic) long long roomID; // @synthesize roomID;
@property(nonatomic) long long hotelID; // @synthesize hotelID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

