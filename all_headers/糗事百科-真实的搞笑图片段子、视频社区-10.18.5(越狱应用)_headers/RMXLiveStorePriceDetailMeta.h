//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YYModel-Protocol.h"

@class NSAttributedString, NSNumber, NSString;

@interface RMXLiveStorePriceDetailMeta : NSObject <YYModel>
{
    _Bool _selected;
    NSString *_goodId;
    NSNumber *_days;
    NSString *_dayDesc;
    NSString *_originalPrice;
    NSString *_discountPrice;
    NSAttributedString *_priceDesc;
    NSString *_discountDesc;
}

+ (id)modelCustomPropertyMapper;
+ (id)modelWithDict:(id)arg1 goodId:(id)arg2;
@property(copy, nonatomic) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSAttributedString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(copy, nonatomic) NSString *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(copy, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(copy, nonatomic) NSString *dayDesc; // @synthesize dayDesc=_dayDesc;
@property(retain, nonatomic) NSNumber *days; // @synthesize days=_days;
@property(copy, nonatomic) NSString *goodId; // @synthesize goodId=_goodId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)makePurchaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)attributedPriceDesc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

