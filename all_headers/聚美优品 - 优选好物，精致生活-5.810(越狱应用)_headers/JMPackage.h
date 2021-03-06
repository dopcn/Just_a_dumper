//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface JMPackage : NSObject
{
    _Bool _ifShowLogistic;
    _Bool _ifShowConfirm;
    NSString *_orderId;
    NSString *_shippingId;
    NSString *_shippingSystemId;
    NSString *_logisticId;
    NSString *_logisticTrackId;
    NSString *_skuId;
    NSString *_quantity;
    NSString *_status;
    NSString *_dealHashId;
    NSString *_shippingSystemName;
    NSString *_detailType;
    NSString *_logisticName;
    NSDictionary *_buttons;
    NSString *_shipping_title;
    NSMutableArray *_goodsArray;
    NSDictionary *_mDictionary;
}

@property(retain, nonatomic) NSDictionary *mDictionary; // @synthesize mDictionary=_mDictionary;
@property(nonatomic) _Bool ifShowConfirm; // @synthesize ifShowConfirm=_ifShowConfirm;
@property(nonatomic) _Bool ifShowLogistic; // @synthesize ifShowLogistic=_ifShowLogistic;
@property(retain, nonatomic) NSMutableArray *goodsArray; // @synthesize goodsArray=_goodsArray;
@property(copy, nonatomic) NSString *shipping_title; // @synthesize shipping_title=_shipping_title;
@property(copy, nonatomic) NSDictionary *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *logisticName; // @synthesize logisticName=_logisticName;
@property(copy, nonatomic) NSString *detailType; // @synthesize detailType=_detailType;
@property(copy, nonatomic) NSString *shippingSystemName; // @synthesize shippingSystemName=_shippingSystemName;
@property(copy, nonatomic) NSString *dealHashId; // @synthesize dealHashId=_dealHashId;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *logisticTrackId; // @synthesize logisticTrackId=_logisticTrackId;
@property(copy, nonatomic) NSString *logisticId; // @synthesize logisticId=_logisticId;
@property(copy, nonatomic) NSString *shippingSystemId; // @synthesize shippingSystemId=_shippingSystemId;
@property(copy, nonatomic) NSString *shippingId; // @synthesize shippingId=_shippingId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)parser:(id)arg1;
- (_Bool)getIsShowConfirmReceived;
- (_Bool)getIsShowLogistic;
- (id)getStatusDesc:(id)arg1;
- (id)init;

@end

