//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MTETicketCityListEntity : NSObject
{
    NSString *_address;
    NSString *_cinemaId;
    NSString *_cinemaName;
    NSString *_fixedEticketDesc;
    NSString *_fixedCouponAnnounce;
    NSArray *_etickets;
    NSArray *_coupons;
}

+ (id)mtdOptional_getArrayTypePropertiesMappingDic;
@property(copy, nonatomic) NSArray *coupons; // @synthesize coupons=_coupons;
@property(copy, nonatomic) NSArray *etickets; // @synthesize etickets=_etickets;
@property(copy, nonatomic) NSString *fixedCouponAnnounce; // @synthesize fixedCouponAnnounce=_fixedCouponAnnounce;
@property(copy, nonatomic) NSString *fixedEticketDesc; // @synthesize fixedEticketDesc=_fixedEticketDesc;
@property(copy, nonatomic) NSString *cinemaName; // @synthesize cinemaName=_cinemaName;
@property(copy, nonatomic) NSString *cinemaId; // @synthesize cinemaId=_cinemaId;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;

@end

