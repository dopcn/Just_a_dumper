//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SNBBriefSessionInfo, SNBBrokerEncryptAcountInfo;

@interface UserDefault : NSObject <NSCoding>
{
    _Bool _hasShowUserGuide;
    _Bool _hasPassword;
    _Bool _hasBindThirdParty;
    _Bool _isClosedOperationBtn;
    _Bool _isTradeMessageForbidden;
    _Bool _hasShownTradeDayIncomeTips;
    _Bool _shouldShowPageUserInfoComplete;
    _Bool _showRemindDotCubeRank;
    _Bool _showRemindDotHomePageMaskView;
    _Bool _showRemindDotSearchUploadImage;
    _Bool _showLogOnScreen;
    _Bool _showStockPlateCapitalNewTab;
    _Bool _stockGraySwitchOn;
    _Bool _stockPankouTradeSwitch;
    _Bool _marketDetailSwitch;
    _Bool _hasShowChartNewVersionTips;
    _Bool _showPublicTimelineBanner;
    _Bool _hasClosedMarginListTip;
    _Bool _paidMentionAvailable;
    _Bool _showGlobalPopWindow;
    _Bool _showSendBonusEntry;
    _Bool _shareBonus;
    _Bool _originalColumnEnabled;
    _Bool _forbiddenBindingTip;
    _Bool _likeReceiveNotify;
    _Bool _isPushOpen;
    _Bool _assetsHidden;
    _Bool _hasSecurityRisk;
    int _timeZone;
    NSString *_user;
    NSString *_pass;
    NSString *_accessToken;
    NSString *_expireDateTime;
    NSString *_refreshToken;
    NSString *_dbVersion;
    NSString *_userFuzzyMobileNumber;
    NSString *_thirdPartyScreenName;
    NSString *_thirdpartyProfileUrl;
    long long _userState;
    long long _userId;
    long long _loginType;
    NSString *_telephone;
    NSString *_email;
    NSString *_qqName;
    NSString *_sinaName;
    NSString *_wechatName;
    NSMutableArray *_publicTimelineStatusReadIdArray;
    NSMutableArray *_publicTimelineAdReadIdArray;
    NSString *_lastReadTimelineId;
    NSString *_tradeExpireTime;
    long long _stColor;
    long long _commentPermissionType;
    long long _privacyPortFolio;
    long long _privacyLetter;
    long long _portFolioGroupType;
    long long _lastFollowersReceivedTimestamp;
    NSNumber *_stockSubChartType;
    NSNumber *_stockMainChartType;
    NSNumber *_levelLine;
    SNBBriefSessionInfo *_myCommentSessionInfo;
    SNBBriefSessionInfo *_myMessionSessionInfo;
    SNBBriefSessionInfo *_myLikeSessionInfo;
    SNBBriefSessionInfo *_myPaidMentionSessionInfo;
    SNBBriefSessionInfo *_myStrategySessionInfo;
    SNBBriefSessionInfo *_myTradeSessionInfo;
    SNBBrokerEncryptAcountInfo *_lastSelectedBrokerEncryptAcountInfo;
    NSDictionary *_sinaData;
    double _publicTimelineLastRefreshTime;
    long long _watermarkType;
    NSDictionary *_hometimelineVersionMap;
    long long _fontSizeCategory;
    NSMutableDictionary *_writeTokenOfAids;
    NSDictionary *_hasClosedStockLevel1AdDic;
    NSDictionary *_hasClosedStockLevel2AdDic;
}

+ (id)cachedUserDefault;
@property(copy, nonatomic) NSDictionary *hasClosedStockLevel2AdDic; // @synthesize hasClosedStockLevel2AdDic=_hasClosedStockLevel2AdDic;
@property(copy, nonatomic) NSDictionary *hasClosedStockLevel1AdDic; // @synthesize hasClosedStockLevel1AdDic=_hasClosedStockLevel1AdDic;
@property(retain, nonatomic) NSMutableDictionary *writeTokenOfAids; // @synthesize writeTokenOfAids=_writeTokenOfAids;
@property(nonatomic) long long fontSizeCategory; // @synthesize fontSizeCategory=_fontSizeCategory;
@property(copy, nonatomic) NSDictionary *hometimelineVersionMap; // @synthesize hometimelineVersionMap=_hometimelineVersionMap;
@property(nonatomic) _Bool hasSecurityRisk; // @synthesize hasSecurityRisk=_hasSecurityRisk;
@property(nonatomic) _Bool assetsHidden; // @synthesize assetsHidden=_assetsHidden;
@property(nonatomic) _Bool isPushOpen; // @synthesize isPushOpen=_isPushOpen;
@property(nonatomic) _Bool likeReceiveNotify; // @synthesize likeReceiveNotify=_likeReceiveNotify;
@property(nonatomic) _Bool forbiddenBindingTip; // @synthesize forbiddenBindingTip=_forbiddenBindingTip;
@property(nonatomic) _Bool originalColumnEnabled; // @synthesize originalColumnEnabled=_originalColumnEnabled;
@property(nonatomic) _Bool shareBonus; // @synthesize shareBonus=_shareBonus;
@property(nonatomic) _Bool showSendBonusEntry; // @synthesize showSendBonusEntry=_showSendBonusEntry;
@property(nonatomic) _Bool showGlobalPopWindow; // @synthesize showGlobalPopWindow=_showGlobalPopWindow;
@property(nonatomic) _Bool paidMentionAvailable; // @synthesize paidMentionAvailable=_paidMentionAvailable;
@property(nonatomic) _Bool hasClosedMarginListTip; // @synthesize hasClosedMarginListTip=_hasClosedMarginListTip;
@property(nonatomic) _Bool showPublicTimelineBanner; // @synthesize showPublicTimelineBanner=_showPublicTimelineBanner;
@property(nonatomic) _Bool hasShowChartNewVersionTips; // @synthesize hasShowChartNewVersionTips=_hasShowChartNewVersionTips;
@property(nonatomic) _Bool marketDetailSwitch; // @synthesize marketDetailSwitch=_marketDetailSwitch;
@property(nonatomic) _Bool stockPankouTradeSwitch; // @synthesize stockPankouTradeSwitch=_stockPankouTradeSwitch;
@property(nonatomic) _Bool stockGraySwitchOn; // @synthesize stockGraySwitchOn=_stockGraySwitchOn;
@property(nonatomic) _Bool showStockPlateCapitalNewTab; // @synthesize showStockPlateCapitalNewTab=_showStockPlateCapitalNewTab;
@property(nonatomic) _Bool showLogOnScreen; // @synthesize showLogOnScreen=_showLogOnScreen;
@property(nonatomic) _Bool showRemindDotSearchUploadImage; // @synthesize showRemindDotSearchUploadImage=_showRemindDotSearchUploadImage;
@property(nonatomic) _Bool showRemindDotHomePageMaskView; // @synthesize showRemindDotHomePageMaskView=_showRemindDotHomePageMaskView;
@property(nonatomic) _Bool showRemindDotCubeRank; // @synthesize showRemindDotCubeRank=_showRemindDotCubeRank;
@property(nonatomic) _Bool shouldShowPageUserInfoComplete; // @synthesize shouldShowPageUserInfoComplete=_shouldShowPageUserInfoComplete;
@property(nonatomic) long long watermarkType; // @synthesize watermarkType=_watermarkType;
@property(nonatomic) _Bool hasShownTradeDayIncomeTips; // @synthesize hasShownTradeDayIncomeTips=_hasShownTradeDayIncomeTips;
@property(nonatomic) _Bool isTradeMessageForbidden; // @synthesize isTradeMessageForbidden=_isTradeMessageForbidden;
@property(nonatomic) double publicTimelineLastRefreshTime; // @synthesize publicTimelineLastRefreshTime=_publicTimelineLastRefreshTime;
@property(copy, nonatomic) NSDictionary *sinaData; // @synthesize sinaData=_sinaData;
@property(retain, nonatomic) SNBBrokerEncryptAcountInfo *lastSelectedBrokerEncryptAcountInfo; // @synthesize lastSelectedBrokerEncryptAcountInfo=_lastSelectedBrokerEncryptAcountInfo;
@property(retain, nonatomic) SNBBriefSessionInfo *myTradeSessionInfo; // @synthesize myTradeSessionInfo=_myTradeSessionInfo;
@property(retain, nonatomic) SNBBriefSessionInfo *myStrategySessionInfo; // @synthesize myStrategySessionInfo=_myStrategySessionInfo;
@property(retain, nonatomic) SNBBriefSessionInfo *myPaidMentionSessionInfo; // @synthesize myPaidMentionSessionInfo=_myPaidMentionSessionInfo;
@property(retain, nonatomic) SNBBriefSessionInfo *myLikeSessionInfo; // @synthesize myLikeSessionInfo=_myLikeSessionInfo;
@property(retain, nonatomic) SNBBriefSessionInfo *myMessionSessionInfo; // @synthesize myMessionSessionInfo=_myMessionSessionInfo;
@property(retain, nonatomic) SNBBriefSessionInfo *myCommentSessionInfo; // @synthesize myCommentSessionInfo=_myCommentSessionInfo;
@property(retain, nonatomic) NSNumber *levelLine; // @synthesize levelLine=_levelLine;
@property(nonatomic) _Bool isClosedOperationBtn; // @synthesize isClosedOperationBtn=_isClosedOperationBtn;
@property(retain, nonatomic) NSNumber *stockMainChartType; // @synthesize stockMainChartType=_stockMainChartType;
@property(retain, nonatomic) NSNumber *stockSubChartType; // @synthesize stockSubChartType=_stockSubChartType;
@property(nonatomic) long long lastFollowersReceivedTimestamp; // @synthesize lastFollowersReceivedTimestamp=_lastFollowersReceivedTimestamp;
@property(nonatomic) long long portFolioGroupType; // @synthesize portFolioGroupType=_portFolioGroupType;
@property(nonatomic) int timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) long long privacyLetter; // @synthesize privacyLetter=_privacyLetter;
@property(nonatomic) long long privacyPortFolio; // @synthesize privacyPortFolio=_privacyPortFolio;
@property(nonatomic) long long commentPermissionType; // @synthesize commentPermissionType=_commentPermissionType;
@property(nonatomic) long long stColor; // @synthesize stColor=_stColor;
@property(retain, nonatomic) NSString *tradeExpireTime; // @synthesize tradeExpireTime=_tradeExpireTime;
@property(nonatomic) _Bool hasBindThirdParty; // @synthesize hasBindThirdParty=_hasBindThirdParty;
@property(copy, nonatomic) NSString *lastReadTimelineId; // @synthesize lastReadTimelineId=_lastReadTimelineId;
@property(retain, nonatomic) NSMutableArray *publicTimelineAdReadIdArray; // @synthesize publicTimelineAdReadIdArray=_publicTimelineAdReadIdArray;
@property(retain, nonatomic) NSMutableArray *publicTimelineStatusReadIdArray; // @synthesize publicTimelineStatusReadIdArray=_publicTimelineStatusReadIdArray;
@property(copy, nonatomic) NSString *wechatName; // @synthesize wechatName=_wechatName;
@property(copy, nonatomic) NSString *sinaName; // @synthesize sinaName=_sinaName;
@property(copy, nonatomic) NSString *qqName; // @synthesize qqName=_qqName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(nonatomic) _Bool hasPassword; // @synthesize hasPassword=_hasPassword;
@property(nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long userState; // @synthesize userState=_userState;
@property(nonatomic) _Bool hasShowUserGuide; // @synthesize hasShowUserGuide=_hasShowUserGuide;
@property(copy, nonatomic) NSString *thirdpartyProfileUrl; // @synthesize thirdpartyProfileUrl=_thirdpartyProfileUrl;
@property(copy, nonatomic) NSString *thirdPartyScreenName; // @synthesize thirdPartyScreenName=_thirdPartyScreenName;
@property(copy, nonatomic) NSString *userFuzzyMobileNumber; // @synthesize userFuzzyMobileNumber=_userFuzzyMobileNumber;
@property(copy, nonatomic) NSString *dbVersion; // @synthesize dbVersion=_dbVersion;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *expireDateTime; // @synthesize expireDateTime=_expireDateTime;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasClosedStockLevel2Ad;
@property(nonatomic) _Bool hasClosedStockLevel1Ad;
- (void)save;
- (void)clear;
- (void)_snb_clearHistoryRecord;
- (void)_snb_loadFromHistoryRecord;
- (void)flushWriteToken;
- (id)_snb_writeTokenDicWithAid:(id)arg1;
- (id)writeTokenUpdateTimeWithAid:(id)arg1;
- (id)writeTokenWithAid:(id)arg1;
- (void)updateBrokerWriteToken:(id)arg1 withAid:(id)arg2;
- (void)updateHometimelineVersionMapWithConfig:(id)arg1;
- (void)updateTradeExpireTime:(id)arg1;
- (_Bool)needVerifyMobileNumber;
- (void)changeExpiresIn:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSNumber *spCubeLiveLastCelebratedMsgID;

@end

