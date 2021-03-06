//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WMOrderRefundProductInfo : NSObject
{
    _Bool _hasRefund;
    NSString *_itemID;
    long long _skuID;
    NSString *_name;
    double _price;
    long long _count;
    long long _selectCount;
    long long _currentCount;
    double _boxCount;
    double _boxPrice;
    double _originPrice;
    double _refundPrice;
    NSURL *_labelUrl;
    NSURL *_foodPicUrl;
    NSString *_refundDesc;
    NSArray *_foodAttrList;
}

@property(retain, nonatomic) NSArray *foodAttrList; // @synthesize foodAttrList=_foodAttrList;
@property(copy, nonatomic) NSString *refundDesc; // @synthesize refundDesc=_refundDesc;
@property(nonatomic) _Bool hasRefund; // @synthesize hasRefund=_hasRefund;
@property(retain, nonatomic) NSURL *foodPicUrl; // @synthesize foodPicUrl=_foodPicUrl;
@property(retain, nonatomic) NSURL *labelUrl; // @synthesize labelUrl=_labelUrl;
@property(nonatomic) double refundPrice; // @synthesize refundPrice=_refundPrice;
@property(nonatomic) double originPrice; // @synthesize originPrice=_originPrice;
@property(nonatomic) double boxPrice; // @synthesize boxPrice=_boxPrice;
@property(nonatomic) double boxCount; // @synthesize boxCount=_boxCount;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) long long selectCount; // @synthesize selectCount=_selectCount;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long skuID; // @synthesize skuID=_skuID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)getFoodAttrString;
- (id)toJSONDictionaryForSubmit;
- (id)initWithProductInfo:(id)arg1;

@end

