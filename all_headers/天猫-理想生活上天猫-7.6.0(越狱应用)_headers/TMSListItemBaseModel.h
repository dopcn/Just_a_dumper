//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TMSItemAbsoluteModel-Protocol.h"

@class NSArray, NSDictionary, NSString, TMShopInfoData;

@interface TMSListItemBaseModel : TBJSONModel <TMSItemAbsoluteModel>
{
    _Bool itemClicked;
    _Bool spuFlag;
    _Bool _exposure;
    _Bool _fromChaoshi;
    NSString *shopTitle;
    NSString *nick;
    NSString *itemId;
    NSString *userId;
    NSString *bucketId;
    NSString *groupId;
    NSString *skuID;
    NSDictionary *detailExtraParams;
    NSString *moduleName;
    NSString *topCat;
    NSString *cspuId;
    NSString *spuId;
    NSString *_picPathNew;
    NSString *_titleNew;
    NSArray *_commonIconList;
    NSArray *_topIconList;
    NSArray *_bottomIconList;
    NSString *_priceAsString;
    NSString *_originalPrice;
    NSString *_soldNew;
    NSString *_featureIcon;
    TMShopInfoData *_shopInfoData;
    NSString *_similarUrl;
}

+ (_Bool)strictMode;
@property(nonatomic) _Bool fromChaoshi; // @synthesize fromChaoshi=_fromChaoshi;
@property(copy, nonatomic) NSString *similarUrl; // @synthesize similarUrl=_similarUrl;
@property(retain, nonatomic) TMShopInfoData *shopInfoData; // @synthesize shopInfoData=_shopInfoData;
@property(copy, nonatomic) NSString *featureIcon; // @synthesize featureIcon=_featureIcon;
@property(copy, nonatomic) NSString *soldNew; // @synthesize soldNew=_soldNew;
@property(copy, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(copy, nonatomic) NSString *priceAsString; // @synthesize priceAsString=_priceAsString;
@property(copy, nonatomic) NSArray *bottomIconList; // @synthesize bottomIconList=_bottomIconList;
@property(copy, nonatomic) NSArray *topIconList; // @synthesize topIconList=_topIconList;
@property(copy, nonatomic) NSArray *commonIconList; // @synthesize commonIconList=_commonIconList;
@property(copy, nonatomic) NSString *titleNew; // @synthesize titleNew=_titleNew;
@property(copy, nonatomic) NSString *picPathNew; // @synthesize picPathNew=_picPathNew;
@property(nonatomic) _Bool exposure; // @synthesize exposure=_exposure;
@property(nonatomic) _Bool spuFlag; // @synthesize spuFlag;
@property(nonatomic) _Bool itemClicked; // @synthesize itemClicked;
@property(copy, nonatomic) NSString *spuId; // @synthesize spuId;
@property(copy, nonatomic) NSString *cspuId; // @synthesize cspuId;
@property(retain, nonatomic) NSString *topCat; // @synthesize topCat;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName;
@property(retain, nonatomic) NSDictionary *detailExtraParams; // @synthesize detailExtraParams;
@property(copy, nonatomic) NSString *skuID; // @synthesize skuID;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId;
@property(copy, nonatomic) NSString *bucketId; // @synthesize bucketId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId;
@property(copy, nonatomic) NSString *nick; // @synthesize nick;
@property(copy, nonatomic) NSString *shopTitle; // @synthesize shopTitle;
- (void).cxx_destruct;
- (id)formatPrice;
- (void)parseUserRate:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

