//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVModelBaseDotBase.h"

@class NSString;

@interface NVModelBasePromoRecItem : NVModelBaseDotBase
{
    _Bool _isDelete;
    NSString *_delItemInfo;
    long long _type;
    NSString *_tagBgColor;
    long long _category_Id;
    NSString *_discount;
    NSString *_categoryTag;
    NSString *_picIcon;
    NSString *_movieTag;
    NSString *_promoTag;
    NSString *_recoWord;
    NSString *_score;
    long long _saleCount;
    NSString *_distance;
    NSString *_originPrice;
    NSString *_price;
    NSString *_subTitle;
    NSString *_title;
    NSString *_image;
    NSString *_uniqueId;
    NSString *_url;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(nonatomic) long long saleCount; // @synthesize saleCount=_saleCount;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *recoWord; // @synthesize recoWord=_recoWord;
@property(copy, nonatomic) NSString *promoTag; // @synthesize promoTag=_promoTag;
@property(copy, nonatomic) NSString *movieTag; // @synthesize movieTag=_movieTag;
@property(copy, nonatomic) NSString *picIcon; // @synthesize picIcon=_picIcon;
@property(copy, nonatomic) NSString *categoryTag; // @synthesize categoryTag=_categoryTag;
@property(copy, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(nonatomic) long long category_Id; // @synthesize category_Id=_category_Id;
@property(copy, nonatomic) NSString *tagBgColor; // @synthesize tagBgColor=_tagBgColor;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *delItemInfo; // @synthesize delItemInfo=_delItemInfo;
- (void).cxx_destruct;

@end

