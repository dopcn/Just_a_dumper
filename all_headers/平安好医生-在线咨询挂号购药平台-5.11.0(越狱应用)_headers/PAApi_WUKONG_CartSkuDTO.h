//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAApi_WUKONG_CartSkuDTO : NSObject
{
    long long _available;
    long long _count;
    long long _origPrice;
    NSString *_factory;
    NSString *_img;
    NSString *_trace;
    long long _storeId;
    NSString *_name;
    NSString *_note;
    long long _price;
    long long _skuId;
    long long _spuId;
    NSString *_spec;
    long long _isPrescribed;
    long long _type;
    long long _subType;
    long long _status;
    long long _orderQty;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(nonatomic) long long orderQty; // @synthesize orderQty=_orderQty;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long isPrescribed; // @synthesize isPrescribed=_isPrescribed;
@property(retain, nonatomic) NSString *spec; // @synthesize spec=_spec;
@property(nonatomic) long long spuId; // @synthesize spuId=_spuId;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSString *trace; // @synthesize trace=_trace;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *factory; // @synthesize factory=_factory;
@property(nonatomic) long long origPrice; // @synthesize origPrice=_origPrice;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long available; // @synthesize available=_available;
- (void).cxx_destruct;
- (id)serialize;

@end

