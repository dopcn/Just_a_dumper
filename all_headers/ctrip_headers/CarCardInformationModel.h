//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class CTSBasicCoordinateModel, NSMutableArray, NSString;

@interface CarCardInformationModel : CTBusinessBean
{
    _Bool _isOverseasPickupLocationOfGS;
    int _type;
    int _usingCityId;
    int _orderStatusStyle;
    long long _orderId;
    NSString *_orderStatusName;
    NSString *_title;
    NSString *_usingCityName;
    NSString *_pickupAddress;
    NSString *_pickupAirportAddress;
    NSString *_takeOffAddress;
    CTSBasicCoordinateModel *_pickupLocationModel;
    NSString *_usingTime;
    NSString *_usingEndTime;
    NSString *_usingTimeZone;
    NSString *_displayedDateTime;
    NSString *_vendorName;
    NSString *_vendorLogo;
    NSString *_vendorTel;
    NSString *_vehicleType;
    NSString *_vehicleTypeLogo;
    NSString *_driverName;
    NSString *_driverPhoneNumber;
    NSString *_carNumber;
    NSString *_carBrand;
    NSString *_carColor;
    NSString *_duration;
    NSString *_orderDetailUrl;
    NSString *_payUrl;
    NSMutableArray *_operationList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *operationList; // @synthesize operationList=_operationList;
@property(nonatomic) int orderStatusStyle; // @synthesize orderStatusStyle=_orderStatusStyle;
@property(copy, nonatomic) NSString *payUrl; // @synthesize payUrl=_payUrl;
@property(copy, nonatomic) NSString *orderDetailUrl; // @synthesize orderDetailUrl=_orderDetailUrl;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *carColor; // @synthesize carColor=_carColor;
@property(copy, nonatomic) NSString *carBrand; // @synthesize carBrand=_carBrand;
@property(copy, nonatomic) NSString *carNumber; // @synthesize carNumber=_carNumber;
@property(copy, nonatomic) NSString *driverPhoneNumber; // @synthesize driverPhoneNumber=_driverPhoneNumber;
@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(copy, nonatomic) NSString *vehicleTypeLogo; // @synthesize vehicleTypeLogo=_vehicleTypeLogo;
@property(copy, nonatomic) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property(copy, nonatomic) NSString *vendorTel; // @synthesize vendorTel=_vendorTel;
@property(copy, nonatomic) NSString *vendorLogo; // @synthesize vendorLogo=_vendorLogo;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *displayedDateTime; // @synthesize displayedDateTime=_displayedDateTime;
@property(copy, nonatomic) NSString *usingTimeZone; // @synthesize usingTimeZone=_usingTimeZone;
@property(copy, nonatomic) NSString *usingEndTime; // @synthesize usingEndTime=_usingEndTime;
@property(copy, nonatomic) NSString *usingTime; // @synthesize usingTime=_usingTime;
@property(nonatomic) _Bool isOverseasPickupLocationOfGS; // @synthesize isOverseasPickupLocationOfGS=_isOverseasPickupLocationOfGS;
@property(retain, nonatomic) CTSBasicCoordinateModel *pickupLocationModel; // @synthesize pickupLocationModel=_pickupLocationModel;
@property(copy, nonatomic) NSString *takeOffAddress; // @synthesize takeOffAddress=_takeOffAddress;
@property(copy, nonatomic) NSString *pickupAirportAddress; // @synthesize pickupAirportAddress=_pickupAirportAddress;
@property(copy, nonatomic) NSString *pickupAddress; // @synthesize pickupAddress=_pickupAddress;
@property(copy, nonatomic) NSString *usingCityName; // @synthesize usingCityName=_usingCityName;
@property(nonatomic) int usingCityId; // @synthesize usingCityId=_usingCityId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *orderStatusName; // @synthesize orderStatusName=_orderStatusName;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

