//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMLWBaseModel.h"

@class BMLWRiderInfoModel, NSString;

@interface BMLWOrderDetailDistributionInfoModel : BMLWBaseModel
{
    long long _businessType;
    BMLWRiderInfoModel *_rider;
    long long _pickupTime;
    double _distance;
    NSString *_formattedTime;
}

@property(retain, nonatomic) NSString *formattedTime; // @synthesize formattedTime=_formattedTime;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) long long pickupTime; // @synthesize pickupTime=_pickupTime;
@property(retain, nonatomic) BMLWRiderInfoModel *rider; // @synthesize rider=_rider;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (void)setPickupTimeWithJSONObject:(id)arg1;

@end

