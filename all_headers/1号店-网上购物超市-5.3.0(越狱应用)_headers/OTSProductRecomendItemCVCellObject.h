//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSProductBaseCVCellObject.h"

@class NSMutableAttributedString, NSNumber, NSString, RACCommand;

@interface OTSProductRecomendItemCVCellObject : OTSProductBaseCVCellObject
{
    _Bool _isShowAddToCartBtn;
    _Bool _isEntryData;
    NSNumber *_skuid;
    NSString *_productPictureUrl;
    NSString *_productTitle;
    NSMutableAttributedString *_productPrice;
    RACCommand *_addtoCartCommand;
    NSString *_reqsig;
    NSString *_source;
    NSString *_expid;
}

@property(retain, nonatomic) NSString *expid; // @synthesize expid=_expid;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *reqsig; // @synthesize reqsig=_reqsig;
@property(retain, nonatomic) RACCommand *addtoCartCommand; // @synthesize addtoCartCommand=_addtoCartCommand;
@property(nonatomic) _Bool isEntryData; // @synthesize isEntryData=_isEntryData;
@property(nonatomic) _Bool isShowAddToCartBtn; // @synthesize isShowAddToCartBtn=_isShowAddToCartBtn;
@property(retain, nonatomic) NSMutableAttributedString *productPrice; // @synthesize productPrice=_productPrice;
@property(retain, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(retain, nonatomic) NSString *productPictureUrl; // @synthesize productPictureUrl=_productPictureUrl;
@property(retain, nonatomic) NSNumber *skuid; // @synthesize skuid=_skuid;
- (void).cxx_destruct;
- (id)getPriceStrWithPrice:(id)arg1;
- (id)initWithCVCellClassStr:(id)arg1 andAccurateProductVO:(id)arg2;

@end

