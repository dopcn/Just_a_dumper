//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XMUserPersonalInfoRes-Protocol.h"

@class NSArray, NSSet, NSString, XMUserInfoVO;
@protocol XMUserPersonalPageInfoMenuVO;

@interface XMUserPersonalInfoRes : NSObject <XMUserPersonalInfoRes>
{
    _Bool _isYtAdmin;
    _Bool _isInMyBlackList;
    _Bool _isPoolAuditor;
    int _gender;
    int _tradeCount;
    int _superFavorNum;
    int _verifyStatus;
    NSString *_address;
    NSString *_signature;
    XMUserInfoVO *_userInfo;
    NSString *_nick;
    NSString *_idleAuthUrl;
    NSArray<XMUserPersonalPageInfoMenuVO> *_menus;
    long long _userId;
    NSString *_avatar;
    NSString *_tagPicUrls;
    NSString *_birthday;
    NSString *_constellation;
    NSString *_ranktitleDetailH5Url;
    long long _tradeIncome;
    NSString *_tradeIncomeContent;
    NSString *_shareUrl;
    long long _idleUserId;
    NSString *_idleUserNick;
    NSString *_idleSellingNum;
    NSString *_idleBuyNum;
    NSString *_idleSoldNum;
    NSString *_idleFavNum;
    NSArray *_idleUserTags;
    NSArray *_idleUserDefaultTags;
    long long _myAttentionNum;
    long long _myFansNum;
    long long _myFavorNum;
    NSString *_city;
    NSString *_userNick;
    NSString *_weiboShareContent;
    NSString *_commonShareContent;
    NSString *_idleNick;
    NSString *_prov;
    long long _score;
    NSString *_scoreUrl;
    long long _receiveFavorNum;
    long long _unReadReceiveFavorNum;
    long long _unReadMyFansNum;
    NSString *_myBidUrl;
    NSString *_verifyUrl;
    NSString *_idleDonateNum;
    NSString *_serverTime;
    NSSet *_needDecryptKeys;
}

@property(copy, nonatomic) NSSet *needDecryptKeys; // @synthesize needDecryptKeys=_needDecryptKeys;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(copy, nonatomic) NSString *idleDonateNum; // @synthesize idleDonateNum=_idleDonateNum;
@property(copy, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(copy, nonatomic) NSString *myBidUrl; // @synthesize myBidUrl=_myBidUrl;
@property(nonatomic) long long unReadMyFansNum; // @synthesize unReadMyFansNum=_unReadMyFansNum;
@property(nonatomic) long long unReadReceiveFavorNum; // @synthesize unReadReceiveFavorNum=_unReadReceiveFavorNum;
@property(nonatomic) long long receiveFavorNum; // @synthesize receiveFavorNum=_receiveFavorNum;
@property(nonatomic) _Bool isPoolAuditor; // @synthesize isPoolAuditor=_isPoolAuditor;
@property(copy, nonatomic) NSString *scoreUrl; // @synthesize scoreUrl=_scoreUrl;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(nonatomic) int verifyStatus; // @synthesize verifyStatus=_verifyStatus;
@property(copy, nonatomic) NSString *prov; // @synthesize prov=_prov;
@property(nonatomic) int superFavorNum; // @synthesize superFavorNum=_superFavorNum;
@property(copy, nonatomic) NSString *idleNick; // @synthesize idleNick=_idleNick;
@property(copy, nonatomic) NSString *commonShareContent; // @synthesize commonShareContent=_commonShareContent;
@property(copy, nonatomic) NSString *weiboShareContent; // @synthesize weiboShareContent=_weiboShareContent;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) long long myFavorNum; // @synthesize myFavorNum=_myFavorNum;
@property(nonatomic) long long myFansNum; // @synthesize myFansNum=_myFansNum;
@property(nonatomic) long long myAttentionNum; // @synthesize myAttentionNum=_myAttentionNum;
@property(copy, nonatomic) NSArray *idleUserDefaultTags; // @synthesize idleUserDefaultTags=_idleUserDefaultTags;
@property(copy, nonatomic) NSArray *idleUserTags; // @synthesize idleUserTags=_idleUserTags;
@property(copy, nonatomic) NSString *idleFavNum; // @synthesize idleFavNum=_idleFavNum;
@property(copy, nonatomic) NSString *idleSoldNum; // @synthesize idleSoldNum=_idleSoldNum;
@property(copy, nonatomic) NSString *idleBuyNum; // @synthesize idleBuyNum=_idleBuyNum;
@property(copy, nonatomic) NSString *idleSellingNum; // @synthesize idleSellingNum=_idleSellingNum;
@property(copy, nonatomic) NSString *idleUserNick; // @synthesize idleUserNick=_idleUserNick;
@property(nonatomic) long long idleUserId; // @synthesize idleUserId=_idleUserId;
@property(nonatomic) _Bool isInMyBlackList; // @synthesize isInMyBlackList=_isInMyBlackList;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *tradeIncomeContent; // @synthesize tradeIncomeContent=_tradeIncomeContent;
@property(nonatomic) long long tradeIncome; // @synthesize tradeIncome=_tradeIncome;
@property(nonatomic) int tradeCount; // @synthesize tradeCount=_tradeCount;
@property(nonatomic) _Bool isYtAdmin; // @synthesize isYtAdmin=_isYtAdmin;
@property(copy, nonatomic) NSString *ranktitleDetailH5Url; // @synthesize ranktitleDetailH5Url=_ranktitleDetailH5Url;
@property(copy, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *tagPicUrls; // @synthesize tagPicUrls=_tagPicUrls;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSArray<XMUserPersonalPageInfoMenuVO> *menus; // @synthesize menus=_menus;
@property(copy, nonatomic) NSString *idleAuthUrl; // @synthesize idleAuthUrl=_idleAuthUrl;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) XMUserInfoVO *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;

@end

