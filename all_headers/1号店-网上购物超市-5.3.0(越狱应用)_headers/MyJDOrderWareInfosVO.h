//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class NSNumber, NSString;

@interface MyJDOrderWareInfosVO : OTSValueObject
{
    NSNumber *_bulk;
    NSNumber *_cid;
    NSNumber *_discountPrice;
    NSNumber *_singleShouldPrice;
    NSString *_imgPath;
    NSNumber *_jiFen;
    NSNumber *_jingDouNum;
    NSNumber *_mainProductId;
    NSNumber *_memberPlus;
    NSString *_name;
    NSNumber *_num;
    NSNumber *_productId;
    NSNumber *_shopId;
    NSNumber *_state;
    NSNumber *_stock;
    NSString *_color;
    NSString *_wareUrl;
    NSNumber *_weight;
    NSString *_shopName;
}

@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *wareUrl; // @synthesize wareUrl=_wareUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) NSNumber *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSNumber *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSNumber *num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *memberPlus; // @synthesize memberPlus=_memberPlus;
@property(retain, nonatomic) NSNumber *mainProductId; // @synthesize mainProductId=_mainProductId;
@property(retain, nonatomic) NSNumber *jingDouNum; // @synthesize jingDouNum=_jingDouNum;
@property(retain, nonatomic) NSNumber *jiFen; // @synthesize jiFen=_jiFen;
@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(retain, nonatomic) NSNumber *singleShouldPrice; // @synthesize singleShouldPrice=_singleShouldPrice;
@property(retain, nonatomic) NSNumber *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(retain, nonatomic) NSNumber *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSNumber *bulk; // @synthesize bulk=_bulk;
- (void).cxx_destruct;

@end

