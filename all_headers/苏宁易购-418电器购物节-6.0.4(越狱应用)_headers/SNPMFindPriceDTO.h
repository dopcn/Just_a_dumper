//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNPMFindPriceDTO : NSObject
{
    NSString *__id;
    NSString *_imageUrl;
    NSString *_productCode;
    NSString *_vendorCode;
    NSString *_productName;
    NSString *_productPrice;
    NSString *_refPrice;
    NSString *_snPrice;
    NSString *_status;
    NSString *_priceType;
}

+ (id)parser:(id)arg1;
@property(retain, nonatomic) NSString *priceType; // @synthesize priceType=_priceType;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *snPrice; // @synthesize snPrice=_snPrice;
@property(copy, nonatomic) NSString *refPrice; // @synthesize refPrice=_refPrice;
@property(copy, nonatomic) NSString *productPrice; // @synthesize productPrice=_productPrice;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *vendorCode; // @synthesize vendorCode=_vendorCode;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;

@end

