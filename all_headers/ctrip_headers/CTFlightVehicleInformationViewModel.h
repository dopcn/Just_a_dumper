//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTViewModel.h"

@class FlightXProductCouponInformationModel, NSString, VehicleInformationModel;

@interface CTFlightVehicleInformationViewModel : CTViewModel
{
    _Bool _hasCheckPassengerCount;
    int _busCount;
    VehicleInformationModel *_vehicleModel;
    NSString *_couponLabelContent;
    FlightXProductCouponInformationModel *_couponInfo;
}

+ (id)getVehicleInforViewModelWithConfigInfo:(id)arg1;
@property(nonatomic) int busCount; // @synthesize busCount=_busCount;
@property(retain, nonatomic) FlightXProductCouponInformationModel *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) NSString *couponLabelContent; // @synthesize couponLabelContent=_couponLabelContent;
@property(nonatomic) _Bool hasCheckPassengerCount; // @synthesize hasCheckPassengerCount=_hasCheckPassengerCount;
@property(retain, nonatomic) VehicleInformationModel *vehicleModel; // @synthesize vehicleModel=_vehicleModel;
- (void).cxx_destruct;
- (long long)changePriceTypeWithPrice:(id)arg1;
- (id)getTimeHeaderStr;
- (int)getDefaultSelectedTime;
- (_Bool)isBusSupport;
- (_Bool)canUseCoupon;
- (_Bool)needControlPassengerNum;
- (_Bool)hasTimeInfo;
- (id)getTagArray;
- (int)vehicleType;

@end

