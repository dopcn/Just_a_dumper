//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MttNovelSysConfig : NSObject
{
    _Bool _bBalanceTipsOn;
    NSString *_md5;
    long long _iCheckContentLen;
    NSArray *_vecCheckContentTips;
    long long _iCheckContentLastN;
    long long _iCheckChapterEntry;
    long long _iCheckOfflineAnchorNum;
    long long _lCheckContentLastNValidTime;
    long long _lCheckContentOtherValidTime;
    long long _lChapterValidTime;
    NSString *_strMyCirclsURL;
    NSString *_strAfterReadingURL;
    long long _shouldCloseAfterReading;
    NSString *_strAccountBuyInfoURL;
    NSString *_strAccountVolumeIntroURL;
    NSString *_strBookListUrl;
    NSString *_strBadgeWallUrl;
    long long _isOfferUIShow;
    NSString *_strUserCenterURL;
    unsigned long long _appType;
    long long _maxValidReadTimePerPage_s;
    NSString *_jsonURLS;
    NSArray *_balanceTipsThrehold;
}

@property(retain, nonatomic) NSArray *balanceTipsThrehold; // @synthesize balanceTipsThrehold=_balanceTipsThrehold;
@property(nonatomic) _Bool bBalanceTipsOn; // @synthesize bBalanceTipsOn=_bBalanceTipsOn;
@property(retain, nonatomic) NSString *jsonURLS; // @synthesize jsonURLS=_jsonURLS;
@property(nonatomic) long long maxValidReadTimePerPage_s; // @synthesize maxValidReadTimePerPage_s=_maxValidReadTimePerPage_s;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *strUserCenterURL; // @synthesize strUserCenterURL=_strUserCenterURL;
@property(nonatomic) long long isOfferUIShow; // @synthesize isOfferUIShow=_isOfferUIShow;
@property(retain, nonatomic) NSString *strBadgeWallUrl; // @synthesize strBadgeWallUrl=_strBadgeWallUrl;
@property(retain, nonatomic) NSString *strBookListUrl; // @synthesize strBookListUrl=_strBookListUrl;
@property(retain, nonatomic) NSString *strAccountVolumeIntroURL; // @synthesize strAccountVolumeIntroURL=_strAccountVolumeIntroURL;
@property(retain, nonatomic) NSString *strAccountBuyInfoURL; // @synthesize strAccountBuyInfoURL=_strAccountBuyInfoURL;
@property(nonatomic) long long shouldCloseAfterReading; // @synthesize shouldCloseAfterReading=_shouldCloseAfterReading;
@property(retain, nonatomic) NSString *strAfterReadingURL; // @synthesize strAfterReadingURL=_strAfterReadingURL;
@property(retain, nonatomic) NSString *strMyCirclsURL; // @synthesize strMyCirclsURL=_strMyCirclsURL;
@property(nonatomic) long long lChapterValidTime; // @synthesize lChapterValidTime=_lChapterValidTime;
@property(nonatomic) long long lCheckContentOtherValidTime; // @synthesize lCheckContentOtherValidTime=_lCheckContentOtherValidTime;
@property(nonatomic) long long lCheckContentLastNValidTime; // @synthesize lCheckContentLastNValidTime=_lCheckContentLastNValidTime;
@property(nonatomic) long long iCheckOfflineAnchorNum; // @synthesize iCheckOfflineAnchorNum=_iCheckOfflineAnchorNum;
@property(nonatomic) long long iCheckChapterEntry; // @synthesize iCheckChapterEntry=_iCheckChapterEntry;
@property(nonatomic) long long iCheckContentLastN; // @synthesize iCheckContentLastN=_iCheckContentLastN;
@property(retain, nonatomic) NSArray *vecCheckContentTips; // @synthesize vecCheckContentTips=_vecCheckContentTips;
@property(nonatomic) long long iCheckContentLen; // @synthesize iCheckContentLen=_iCheckContentLen;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (id)createArray:(id)arg1;
- (id)createTips:(id)arg1;
- (void)setSysConfig;
- (void)getSysConfig:(unsigned long long)arg1;
- (id)getConfigMD5;
- (id)configURLFromKey:(id)arg1;
- (id)configedStoreURL;
- (void)requestConfig:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

