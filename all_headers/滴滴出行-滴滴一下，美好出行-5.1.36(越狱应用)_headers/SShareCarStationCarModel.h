//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface SShareCarStationCarModel : JSONModel
{
    NSString<Optional> *_car_id;
    NSString<Optional> *_plate_no;
    NSString<Optional> *_type;
    NSString<Optional> *_color;
    NSString<Optional> *_seat_num;
    NSString<Optional> *_car_pic;
    NSString<Optional> *_rem_power;
    NSString<Optional> *_charge_rule;
    NSString<Optional> *_car_brand;
    NSString<Optional> *_rateLevel;
}

@property(retain, nonatomic) NSString<Optional> *rateLevel; // @synthesize rateLevel=_rateLevel;
@property(retain, nonatomic) NSString<Optional> *car_brand; // @synthesize car_brand=_car_brand;
@property(retain, nonatomic) NSString<Optional> *charge_rule; // @synthesize charge_rule=_charge_rule;
@property(retain, nonatomic) NSString<Optional> *rem_power; // @synthesize rem_power=_rem_power;
@property(retain, nonatomic) NSString<Optional> *car_pic; // @synthesize car_pic=_car_pic;
@property(retain, nonatomic) NSString<Optional> *seat_num; // @synthesize seat_num=_seat_num;
@property(retain, nonatomic) NSString<Optional> *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *plate_no; // @synthesize plate_no=_plate_no;
@property(retain, nonatomic) NSString<Optional> *car_id; // @synthesize car_id=_car_id;
- (void).cxx_destruct;

@end

