//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface MCRentBusItemModel : JSONModel
{
    int _car_type_id;
    NSString *_price_desc;
    NSString *_coupon_desc;
    NSString *_detail_desc;
    NSString *_car_type_name;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *car_type_name; // @synthesize car_type_name=_car_type_name;
@property(nonatomic) int car_type_id; // @synthesize car_type_id=_car_type_id;
@property(retain, nonatomic) NSString *detail_desc; // @synthesize detail_desc=_detail_desc;
@property(retain, nonatomic) NSString *coupon_desc; // @synthesize coupon_desc=_coupon_desc;
@property(retain, nonatomic) NSString *price_desc; // @synthesize price_desc=_price_desc;
- (void).cxx_destruct;

@end

