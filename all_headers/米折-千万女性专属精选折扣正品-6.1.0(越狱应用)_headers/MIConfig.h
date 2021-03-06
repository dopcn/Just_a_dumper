//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MIConfigModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MIConfig : NSObject
{
    NSString *_apiURL;
    NSString *_staticApiURL;
    NSString *_desKey;
    NSString *_appSecretKey;
    NSString *_version;
    NSString *_helpURL;
    NSString *_specialNoticeURL;
    NSString *_agreementURL;
    NSString *_forgetPasswordURL;
    NSString *_faqURL;
    NSString *_appStoreURL;
    NSString *_appStoreReviewURL;
    NSString *_findAlipayAccountURL;
    NSMutableDictionary *_clientInfo;
    MIConfigModel *_configInfo;
    NSString *_goURL;
    NSString *_taobaoURL;
    NSString *_myTaobaoURL;
    NSString *_myTaobaoOrderURL;
    NSString *_myTaobaoBagURL;
    NSString *_myTaobaoFavURL;
    NSString *_staticMBApiURL;
    _Bool _isHiddenReminderView;
    _Bool _bNotification;
    NSString *_upyunKey;
    NSString *_incomeURL;
    NSString *_securityCenterURL;
    MIConfigModel *_appConfigInfo;
    NSMutableArray *_tuanCategory;
    NSMutableArray *_brandCategory;
    NSString *_channelId;
    NSString *_checkinURL;
    NSString *_trustLoginURL;
    NSString *_appSharePicURL;
    NSString *_appSharePicLargeURL;
    NSString *_howToUpdateLevelURL;
    NSMutableArray *_homeTabs;
    NSString *_helpCenter;
    NSString *_customerService;
    NSString *_beibeiURL;
    NSString *_registerText;
    NSNumber *_upstreamSmsTime;
    NSString *_shakeUrl;
    NSMutableArray *_youpinCategory;
    NSDictionary *_tabBarMaps;
    NSNumber *_updateType;
    NSNumber *_updateTimes;
    NSNumber *_emailRegisterOpen;
    double _timeOffset;
    NSString *_notificationSource;
    NSString *_messageSource;
    NSMutableArray *_limitTuanCategory;
    long long _retryTimeInt;
    NSNumber *_useWebP;
    NSMutableArray *_daogouTabs;
    NSMutableArray *_martshowTabs;
    NSMutableArray *_martshowV2Tabs;
    NSString *_defaultPayMethod;
    NSMutableArray *_payMethods;
    NSDictionary *_payMethodDict;
    NSDictionary *_payPromotion;
    NSNumber *_receiptOpen;
    NSNumber *_displayPointExchange;
    NSNumber *_ratingEdge;
    NSString *_httpDnsIp;
    NSNumber *_httpDnsType;
    NSString *_startTime;
    NSString *_overseaQuestion;
    NSString *_productQuestion;
    NSString *_pintuanQuestion;
    NSString *_shakeHelpUrl;
    NSString *_shakeShareUrl;
    NSString *_shakeBgImg;
    NSString *_shakeCircleImg;
    NSNumber *_shakeDayCount;
    NSNumber *_shakealarmTime;
    NSString *_shakeShareTitle;
    NSString *_shakeShareDesc;
    NSString *_shakeShareImg;
    NSString *_rateButtonText;
    NSString *_groupRuleUrl;
    NSArray *_abTests;
    NSString *_checkServerUrl;
    NSString *_hotfixApiUrl;
    NSNumber *_selectPointFee;
    NSString *_tuanHotBackTitle;
    NSNumber *_hideWithdrawRebate;
    NSString *_testPwd;
    NSDictionary *_firstActivePushObj;
    NSNumber *_isOpenXg;
    NSString *_promotionAdsBgcolor;
    NSString *_tingyunDeviceRatio;
    NSArray *_footerTabIcons;
    NSArray *_freeshipTabs;
    NSString *_blastText;
    NSArray *_fightGroupToday;
    NSArray *_tuanBottomTabs;
    NSDictionary *_bottomPointObj;
    NSArray *_tenShopTabs;
    NSArray *_homePageTabs;
}

+ (_Bool)useTingyunErrorTrack;
+ (id)abtestForMethod:(id)arg1;
+ (id)getUDID;
+ (id)getYouPinTabs;
+ (id)getTenYuanTabs;
+ (id)getBrandTabs;
+ (id)getHomeTabs;
+ (id)getBrandCategory;
+ (id)getYoupinCategory;
+ (id)getTuanCategory;
+ (id)getAppConfigInfo;
+ (id)getClientInfo;
+ (id)screenSize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)globalConfig;
@property(retain, nonatomic) NSArray *homePageTabs; // @synthesize homePageTabs=_homePageTabs;
@property(retain, nonatomic) NSArray *tenShopTabs; // @synthesize tenShopTabs=_tenShopTabs;
@property(retain, nonatomic) NSDictionary *bottomPointObj; // @synthesize bottomPointObj=_bottomPointObj;
@property(retain, nonatomic) NSArray *tuanBottomTabs; // @synthesize tuanBottomTabs=_tuanBottomTabs;
@property(retain, nonatomic) NSArray *fightGroupToday; // @synthesize fightGroupToday=_fightGroupToday;
@property(retain, nonatomic) NSString *blastText; // @synthesize blastText=_blastText;
@property(retain, nonatomic) NSArray *freeshipTabs; // @synthesize freeshipTabs=_freeshipTabs;
@property(retain, nonatomic) NSArray *footerTabIcons; // @synthesize footerTabIcons=_footerTabIcons;
@property(retain, nonatomic) NSString *tingyunDeviceRatio; // @synthesize tingyunDeviceRatio=_tingyunDeviceRatio;
@property(retain, nonatomic) NSString *promotionAdsBgcolor; // @synthesize promotionAdsBgcolor=_promotionAdsBgcolor;
@property(retain, nonatomic) NSNumber *isOpenXg; // @synthesize isOpenXg=_isOpenXg;
@property(retain, nonatomic) NSDictionary *firstActivePushObj; // @synthesize firstActivePushObj=_firstActivePushObj;
@property(retain, nonatomic) NSString *testPwd; // @synthesize testPwd=_testPwd;
@property(retain, nonatomic) NSNumber *hideWithdrawRebate; // @synthesize hideWithdrawRebate=_hideWithdrawRebate;
@property(retain, nonatomic) NSString *tuanHotBackTitle; // @synthesize tuanHotBackTitle=_tuanHotBackTitle;
@property(retain, nonatomic) NSNumber *selectPointFee; // @synthesize selectPointFee=_selectPointFee;
@property(retain, nonatomic) NSString *hotfixApiUrl; // @synthesize hotfixApiUrl=_hotfixApiUrl;
@property(retain, nonatomic) NSString *checkServerUrl; // @synthesize checkServerUrl=_checkServerUrl;
@property(retain, nonatomic) NSArray *abTests; // @synthesize abTests=_abTests;
@property(retain, nonatomic) NSString *groupRuleUrl; // @synthesize groupRuleUrl=_groupRuleUrl;
@property(retain, nonatomic) NSString *rateButtonText; // @synthesize rateButtonText=_rateButtonText;
@property(retain, nonatomic) NSString *shakeShareImg; // @synthesize shakeShareImg=_shakeShareImg;
@property(retain, nonatomic) NSString *shakeShareDesc; // @synthesize shakeShareDesc=_shakeShareDesc;
@property(retain, nonatomic) NSString *shakeShareTitle; // @synthesize shakeShareTitle=_shakeShareTitle;
@property(retain, nonatomic) NSNumber *shakealarmTime; // @synthesize shakealarmTime=_shakealarmTime;
@property(retain, nonatomic) NSNumber *shakeDayCount; // @synthesize shakeDayCount=_shakeDayCount;
@property(retain, nonatomic) NSString *shakeCircleImg; // @synthesize shakeCircleImg=_shakeCircleImg;
@property(retain, nonatomic) NSString *shakeBgImg; // @synthesize shakeBgImg=_shakeBgImg;
@property(retain, nonatomic) NSString *shakeShareUrl; // @synthesize shakeShareUrl=_shakeShareUrl;
@property(retain, nonatomic) NSString *shakeHelpUrl; // @synthesize shakeHelpUrl=_shakeHelpUrl;
@property(retain, nonatomic) NSString *pintuanQuestion; // @synthesize pintuanQuestion=_pintuanQuestion;
@property(retain, nonatomic) NSString *productQuestion; // @synthesize productQuestion=_productQuestion;
@property(retain, nonatomic) NSString *overseaQuestion; // @synthesize overseaQuestion=_overseaQuestion;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSNumber *httpDnsType; // @synthesize httpDnsType=_httpDnsType;
@property(retain, nonatomic) NSString *httpDnsIp; // @synthesize httpDnsIp=_httpDnsIp;
@property(copy, nonatomic) NSString *staticMBApiURL; // @synthesize staticMBApiURL=_staticMBApiURL;
@property(retain, nonatomic) NSNumber *ratingEdge; // @synthesize ratingEdge=_ratingEdge;
@property(retain, nonatomic) NSNumber *displayPointExchange; // @synthesize displayPointExchange=_displayPointExchange;
@property(retain, nonatomic) NSNumber *receiptOpen; // @synthesize receiptOpen=_receiptOpen;
@property(retain, nonatomic) NSDictionary *payPromotion; // @synthesize payPromotion=_payPromotion;
@property(retain, nonatomic) NSDictionary *payMethodDict; // @synthesize payMethodDict=_payMethodDict;
@property(retain, nonatomic) NSMutableArray *payMethods; // @synthesize payMethods=_payMethods;
@property(retain, nonatomic) NSString *defaultPayMethod; // @synthesize defaultPayMethod=_defaultPayMethod;
@property(retain, nonatomic) NSMutableArray *martshowV2Tabs; // @synthesize martshowV2Tabs=_martshowV2Tabs;
@property(retain, nonatomic) NSMutableArray *martshowTabs; // @synthesize martshowTabs=_martshowTabs;
@property(retain, nonatomic) NSMutableArray *daogouTabs; // @synthesize daogouTabs=_daogouTabs;
@property(retain, nonatomic) NSNumber *useWebP; // @synthesize useWebP=_useWebP;
@property(nonatomic) long long retryTimeInt; // @synthesize retryTimeInt=_retryTimeInt;
@property(retain, nonatomic) NSMutableArray *limitTuanCategory; // @synthesize limitTuanCategory=_limitTuanCategory;
@property(copy, nonatomic) NSString *messageSource; // @synthesize messageSource=_messageSource;
@property(copy, nonatomic) NSString *notificationSource; // @synthesize notificationSource=_notificationSource;
@property(nonatomic) _Bool bNotification; // @synthesize bNotification=_bNotification;
@property double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(retain, nonatomic) NSNumber *emailRegisterOpen; // @synthesize emailRegisterOpen=_emailRegisterOpen;
@property(retain, nonatomic) NSNumber *updateTimes; // @synthesize updateTimes=_updateTimes;
@property(retain, nonatomic) NSNumber *updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) NSDictionary *tabBarMaps; // @synthesize tabBarMaps=_tabBarMaps;
@property(retain) NSMutableArray *youpinCategory; // @synthesize youpinCategory=_youpinCategory;
@property(copy, nonatomic) NSString *shakeUrl; // @synthesize shakeUrl=_shakeUrl;
@property(retain, nonatomic) NSNumber *upstreamSmsTime; // @synthesize upstreamSmsTime=_upstreamSmsTime;
@property(retain, nonatomic) NSString *registerText; // @synthesize registerText=_registerText;
@property(copy, nonatomic) NSString *beibeiURL; // @synthesize beibeiURL=_beibeiURL;
@property(copy, nonatomic) NSString *customerService; // @synthesize customerService=_customerService;
@property(copy, nonatomic) NSString *helpCenter; // @synthesize helpCenter=_helpCenter;
@property(retain, nonatomic) NSMutableArray *homeTabs; // @synthesize homeTabs=_homeTabs;
@property(nonatomic) _Bool isHiddenReminderView; // @synthesize isHiddenReminderView=_isHiddenReminderView;
@property(copy, nonatomic) NSString *howToUpdateLevelURL; // @synthesize howToUpdateLevelURL=_howToUpdateLevelURL;
@property(copy, nonatomic) NSString *appSharePicLargeURL; // @synthesize appSharePicLargeURL=_appSharePicLargeURL;
@property(copy, nonatomic) NSString *appSharePicURL; // @synthesize appSharePicURL=_appSharePicURL;
@property(copy, nonatomic) NSString *trustLoginURL; // @synthesize trustLoginURL=_trustLoginURL;
@property(copy, nonatomic) NSString *checkinURL; // @synthesize checkinURL=_checkinURL;
@property(copy, nonatomic) NSString *goURL; // @synthesize goURL=_goURL;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain) NSMutableArray *brandCategory; // @synthesize brandCategory=_brandCategory;
@property(retain) NSMutableArray *tuanCategory; // @synthesize tuanCategory=_tuanCategory;
@property(retain, nonatomic) MIConfigModel *appConfigInfo; // @synthesize appConfigInfo=_appConfigInfo;
@property(retain, nonatomic) NSMutableDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy, nonatomic) NSString *securityCenterURL; // @synthesize securityCenterURL=_securityCenterURL;
@property(copy, nonatomic) NSString *findAlipayAccountURL; // @synthesize findAlipayAccountURL=_findAlipayAccountURL;
@property(copy, nonatomic) NSString *appStoreReviewURL; // @synthesize appStoreReviewURL=_appStoreReviewURL;
@property(copy, nonatomic) NSString *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(copy, nonatomic) NSString *incomeURL; // @synthesize incomeURL=_incomeURL;
@property(copy, nonatomic) NSString *faqURL; // @synthesize faqURL=_faqURL;
@property(copy, nonatomic) NSString *forgetPasswordURL; // @synthesize forgetPasswordURL=_forgetPasswordURL;
@property(copy, nonatomic) NSString *agreementURL; // @synthesize agreementURL=_agreementURL;
@property(copy, nonatomic) NSString *specialNoticeURL; // @synthesize specialNoticeURL=_specialNoticeURL;
@property(copy, nonatomic) NSString *helpURL; // @synthesize helpURL=_helpURL;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appSecretKey; // @synthesize appSecretKey=_appSecretKey;
@property(copy, nonatomic) NSString *desKey; // @synthesize desKey=_desKey;
@property(copy, nonatomic) NSString *staticApiURL; // @synthesize staticApiURL=_staticApiURL;
@property(copy, nonatomic) NSString *apiURL; // @synthesize apiURL=_apiURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *shippingDescLink;
@property(readonly, nonatomic) NSString *alipayNotify;
@property(readonly, nonatomic) unsigned long long sellerCheckDuration;
@property(readonly, nonatomic) unsigned long long userShipmentDuration;
@property(readonly, nonatomic) unsigned long long payDuration;
@property(readonly, nonatomic) unsigned long long turnBackDuration;
@property(readonly, nonatomic) unsigned long long itemNum;
@property(readonly, nonatomic) unsigned long long cartNum;
- (_Bool)isHideBrand;
- (_Bool)validatorNumWord:(id)arg1;
- (id)getCurrentUDID;
- (_Bool)isReviewVersion;
@property(readonly, nonatomic) NSString *tbUrl;
@property(readonly, nonatomic) NSString *live800CachedReg;
@property(readonly, nonatomic) NSString *myTaobaoFav;
@property(readonly, nonatomic) NSString *myTaobaoCart;
@property(readonly, nonatomic) NSString *myTaobaoOrder;
@property(readonly, nonatomic) NSString *myTaobao;
@property(readonly, nonatomic) NSArray *regs;
@property(readonly, nonatomic) _Bool tbMidPage;
@property(readonly, nonatomic) _Bool topTbkApi;
- (_Bool)tdjMidPage;
@property(readonly, nonatomic) _Bool temaiRebate;
@property(readonly, nonatomic) _Bool htmlRebate;
@property(readonly, nonatomic) _Bool zhiTbApp;
@property(readonly, nonatomic) _Bool tuanTbApp;
@property(readonly, nonatomic) NSString *appDl;
@property(readonly, nonatomic) NSString *tbkAdzoneId;
@property(readonly, nonatomic) NSString *topAppSecretKey;
@property(readonly, nonatomic) NSString *topAppKey;
@property(readonly, nonatomic) NSString *taobaoAppID;
@property(readonly, nonatomic) NSString *tmallAd;
@property(readonly, nonatomic) NSString *taobaoAd;
@property(readonly, nonatomic) NSString *taobaoSche;
@property(readonly, nonatomic) NSString *reviewVersion;
@property(readonly, nonatomic) NSString *closeSearchVersion;
@property(readonly, nonatomic) NSString *beibeiAppSlogan;
@property(readonly, nonatomic) NSString *beibeiAppID;
@property(readonly, nonatomic) NSString *jumpTb;
@property(readonly, nonatomic) NSString *sclick;
@property(readonly, nonatomic) NSString *upyunKey; // @synthesize upyunKey=_upyunKey;
@property(readonly, nonatomic) NSString *searchPid;
@property(readonly, nonatomic) NSString *saPid;
@property(readonly, nonatomic) NSString *mmPid;
@property(readonly, nonatomic) NSString *firstRunTag;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

