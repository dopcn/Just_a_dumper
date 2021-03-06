//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseItem.h"

@class NSNumber, NSString;

@interface PDMallListDetailItem : PDBaseItem
{
    NSNumber *_itemId;
    NSString *_productId;
    NSString *_name;
    NSString *_desc;
    NSString *_picUrl;
    NSNumber *_price;
    NSString *_priceStr;
    NSNumber *_dctPercent;
    NSNumber *_dctValue;
    NSNumber *_recommFlag;
    NSNumber *_isSpecialPrice;
    NSString *_specialPriceDesc;
}

@property(retain, nonatomic) NSString *specialPriceDesc; // @synthesize specialPriceDesc=_specialPriceDesc;
@property(retain, nonatomic) NSNumber *isSpecialPrice; // @synthesize isSpecialPrice=_isSpecialPrice;
@property(retain, nonatomic) NSNumber *recommFlag; // @synthesize recommFlag=_recommFlag;
@property(retain, nonatomic) NSNumber *dctValue; // @synthesize dctValue=_dctValue;
@property(retain, nonatomic) NSNumber *dctPercent; // @synthesize dctPercent=_dctPercent;
@property(retain, nonatomic) NSString *priceStr; // @synthesize priceStr=_priceStr;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)copy;
- (void)dealloc;
- (id)init;

@end

