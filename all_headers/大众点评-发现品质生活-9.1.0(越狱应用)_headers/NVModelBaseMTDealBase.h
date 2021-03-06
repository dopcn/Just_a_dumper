//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSDate, NSString, NVModelBaseMtActivityTag, NVModelBaseMtDealBuyConfig, NVModelBaseMtOptionalAttrs, NVModelBaseMtPoiModel, NVModelBaseMtRatingModel, NVModelBaseMtSalesTag, NVModelBasePromoActivityDo;

@interface NVModelBaseMTDealBase : NVBaseModel
{
    _Bool _isDelivery;
    _Bool _isLimitPerUser;
    _Bool _lightning;
    _Bool _isVoucher;
    _Bool _availableToday;
    _Bool _isAppointOnline;
    _Bool _todayAvailable;
    NSString *_ugcLableColor;
    NSArray *_dealUgcLabels;
    NVModelBaseMtActivityTag *_mtActivityTag;
    long long _ici;
    NSString *_iOrderURL;
    NSString *_iconUrl;
    NSString *_orderTitle;
    NVModelBasePromoActivityDo *_promoActivityDo;
    long long _dpDealGroupId;
    NSString *_bigImgUrl;
    long long _maxLimitPerUser;
    long long _minLimitPerUser;
    NSArray *_structedDetails;
    NSArray *_imgUrls;
    NSString *_notice;
    NSString *_effectSpan;
    NSString *_costSpan;
    long long _redeemType;
    NSString *_branchLocations;
    NVModelBaseMtOptionalAttrs *_mtOptionalAttrs;
    NSString *_soldStr;
    NVModelBaseMtDealBuyConfig *_dealBuyConfig;
    double _originalPrice;
    long long _dealType;
    NSArray *_promotionInfos;
    NSString *_convertTrack;
    NSString *_stid;
    NSArray *_mtDealCampaigns;
    NSArray *_icons;
    NSArray *_securityInfoItems;
    NVModelBaseMtRatingModel *_ratingModel;
    NSString *_campaignStrategy;
    NVModelBaseMtSalesTag *_mtSalesTag;
    NSString *_menuDigest;
    NSString *_iUrl;
    NSArray *_frontPoiCates;
    long long _payType;
    NSArray *_shops;
    NSDate *_end;
    NSString *_recReason;
    NSDate *_start;
    NSString *_announcementTitle;
    NSString *_hotelExt;
    NSString *_bookingInfo;
    NSString *_hotelRoomName;
    NVModelBaseMtPoiModel *_shop;
    NSString *_brandName;
    NSDate *_startTime;
    double _deposit;
    long long _festCanUse;
    NSString *_range;
    NSString *_mlls;
    NSString *_couponTitle;
    double _value;
    NSString *_mealCount;
    NSDate *_couponBeginTime;
    long long _appleLottery;
    NSString *_ktvPlan;
    NSString *_pitchHtml;
    NSArray *_priceCalendars;
    NSString *_slug;
    NSDate *_endTime;
    long long _dt;
    NSString *_subCate;
    NSString *_mtitle;
    long long _expireAutoRefund;
    NSString *_campaigns;
    long long _ctype;
    NSString *_mname;
    double _canBuyPrice;
    NSArray *_terms;
    long long _status;
    NSString *_channel;
    double _price;
    NSString *_tips;
    NSString *_squareImgUrl;
    double _campaignPrice;
    long long _state;
    NSString *_campaignTag;
    NSString *_securityInfo;
    NSString *_howUse;
    NSArray *_menus;
    NSString *_title;
    NSString *_cate;
    NSArray *_poiIds;
    long long _noBooking;
    long long _rdCount;
    NSDate *_couponEndTime;
    NSString *_imgUrl;
    long long _id;
    long long _solds;
    NSString *_smsTitle;
    NSString *_tag;
    NSString *_optionalAttrs;
    double _satisfaction;
    NSString *_bookingPhone;
    NSString *_showType;
    long long _dtype;
    long long _refund;
    NSString *_salesTag;
    NSString *_attrJson;
    NSString *_murl;
    long long _curcityRdCount;
}

+ (id)metaInfo;
@property(nonatomic) long long curcityRdCount; // @synthesize curcityRdCount=_curcityRdCount;
@property(copy, nonatomic) NSString *murl; // @synthesize murl=_murl;
@property(copy, nonatomic) NSString *attrJson; // @synthesize attrJson=_attrJson;
@property(copy, nonatomic) NSString *salesTag; // @synthesize salesTag=_salesTag;
@property(nonatomic) long long refund; // @synthesize refund=_refund;
@property(nonatomic) long long dtype; // @synthesize dtype=_dtype;
@property(copy, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *bookingPhone; // @synthesize bookingPhone=_bookingPhone;
@property(nonatomic) double satisfaction; // @synthesize satisfaction=_satisfaction;
@property(copy, nonatomic) NSString *optionalAttrs; // @synthesize optionalAttrs=_optionalAttrs;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *smsTitle; // @synthesize smsTitle=_smsTitle;
@property(nonatomic) long long solds; // @synthesize solds=_solds;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSDate *couponEndTime; // @synthesize couponEndTime=_couponEndTime;
@property(nonatomic) long long rdCount; // @synthesize rdCount=_rdCount;
@property(nonatomic) long long noBooking; // @synthesize noBooking=_noBooking;
@property(retain, nonatomic) NSArray *poiIds; // @synthesize poiIds=_poiIds;
@property(copy, nonatomic) NSString *cate; // @synthesize cate=_cate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
@property(copy, nonatomic) NSString *howUse; // @synthesize howUse=_howUse;
@property(copy, nonatomic) NSString *securityInfo; // @synthesize securityInfo=_securityInfo;
@property(copy, nonatomic) NSString *campaignTag; // @synthesize campaignTag=_campaignTag;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double campaignPrice; // @synthesize campaignPrice=_campaignPrice;
@property(nonatomic) _Bool todayAvailable; // @synthesize todayAvailable=_todayAvailable;
@property(copy, nonatomic) NSString *squareImgUrl; // @synthesize squareImgUrl=_squareImgUrl;
@property(nonatomic) _Bool isAppointOnline; // @synthesize isAppointOnline=_isAppointOnline;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *terms; // @synthesize terms=_terms;
@property(nonatomic) double canBuyPrice; // @synthesize canBuyPrice=_canBuyPrice;
@property(copy, nonatomic) NSString *mname; // @synthesize mname=_mname;
@property(nonatomic) long long ctype; // @synthesize ctype=_ctype;
@property(copy, nonatomic) NSString *campaigns; // @synthesize campaigns=_campaigns;
@property(nonatomic) long long expireAutoRefund; // @synthesize expireAutoRefund=_expireAutoRefund;
@property(copy, nonatomic) NSString *mtitle; // @synthesize mtitle=_mtitle;
@property(copy, nonatomic) NSString *subCate; // @synthesize subCate=_subCate;
@property(nonatomic) long long dt; // @synthesize dt=_dt;
@property(copy, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(retain, nonatomic) NSArray *priceCalendars; // @synthesize priceCalendars=_priceCalendars;
@property(copy, nonatomic) NSString *pitchHtml; // @synthesize pitchHtml=_pitchHtml;
@property(copy, nonatomic) NSString *ktvPlan; // @synthesize ktvPlan=_ktvPlan;
@property(nonatomic) long long appleLottery; // @synthesize appleLottery=_appleLottery;
@property(copy, nonatomic) NSDate *couponBeginTime; // @synthesize couponBeginTime=_couponBeginTime;
@property(copy, nonatomic) NSString *mealCount; // @synthesize mealCount=_mealCount;
@property(nonatomic) double value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *couponTitle; // @synthesize couponTitle=_couponTitle;
@property(copy, nonatomic) NSString *mlls; // @synthesize mlls=_mlls;
@property(copy, nonatomic) NSString *range; // @synthesize range=_range;
@property(nonatomic) long long festCanUse; // @synthesize festCanUse=_festCanUse;
@property(nonatomic) double deposit; // @synthesize deposit=_deposit;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NVModelBaseMtPoiModel *shop; // @synthesize shop=_shop;
@property(copy, nonatomic) NSString *hotelRoomName; // @synthesize hotelRoomName=_hotelRoomName;
@property(copy, nonatomic) NSString *bookingInfo; // @synthesize bookingInfo=_bookingInfo;
@property(copy, nonatomic) NSString *hotelExt; // @synthesize hotelExt=_hotelExt;
@property(copy, nonatomic) NSString *announcementTitle; // @synthesize announcementTitle=_announcementTitle;
@property(copy, nonatomic) NSDate *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(copy, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSArray *shops; // @synthesize shops=_shops;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) NSArray *frontPoiCates; // @synthesize frontPoiCates=_frontPoiCates;
@property(copy, nonatomic) NSString *iUrl; // @synthesize iUrl=_iUrl;
@property(copy, nonatomic) NSString *menuDigest; // @synthesize menuDigest=_menuDigest;
@property(retain, nonatomic) NVModelBaseMtSalesTag *mtSalesTag; // @synthesize mtSalesTag=_mtSalesTag;
@property(copy, nonatomic) NSString *campaignStrategy; // @synthesize campaignStrategy=_campaignStrategy;
@property(nonatomic) _Bool availableToday; // @synthesize availableToday=_availableToday;
@property(retain, nonatomic) NVModelBaseMtRatingModel *ratingModel; // @synthesize ratingModel=_ratingModel;
@property(retain, nonatomic) NSArray *securityInfoItems; // @synthesize securityInfoItems=_securityInfoItems;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSArray *mtDealCampaigns; // @synthesize mtDealCampaigns=_mtDealCampaigns;
@property(nonatomic) _Bool isVoucher; // @synthesize isVoucher=_isVoucher;
@property(copy, nonatomic) NSString *stid; // @synthesize stid=_stid;
@property(copy, nonatomic) NSString *convertTrack; // @synthesize convertTrack=_convertTrack;
@property(retain, nonatomic) NSArray *promotionInfos; // @synthesize promotionInfos=_promotionInfos;
@property(nonatomic) long long dealType; // @synthesize dealType=_dealType;
@property(nonatomic) double originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) NVModelBaseMtDealBuyConfig *dealBuyConfig; // @synthesize dealBuyConfig=_dealBuyConfig;
@property(copy, nonatomic) NSString *soldStr; // @synthesize soldStr=_soldStr;
@property(retain, nonatomic) NVModelBaseMtOptionalAttrs *mtOptionalAttrs; // @synthesize mtOptionalAttrs=_mtOptionalAttrs;
@property(nonatomic) _Bool lightning; // @synthesize lightning=_lightning;
@property(copy, nonatomic) NSString *branchLocations; // @synthesize branchLocations=_branchLocations;
@property(nonatomic) long long redeemType; // @synthesize redeemType=_redeemType;
@property(copy, nonatomic) NSString *costSpan; // @synthesize costSpan=_costSpan;
@property(copy, nonatomic) NSString *effectSpan; // @synthesize effectSpan=_effectSpan;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSArray *imgUrls; // @synthesize imgUrls=_imgUrls;
@property(retain, nonatomic) NSArray *structedDetails; // @synthesize structedDetails=_structedDetails;
@property(nonatomic) _Bool isLimitPerUser; // @synthesize isLimitPerUser=_isLimitPerUser;
@property(nonatomic) long long minLimitPerUser; // @synthesize minLimitPerUser=_minLimitPerUser;
@property(nonatomic) long long maxLimitPerUser; // @synthesize maxLimitPerUser=_maxLimitPerUser;
@property(copy, nonatomic) NSString *bigImgUrl; // @synthesize bigImgUrl=_bigImgUrl;
@property(nonatomic) long long dpDealGroupId; // @synthesize dpDealGroupId=_dpDealGroupId;
@property(nonatomic) _Bool isDelivery; // @synthesize isDelivery=_isDelivery;
@property(retain, nonatomic) NVModelBasePromoActivityDo *promoActivityDo; // @synthesize promoActivityDo=_promoActivityDo;
@property(copy, nonatomic) NSString *orderTitle; // @synthesize orderTitle=_orderTitle;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *iOrderURL; // @synthesize iOrderURL=_iOrderURL;
@property(nonatomic) long long ici; // @synthesize ici=_ici;
@property(retain, nonatomic) NVModelBaseMtActivityTag *mtActivityTag; // @synthesize mtActivityTag=_mtActivityTag;
@property(retain, nonatomic) NSArray *dealUgcLabels; // @synthesize dealUgcLabels=_dealUgcLabels;
@property(copy, nonatomic) NSString *ugcLableColor; // @synthesize ugcLableColor=_ugcLableColor;
- (void).cxx_destruct;

@end

