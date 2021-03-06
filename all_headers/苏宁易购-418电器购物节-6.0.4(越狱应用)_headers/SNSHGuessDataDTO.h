//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SNSHGuessDataDTO : NSObject
{
    NSString *_productId;
    NSString *_productCode;
    NSString *_productName;
    NSString *_productDescription;
    NSString *_productSpecialFlag;
    NSString *_productPrice;
    NSString *_supplierId;
    NSString *_percentage;
    NSString *_adURLString;
    NSString *_adProductImgURL;
    NSString *_handWork;
    NSString *_promotionType;
    NSString *_promotionInfo;
    NSString *_order;
    NSString *_pageUrl;
    NSString *_txtDes;
    NSString *_label;
    NSString *_sugGoodsPicUrl;
    NSString *_sugType;
    NSString *_catGroupName;
    NSMutableArray *_promotionList;
    NSString *_guessSceneIds;
    NSString *_refPrice;
    NSString *_hasVideo;
    NSString *_spread;
    NSString *_purchasesNumber;
    NSMutableDictionary *_extDict;
    NSString *_prodType;
    NSString *_shopCode;
    NSString *_shopType;
    NSString *_supplierCode;
    NSString *_activityId;
    NSString *_withePic;
    NSString *_picVersion;
    NSString *_linkType;
    NSString *_inputkey;
    NSString *_linkUrl;
    NSString *_modelFullId;
    NSString *_templateFullId;
    NSString *_activity_id;
    NSString *_appointNum;
    NSString *_bookedNum;
}

@property(retain, nonatomic) NSString *bookedNum; // @synthesize bookedNum=_bookedNum;
@property(retain, nonatomic) NSString *appointNum; // @synthesize appointNum=_appointNum;
@property(retain, nonatomic) NSString *activity_id; // @synthesize activity_id=_activity_id;
@property(retain, nonatomic) NSString *templateFullId; // @synthesize templateFullId=_templateFullId;
@property(retain, nonatomic) NSString *modelFullId; // @synthesize modelFullId=_modelFullId;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *inputkey; // @synthesize inputkey=_inputkey;
@property(retain, nonatomic) NSString *linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSString *picVersion; // @synthesize picVersion=_picVersion;
@property(retain, nonatomic) NSString *withePic; // @synthesize withePic=_withePic;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *supplierCode; // @synthesize supplierCode=_supplierCode;
@property(retain, nonatomic) NSString *shopType; // @synthesize shopType=_shopType;
@property(retain, nonatomic) NSString *shopCode; // @synthesize shopCode=_shopCode;
@property(retain, nonatomic) NSString *prodType; // @synthesize prodType=_prodType;
@property(retain, nonatomic) NSMutableDictionary *extDict; // @synthesize extDict=_extDict;
@property(retain, nonatomic) NSString *purchasesNumber; // @synthesize purchasesNumber=_purchasesNumber;
@property(retain, nonatomic) NSString *spread; // @synthesize spread=_spread;
@property(retain, nonatomic) NSString *hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) NSString *refPrice; // @synthesize refPrice=_refPrice;
@property(retain, nonatomic) NSString *guessSceneIds; // @synthesize guessSceneIds=_guessSceneIds;
@property(retain, nonatomic) NSMutableArray *promotionList; // @synthesize promotionList=_promotionList;
@property(retain, nonatomic) NSString *catGroupName; // @synthesize catGroupName=_catGroupName;
@property(retain, nonatomic) NSString *sugType; // @synthesize sugType=_sugType;
@property(retain, nonatomic) NSString *sugGoodsPicUrl; // @synthesize sugGoodsPicUrl=_sugGoodsPicUrl;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *txtDes; // @synthesize txtDes=_txtDes;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
@property(retain, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(retain, nonatomic) NSString *handWork; // @synthesize handWork=_handWork;
@property(retain, nonatomic) NSString *adProductImgURL; // @synthesize adProductImgURL=_adProductImgURL;
@property(retain, nonatomic) NSString *adURLString; // @synthesize adURLString=_adURLString;
@property(retain, nonatomic) NSString *percentage; // @synthesize percentage=_percentage;
@property(retain, nonatomic) NSString *supplierId; // @synthesize supplierId=_supplierId;
@property(retain, nonatomic) NSString *productPrice; // @synthesize productPrice=_productPrice;
@property(retain, nonatomic) NSString *productSpecialFlag; // @synthesize productSpecialFlag=_productSpecialFlag;
@property(retain, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (void)parseGuessYouLikeFrom:(id)arg1;
- (void)parseFromDict:(id)arg1;
- (id)getProductPicsize:(int)arg1;

@end

