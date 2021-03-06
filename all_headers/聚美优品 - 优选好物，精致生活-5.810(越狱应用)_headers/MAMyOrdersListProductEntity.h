//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol MAMyOrdersListChildInfoEntity;

@interface MAMyOrdersListProductEntity : JSONModel
{
    _Bool _showSuit;
    NSString *_name;
    NSString *_dealShortName;
    NSString *_attributeSelections;
    NSString *_price;
    NSString *_settlementPrice;
    NSString *_quantity;
    NSString *_imageUrl;
    NSString *_url;
    NSString *_hashId;
    NSString *_productId;
    NSString *_deposit;
    NSString *_balanceDue;
    NSString *_stockNote;
    NSArray<MAMyOrdersListChildInfoEntity> *_childInfo;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSArray<MAMyOrdersListChildInfoEntity> *childInfo; // @synthesize childInfo=_childInfo;
@property(nonatomic) _Bool showSuit; // @synthesize showSuit=_showSuit;
@property(copy, nonatomic) NSString *stockNote; // @synthesize stockNote=_stockNote;
@property(copy, nonatomic) NSString *balanceDue; // @synthesize balanceDue=_balanceDue;
@property(copy, nonatomic) NSString *deposit; // @synthesize deposit=_deposit;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *hashId; // @synthesize hashId=_hashId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *settlementPrice; // @synthesize settlementPrice=_settlementPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *attributeSelections; // @synthesize attributeSelections=_attributeSelections;
@property(copy, nonatomic) NSString *dealShortName; // @synthesize dealShortName=_dealShortName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

