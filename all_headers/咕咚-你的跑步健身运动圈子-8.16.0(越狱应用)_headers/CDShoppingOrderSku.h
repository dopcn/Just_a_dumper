//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface CDShoppingOrderSku : NSObject <NSCoding, NSCopying>
{
    NSString *_skuId;
    double _unitPrice;
    long long _count;
    NSString *_title;
    NSString *_descName;
    NSString *_goodsId;
    NSString *_skuDesc;
    NSString *_thumbnail;
    NSString *_goodsTitle;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *goodsTitle; // @synthesize goodsTitle=_goodsTitle;
@property(retain, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *skuDesc; // @synthesize skuDesc=_skuDesc;
@property(retain, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(retain, nonatomic) NSString *descName; // @synthesize descName=_descName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

