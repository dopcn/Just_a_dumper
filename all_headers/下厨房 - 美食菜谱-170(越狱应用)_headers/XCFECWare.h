//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XCFBaseModel.h"

@class NSNumber, NSString, XCFWebImageModel;

@interface XCFECWare : XCFBaseModel
{
    NSString *_unitName;
    NSString *_skuName;
    NSString *_skuID;
    NSString *_unitID;
    unsigned long long _number;
    XCFWebImageModel *_image;
    NSString *_url;
    NSNumber *_directSale;
}

@property(copy, nonatomic) NSNumber *directSale; // @synthesize directSale=_directSale;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) XCFWebImageModel *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *unitID; // @synthesize unitID=_unitID;
@property(copy, nonatomic) NSString *skuID; // @synthesize skuID=_skuID;
@property(copy, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(copy, nonatomic) NSString *unitName; // @synthesize unitName=_unitName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)proprietaryTradingNameWithAttributes:(id)arg1;

@end

