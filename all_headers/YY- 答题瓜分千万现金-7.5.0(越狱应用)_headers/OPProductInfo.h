//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface OPProductInfo : NSObject
{
    _Bool _isRecommend;
    int _refundPolicy;
    NSString *_productSeq;
    NSString *_skuSeq;
    NSArray *_pics;
    NSString *_productName;
    long long _productPrice;
    long long _expressFee;
    long long _ownerId;
}

+ (id)infoWithProductRecord:(const struct ProductRecord *)arg1;
@property(nonatomic) long long ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(nonatomic) int refundPolicy; // @synthesize refundPolicy=_refundPolicy;
@property(nonatomic) long long expressFee; // @synthesize expressFee=_expressFee;
@property(nonatomic) long long productPrice; // @synthesize productPrice=_productPrice;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) NSString *skuSeq; // @synthesize skuSeq=_skuSeq;
@property(retain, nonatomic) NSString *productSeq; // @synthesize productSeq=_productSeq;
- (void).cxx_destruct;

@end

