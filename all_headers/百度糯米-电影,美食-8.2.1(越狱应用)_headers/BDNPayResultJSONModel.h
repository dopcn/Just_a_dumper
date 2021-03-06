//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNBaseJSONModel.h"

@class BDNPayResultAddressJSONModel, BDNPayResultAdvertJSONModel, BDNPayResultForMovieJSONModel, BDNPayResultLifecycleJSONModel, BDNPayResultMeetJSONModel, BDNPayResultScoreInfoJSONModel, BDNRecommendInfoModel, BDNShareWhite, BDNWcShareInfo, NSArray, NSNumber, NSString;
@protocol Optional, Optional><BDNCertificatesJSONModel, Optional><BDNPayResultExtInfoJSONModel, Optional><BDNPayResultPaySubChannelInfoModel, Optional><BDNPayResultRedPackageJSONModel;

@interface BDNPayResultJSONModel : BDNBaseJSONModel
{
    NSArray<Optional><BDNCertificatesJSONModel> *_certificates;
    NSString<Optional> *_mobile;
    NSString<Optional> *_dealId;
    NSString<Optional> *_orderId;
    NSString<Optional> *_userId;
    NSNumber<Optional> *_type;
    BDNPayResultAddressJSONModel<Optional> *_address;
    BDNRecommendInfoModel<Optional> *_buy2buy;
    BDNPayResultForMovieJSONModel<Optional> *_order;
    NSString<Optional> *_uid;
    NSString<Optional> *_movieId;
    NSArray<Optional><BDNPayResultExtInfoJSONModel> *_extInfo;
    NSArray<Optional><BDNPayResultRedPackageJSONModel> *_hongbao;
    BDNPayResultLifecycleJSONModel<Optional> *_lifecycle;
    BDNWcShareInfo<Optional> *_wcShareInfo;
    NSString<Optional> *_getPointMsg;
    BDNPayResultScoreInfoJSONModel<Optional> *_scoreInfo;
    NSArray<Optional><BDNPayResultPaySubChannelInfoModel> *_paySubChannelInfo;
    NSString<Optional> *_repaymentData;
    NSString<Optional> *_payAtShopNum;
    NSString<Optional> *_payAtShopSchema;
    BDNShareWhite<Optional> *_shareWhite;
    BDNPayResultAdvertJSONModel<Optional> *_advert;
    BDNPayResultMeetJSONModel<Optional> *_buffet;
}

+ (long long)defaultShowConsumerCodeCount;
@property(retain, nonatomic) BDNPayResultMeetJSONModel<Optional> *buffet; // @synthesize buffet=_buffet;
@property(retain, nonatomic) BDNPayResultAdvertJSONModel<Optional> *advert; // @synthesize advert=_advert;
@property(retain, nonatomic) BDNShareWhite<Optional> *shareWhite; // @synthesize shareWhite=_shareWhite;
@property(copy, nonatomic) NSString<Optional> *payAtShopSchema; // @synthesize payAtShopSchema=_payAtShopSchema;
@property(copy, nonatomic) NSString<Optional> *payAtShopNum; // @synthesize payAtShopNum=_payAtShopNum;
@property(copy, nonatomic) NSString<Optional> *repaymentData; // @synthesize repaymentData=_repaymentData;
@property(retain, nonatomic) NSArray<Optional><BDNPayResultPaySubChannelInfoModel> *paySubChannelInfo; // @synthesize paySubChannelInfo=_paySubChannelInfo;
@property(retain, nonatomic) BDNPayResultScoreInfoJSONModel<Optional> *scoreInfo; // @synthesize scoreInfo=_scoreInfo;
@property(copy, nonatomic) NSString<Optional> *getPointMsg; // @synthesize getPointMsg=_getPointMsg;
@property(retain, nonatomic) BDNWcShareInfo<Optional> *wcShareInfo; // @synthesize wcShareInfo=_wcShareInfo;
@property(retain, nonatomic) BDNPayResultLifecycleJSONModel<Optional> *lifecycle; // @synthesize lifecycle=_lifecycle;
@property(retain, nonatomic) NSArray<Optional><BDNPayResultRedPackageJSONModel> *hongbao; // @synthesize hongbao=_hongbao;
@property(copy, nonatomic) NSArray<Optional><BDNPayResultExtInfoJSONModel> *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString<Optional> *movieId; // @synthesize movieId=_movieId;
@property(copy, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) BDNPayResultForMovieJSONModel<Optional> *order; // @synthesize order=_order;
@property(retain, nonatomic) BDNRecommendInfoModel<Optional> *buy2buy; // @synthesize buy2buy=_buy2buy;
@property(retain, nonatomic) BDNPayResultAddressJSONModel<Optional> *address; // @synthesize address=_address;
@property(copy, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString<Optional> *dealId; // @synthesize dealId=_dealId;
@property(copy, nonatomic) NSString<Optional> *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSArray<Optional><BDNCertificatesJSONModel> *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (_Bool)showMeeting;
- (_Bool)isOneYuan;
- (_Bool)hasOneYuan;
- (_Bool)hasPayAtShop;
- (id)amountOfPayedByCredit;
- (_Bool)isPayedByCredit;
- (id)shareMaxMoneyForVoucher;
- (_Bool)hasWCShare;
- (_Bool)canExpand;
- (_Bool)isABCertificate;
- (_Bool)hasConsumerCode;
- (_Bool)hasHongBao;
- (id)certificatesArr;
- (int)payMovieTicketStatus;
- (id)voucher;
- (_Bool)isUnknowType;
- (int)orderType;

@end

