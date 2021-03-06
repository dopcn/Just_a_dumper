//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVModelBaseResultList.h"

@class NSArray, NSString;

@interface NVModelBaseWeddingProductList : NVModelBaseResultList
{
    NSString *_title;
    long long _listStyleType;
    NSArray *_textBeforePrice;
    NSString *_redirectSchema;
    long long _picWidth;
    long long _picHeight;
    long long _productCategoryId;
    NSArray *_priceNav;
    NSArray *_topNav;
    long long _available;
    NSArray *_crawlProductList;
    NSArray *_productCategoryList;
    NSArray *_list;
    long long _coverStyleType;
    NSString *_categoryDesc;
    long long _type;
}

+ (id)metaInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(nonatomic) long long coverStyleType; // @synthesize coverStyleType=_coverStyleType;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSArray *productCategoryList; // @synthesize productCategoryList=_productCategoryList;
@property(retain, nonatomic) NSArray *crawlProductList; // @synthesize crawlProductList=_crawlProductList;
@property(nonatomic) long long available; // @synthesize available=_available;
@property(retain, nonatomic) NSArray *topNav; // @synthesize topNav=_topNav;
@property(retain, nonatomic) NSArray *priceNav; // @synthesize priceNav=_priceNav;
@property(nonatomic) long long productCategoryId; // @synthesize productCategoryId=_productCategoryId;
@property(nonatomic) long long picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) long long picWidth; // @synthesize picWidth=_picWidth;
@property(copy, nonatomic) NSString *redirectSchema; // @synthesize redirectSchema=_redirectSchema;
@property(retain, nonatomic) NSArray *textBeforePrice; // @synthesize textBeforePrice=_textBeforePrice;
@property(nonatomic) long long listStyleType; // @synthesize listStyleType=_listStyleType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

