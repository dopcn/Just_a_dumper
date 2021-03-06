//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol JMSimpleCardModel;

@interface JMSimpleRedCouponItemModel : JSONModel
{
    NSString *_useable_num;
    NSArray<JMSimpleCardModel> *_useable_cards;
    NSString *_disable_num;
    NSArray<JMSimpleCardModel> *_disable_cards;
    NSString *_notice;
    NSString *_first_notice;
    NSString *_is_default;
    NSString *_discount_price_desc;
    NSString *_discount_price;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *discount_price; // @synthesize discount_price=_discount_price;
@property(copy, nonatomic) NSString *discount_price_desc; // @synthesize discount_price_desc=_discount_price_desc;
@property(copy, nonatomic) NSString *is_default; // @synthesize is_default=_is_default;
@property(copy, nonatomic) NSString *first_notice; // @synthesize first_notice=_first_notice;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSArray<JMSimpleCardModel> *disable_cards; // @synthesize disable_cards=_disable_cards;
@property(copy, nonatomic) NSString *disable_num; // @synthesize disable_num=_disable_num;
@property(retain, nonatomic) NSArray<JMSimpleCardModel> *useable_cards; // @synthesize useable_cards=_useable_cards;
@property(copy, nonatomic) NSString *useable_num; // @synthesize useable_num=_useable_num;
- (void).cxx_destruct;

@end

