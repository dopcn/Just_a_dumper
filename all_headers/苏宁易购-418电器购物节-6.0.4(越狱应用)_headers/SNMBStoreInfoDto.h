//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SNMBStoreInfoDto : NSObject <NSCopying, NSCoding>
{
    _Bool _isNeedSplit;
    NSString *_addressNo;
    NSString *_provinceId;
    NSString *_provinceName;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_districtId;
    NSString *_districtName;
    NSString *_receiptName;
    NSString *_receiptPhone;
    NSString *_storeAddress;
    NSString *_storeName;
    NSString *_storeCode;
    NSString *_subReceiptPhone;
    NSString *_detailAddress;
    NSString *_defaultAddress;
    NSString *_pickupAddress;
    NSString *_jurstCode;
    NSString *_pickupSiteCode;
    NSString *_siteAddress;
    NSString *_siteName;
    NSString *_cPickupSite;
    NSString *_type;
    NSString *_chooseCenterPick;
    NSString *_siteX;
    NSString *_siteY;
    NSString *_openTime;
    NSString *_telPhone;
    double _distance;
    NSString *_telephone;
    NSString *_idNumber;
}

+ (double)LantitudeLongitudeDist:(double)arg1 other_Lat:(double)arg2 self_Lon:(double)arg3 self_Lat:(double)arg4;
+ (id)transformAddressInfoDTO:(id)arg1;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *telPhone; // @synthesize telPhone=_telPhone;
@property(copy, nonatomic) NSString *openTime; // @synthesize openTime=_openTime;
@property(copy, nonatomic) NSString *siteY; // @synthesize siteY=_siteY;
@property(copy, nonatomic) NSString *siteX; // @synthesize siteX=_siteX;
@property(copy, nonatomic) NSString *chooseCenterPick; // @synthesize chooseCenterPick=_chooseCenterPick;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *cPickupSite; // @synthesize cPickupSite=_cPickupSite;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(copy, nonatomic) NSString *siteAddress; // @synthesize siteAddress=_siteAddress;
@property(copy, nonatomic) NSString *pickupSiteCode; // @synthesize pickupSiteCode=_pickupSiteCode;
@property(copy, nonatomic) NSString *jurstCode; // @synthesize jurstCode=_jurstCode;
@property(copy, nonatomic) NSString *pickupAddress; // @synthesize pickupAddress=_pickupAddress;
@property(copy, nonatomic) NSString *defaultAddress; // @synthesize defaultAddress=_defaultAddress;
@property(nonatomic) _Bool isNeedSplit; // @synthesize isNeedSplit=_isNeedSplit;
@property(copy, nonatomic) NSString *detailAddress; // @synthesize detailAddress=_detailAddress;
@property(copy, nonatomic) NSString *subReceiptPhone; // @synthesize subReceiptPhone=_subReceiptPhone;
@property(copy, nonatomic) NSString *storeCode; // @synthesize storeCode=_storeCode;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSString *storeAddress; // @synthesize storeAddress=_storeAddress;
@property(copy, nonatomic) NSString *receiptPhone; // @synthesize receiptPhone=_receiptPhone;
@property(copy, nonatomic) NSString *receiptName; // @synthesize receiptName=_receiptName;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(copy, nonatomic) NSString *districtId; // @synthesize districtId=_districtId;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *provinceId; // @synthesize provinceId=_provinceId;
@property(copy, nonatomic) NSString *addressNo; // @synthesize addressNo=_addressNo;
- (void).cxx_destruct;
- (double)distanceBetweenLocationLat:(double)arg1 lon:(double)arg2;
- (double)distanceBetweenLocationLat:(double)arg1 lon:(double)arg2 other_lat:(double)arg3 other_lon:(double)arg4;
- (id)transformStoreBuyToAddressInfoDTO;
- (id)transformToAddressInfoDTO;
- (void)encodeNearbySpotInfoFromDictionary:(id)arg1;
- (void)encodeLastPickUpInfoFromDictionary:(id)arg1;
- (void)emptyProvinceCityDistrictTown;
- (void)encodeFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

