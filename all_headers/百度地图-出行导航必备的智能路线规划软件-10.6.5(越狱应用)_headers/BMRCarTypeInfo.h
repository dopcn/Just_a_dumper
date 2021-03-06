//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSArray, NSString;
@protocol BMRPartnerInfo;

@interface BMRCarTypeInfo : JSONModel
{
    NSString *_car_type_id;
    NSString *_car_type_name;
    NSString *_car_type_pic;
    NSString *_car_type_desc;
    NSArray<BMRPartnerInfo> *_partner_list;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<BMRPartnerInfo> *partner_list; // @synthesize partner_list=_partner_list;
@property(retain, nonatomic) NSString *car_type_desc; // @synthesize car_type_desc=_car_type_desc;
@property(retain, nonatomic) NSString *car_type_pic; // @synthesize car_type_pic=_car_type_pic;
@property(retain, nonatomic) NSString *car_type_name; // @synthesize car_type_name=_car_type_name;
@property(retain, nonatomic) NSString *car_type_id; // @synthesize car_type_id=_car_type_id;
- (void).cxx_destruct;

@end

