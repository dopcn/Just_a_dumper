//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber;

@interface mparam_customizationpackagelist_bin : NVQueryParameter
{
    NSNumber *_limit;
    NSNumber *_start;
    NSNumber *_priceto;
    NSNumber *_pricefrom;
    NSNumber *_productcategoryid;
    NSNumber *_shopid;
}

@property(copy, nonatomic) NSNumber *shopid; // @synthesize shopid=_shopid;
@property(copy, nonatomic) NSNumber *productcategoryid; // @synthesize productcategoryid=_productcategoryid;
@property(copy, nonatomic) NSNumber *pricefrom; // @synthesize pricefrom=_pricefrom;
@property(copy, nonatomic) NSNumber *priceto; // @synthesize priceto=_priceto;
@property(copy, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(copy, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
- (void).cxx_destruct;

@end

