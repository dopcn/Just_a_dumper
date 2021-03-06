//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString, NVModelBaseLabelTemplate, NVModelBaseMtActivityTag, NVModelBaseMtAdsInfo, NVModelBaseMtKaQuanInfo, NVModelBaseMtKtvModel, NVModelBaseMtMerchantSettleInfo, NVModelBaseMtNewPayInfo, NVModelBaseMtPayInfo, NVModelBaseMtPoiQa, NVModelBaseMtSalesTag, NVModelBasePoiPunishment, NVModelBasePromoActivityDo;

@interface NVModelBaseMtPoiModel : NVBaseModel
{
    _Bool _hasGroup;
    _Bool _wifi;
    _Bool _supportAppointment;
    _Bool _isShowPhoneNo;
    _Bool _isDelivery;
    NSString *_openInfo;
    NSString *_style;
    NSString *_introduction;
    long long _mergedId;
    long long _isAccurate;
    long long _poiType;
    NSString *_name;
    NSString *_addr;
    double _lng;
    double _lat;
    NSString *_showType;
    NSString *_rawTags;
    NSString *_phone;
    long long _uid;
    NSString *_frontImg;
    long long _marknumbers;
    double _avgscore;
    NSString *_brandStory;
    NSString *_brandLogo;
    NSString *_brandName;
    long long _brandId;
    double _lowestprice;
    double _avgprice;
    NSString *_featureMenus;
    long long _historyCouponCount;
    long long _latestWeekCoupon;
    NSString *_mallName;
    long long _mallId;
    long long _closeStatus;
    NSString *_floor;
    NSArray *_dIds;
    NSString *_parkingInfo;
    NSString *_subwayStationId;
    NSString *_landmarkIds;
    long long _isQueuing;
    NSString *_abstracts;
    long long _scoreSource;
    double _scoreRatio;
    NSString *_iUrl;
    NSString *_payType;
    NSString *_payAbstracts;
    NSString *_payExtraInfo;
    NVModelBaseMtNewPayInfo *_NewPayInfo;
    NVModelBaseMtPayInfo *_payInfo;
    long long _groupInfo;
    NSString *_discount;
    long long _isHot;
    long long _areaId;
    NSArray *_cates;
    long long _cityId;
    NSString *_campaignTag;
    NSArray *_collectionDeals;
    long long _sourceType;
    long long _isSalon;
    NSString *_areaName;
    NVModelBaseMtMerchantSettleInfo *_merchantSettleInfo;
    long long _nativeShoppingMall;
    NSArray *_mtAliasPayAbstractsList;
    double _ktvLowestPrice;
    NVModelBaseMtKtvModel *_ktv;
    NSString *_smCampaign;
    NSString *_cateName;
    NSString *_showChannel;
    long long _ktvAppointStatus;
    NVModelBaseMtAdsInfo *_adsInfo;
    NSArray *_poiLabels;
    NSString *_convertTrack;
    NSArray *_icons;
    long long _poiID;
    long long _channelTag;
    NSArray *_tagIds;
    NSString *_stid;
    NSArray *_shopPromoInfo;
    NVModelBaseMtKaQuanInfo *_kaQuanInfo;
    long long _poiListCount;
    NSString *_discountAbstracts;
    NVModelBasePromoActivityDo *_promoActivityDo;
    NSString *_dealActivity;
    NSArray *_subcates;
    NVModelBaseMtPoiQa *_poiQa;
    NSString *_shopPromoLabelName;
    NSArray *_ugcLabels;
    NVModelBaseMtActivityTag *_mtActivityTag;
    NSString *_onlineConsultUrl;
    NSArray *_poiBonusInfos;
    NVModelBasePoiPunishment *_poiPunishment;
    NVModelBaseMtSalesTag *_poiBookInfo;
    NSArray *_poiDecorationLists;
    NVModelBaseLabelTemplate *_poiFeatureInfo;
    NSArray *_poiFeatureLabels;
    NSString *_poiConsumeStr;
    NSString *_poiSmartGuide;
    NSArray *_recallButtons;
}

+ (id)metaInfo;
@property(retain, nonatomic) NSArray *recallButtons; // @synthesize recallButtons=_recallButtons;
@property(copy, nonatomic) NSString *poiSmartGuide; // @synthesize poiSmartGuide=_poiSmartGuide;
@property(copy, nonatomic) NSString *poiConsumeStr; // @synthesize poiConsumeStr=_poiConsumeStr;
@property(retain, nonatomic) NSArray *poiFeatureLabels; // @synthesize poiFeatureLabels=_poiFeatureLabels;
@property(retain, nonatomic) NVModelBaseLabelTemplate *poiFeatureInfo; // @synthesize poiFeatureInfo=_poiFeatureInfo;
@property(retain, nonatomic) NSArray *poiDecorationLists; // @synthesize poiDecorationLists=_poiDecorationLists;
@property(retain, nonatomic) NVModelBaseMtSalesTag *poiBookInfo; // @synthesize poiBookInfo=_poiBookInfo;
@property(retain, nonatomic) NVModelBasePoiPunishment *poiPunishment; // @synthesize poiPunishment=_poiPunishment;
@property(retain, nonatomic) NSArray *poiBonusInfos; // @synthesize poiBonusInfos=_poiBonusInfos;
@property(copy, nonatomic) NSString *onlineConsultUrl; // @synthesize onlineConsultUrl=_onlineConsultUrl;
@property(nonatomic) _Bool isDelivery; // @synthesize isDelivery=_isDelivery;
@property(retain, nonatomic) NVModelBaseMtActivityTag *mtActivityTag; // @synthesize mtActivityTag=_mtActivityTag;
@property(retain, nonatomic) NSArray *ugcLabels; // @synthesize ugcLabels=_ugcLabels;
@property(copy, nonatomic) NSString *shopPromoLabelName; // @synthesize shopPromoLabelName=_shopPromoLabelName;
@property(retain, nonatomic) NVModelBaseMtPoiQa *poiQa; // @synthesize poiQa=_poiQa;
@property(retain, nonatomic) NSArray *subcates; // @synthesize subcates=_subcates;
@property(copy, nonatomic) NSString *dealActivity; // @synthesize dealActivity=_dealActivity;
@property(retain, nonatomic) NVModelBasePromoActivityDo *promoActivityDo; // @synthesize promoActivityDo=_promoActivityDo;
@property(copy, nonatomic) NSString *discountAbstracts; // @synthesize discountAbstracts=_discountAbstracts;
@property(nonatomic) long long poiListCount; // @synthesize poiListCount=_poiListCount;
@property(retain, nonatomic) NVModelBaseMtKaQuanInfo *kaQuanInfo; // @synthesize kaQuanInfo=_kaQuanInfo;
@property(retain, nonatomic) NSArray *shopPromoInfo; // @synthesize shopPromoInfo=_shopPromoInfo;
@property(copy, nonatomic) NSString *stid; // @synthesize stid=_stid;
@property(retain, nonatomic) NSArray *tagIds; // @synthesize tagIds=_tagIds;
@property(nonatomic) long long channelTag; // @synthesize channelTag=_channelTag;
@property(nonatomic) long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) _Bool isShowPhoneNo; // @synthesize isShowPhoneNo=_isShowPhoneNo;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *convertTrack; // @synthesize convertTrack=_convertTrack;
@property(retain, nonatomic) NSArray *poiLabels; // @synthesize poiLabels=_poiLabels;
@property(retain, nonatomic) NVModelBaseMtAdsInfo *adsInfo; // @synthesize adsInfo=_adsInfo;
@property(nonatomic) long long ktvAppointStatus; // @synthesize ktvAppointStatus=_ktvAppointStatus;
@property(copy, nonatomic) NSString *showChannel; // @synthesize showChannel=_showChannel;
@property(copy, nonatomic) NSString *cateName; // @synthesize cateName=_cateName;
@property(copy, nonatomic) NSString *smCampaign; // @synthesize smCampaign=_smCampaign;
@property(retain, nonatomic) NVModelBaseMtKtvModel *ktv; // @synthesize ktv=_ktv;
@property(nonatomic) double ktvLowestPrice; // @synthesize ktvLowestPrice=_ktvLowestPrice;
@property(retain, nonatomic) NSArray *mtAliasPayAbstractsList; // @synthesize mtAliasPayAbstractsList=_mtAliasPayAbstractsList;
@property(nonatomic) long long nativeShoppingMall; // @synthesize nativeShoppingMall=_nativeShoppingMall;
@property(retain, nonatomic) NVModelBaseMtMerchantSettleInfo *merchantSettleInfo; // @synthesize merchantSettleInfo=_merchantSettleInfo;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(nonatomic) long long isSalon; // @synthesize isSalon=_isSalon;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool supportAppointment; // @synthesize supportAppointment=_supportAppointment;
@property(retain, nonatomic) NSArray *collectionDeals; // @synthesize collectionDeals=_collectionDeals;
@property(copy, nonatomic) NSString *campaignTag; // @synthesize campaignTag=_campaignTag;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSArray *cates; // @synthesize cates=_cates;
@property(nonatomic) long long areaId; // @synthesize areaId=_areaId;
@property(nonatomic) long long isHot; // @synthesize isHot=_isHot;
@property(copy, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(nonatomic) long long groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) NVModelBaseMtPayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(retain, nonatomic) NVModelBaseMtNewPayInfo *NewPayInfo; // @synthesize NewPayInfo=_NewPayInfo;
@property(copy, nonatomic) NSString *payExtraInfo; // @synthesize payExtraInfo=_payExtraInfo;
@property(copy, nonatomic) NSString *payAbstracts; // @synthesize payAbstracts=_payAbstracts;
@property(copy, nonatomic) NSString *payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString *iUrl; // @synthesize iUrl=_iUrl;
@property(nonatomic) double scoreRatio; // @synthesize scoreRatio=_scoreRatio;
@property(nonatomic) long long scoreSource; // @synthesize scoreSource=_scoreSource;
@property(copy, nonatomic) NSString *abstracts; // @synthesize abstracts=_abstracts;
@property(nonatomic) long long isQueuing; // @synthesize isQueuing=_isQueuing;
@property(copy, nonatomic) NSString *landmarkIds; // @synthesize landmarkIds=_landmarkIds;
@property(copy, nonatomic) NSString *subwayStationId; // @synthesize subwayStationId=_subwayStationId;
@property(nonatomic) _Bool wifi; // @synthesize wifi=_wifi;
@property(copy, nonatomic) NSString *parkingInfo; // @synthesize parkingInfo=_parkingInfo;
@property(nonatomic) _Bool hasGroup; // @synthesize hasGroup=_hasGroup;
@property(retain, nonatomic) NSArray *dIds; // @synthesize dIds=_dIds;
@property(copy, nonatomic) NSString *floor; // @synthesize floor=_floor;
@property(nonatomic) long long closeStatus; // @synthesize closeStatus=_closeStatus;
@property(nonatomic) long long mallId; // @synthesize mallId=_mallId;
@property(copy, nonatomic) NSString *mallName; // @synthesize mallName=_mallName;
@property(nonatomic) long long latestWeekCoupon; // @synthesize latestWeekCoupon=_latestWeekCoupon;
@property(nonatomic) long long historyCouponCount; // @synthesize historyCouponCount=_historyCouponCount;
@property(copy, nonatomic) NSString *featureMenus; // @synthesize featureMenus=_featureMenus;
@property(nonatomic) double avgprice; // @synthesize avgprice=_avgprice;
@property(nonatomic) double lowestprice; // @synthesize lowestprice=_lowestprice;
@property(nonatomic) long long brandId; // @synthesize brandId=_brandId;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(copy, nonatomic) NSString *brandStory; // @synthesize brandStory=_brandStory;
@property(nonatomic) double avgscore; // @synthesize avgscore=_avgscore;
@property(nonatomic) long long marknumbers; // @synthesize marknumbers=_marknumbers;
@property(copy, nonatomic) NSString *frontImg; // @synthesize frontImg=_frontImg;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *rawTags; // @synthesize rawTags=_rawTags;
@property(copy, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long poiType; // @synthesize poiType=_poiType;
@property(nonatomic) long long isAccurate; // @synthesize isAccurate=_isAccurate;
@property(nonatomic) long long mergedId; // @synthesize mergedId=_mergedId;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *openInfo; // @synthesize openInfo=_openInfo;
- (void).cxx_destruct;
- (id)transformToGCMerchant;

@end

