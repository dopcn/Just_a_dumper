//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSArray, NSMutableDictionary, NSNumber, NSString, TBCAntiStatItem, TBCCommonGroupItem, TBCFrsBarInfo, TBCFrsPage, TBCFrsTopNotice, TBCNaGuideInfo, TBCNovelItem, TBCStarInfo;

@interface TBCFrsDataListItem : TBCBaseItem
{
    TBCFrsBarInfo *_barInfo;
    NSArray *_threadList;
    NSArray *_threadIdList;
    NSString *_fortune_bag;
    NSString *_tbs;
    NSString *_forbid_info;
    NSString *_ifpost;
    TBCFrsPage *_page;
    TBCStarInfo *_starInfo;
    NSNumber *_isManager;
    NSString *_uid;
    TBCNovelItem *_novel;
    TBCCommonGroupItem *_group;
    NSArray *_userListArray;
    NSMutableDictionary *_userInfoMap;
    NSNumber *_enabledSendVoice;
    NSString *_disabledSendVoiceTips;
    TBCFrsTopNotice *_topNotice;
    NSNumber *_isNewCDNUrl;
    TBCAntiStatItem *_antiStat;
    NSString *_bubbleUrl;
    NSString *_bubbleFormat;
    TBCNaGuideInfo *_naGuideInfo;
}

@property(retain, nonatomic) TBCNaGuideInfo *naGuideInfo; // @synthesize naGuideInfo=_naGuideInfo;
@property(retain, nonatomic) NSString *bubbleFormat; // @synthesize bubbleFormat=_bubbleFormat;
@property(retain, nonatomic) NSString *bubbleUrl; // @synthesize bubbleUrl=_bubbleUrl;
@property(retain, nonatomic) TBCAntiStatItem *antiStat; // @synthesize antiStat=_antiStat;
@property(retain, nonatomic) NSNumber *isNewCDNUrl; // @synthesize isNewCDNUrl=_isNewCDNUrl;
@property(retain, nonatomic) TBCFrsTopNotice *topNotice; // @synthesize topNotice=_topNotice;
@property(copy, nonatomic) NSString *disabledSendVoiceTips; // @synthesize disabledSendVoiceTips=_disabledSendVoiceTips;
@property(retain, nonatomic) NSNumber *enabledSendVoice; // @synthesize enabledSendVoice=_enabledSendVoice;
@property(retain, nonatomic) NSMutableDictionary *userInfoMap; // @synthesize userInfoMap=_userInfoMap;
@property(retain, nonatomic) NSArray *userListArray; // @synthesize userListArray=_userListArray;
@property(retain, nonatomic) TBCCommonGroupItem *group; // @synthesize group=_group;
@property(retain, nonatomic) TBCNovelItem *novel; // @synthesize novel=_novel;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *isManager; // @synthesize isManager=_isManager;
@property(retain, nonatomic) TBCStarInfo *starInfo; // @synthesize starInfo=_starInfo;
@property(retain, nonatomic) TBCFrsPage *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *ifpost; // @synthesize ifpost=_ifpost;
@property(retain, nonatomic) NSString *forbid_info; // @synthesize forbid_info=_forbid_info;
@property(retain, nonatomic) NSString *tbs; // @synthesize tbs=_tbs;
@property(copy, nonatomic) NSString *fortune_bag; // @synthesize fortune_bag=_fortune_bag;
@property(retain, nonatomic) NSArray *threadIdList; // @synthesize threadIdList=_threadIdList;
@property(retain, nonatomic) NSArray *threadList; // @synthesize threadList=_threadList;
@property(retain, nonatomic) TBCFrsBarInfo *barInfo; // @synthesize barInfo=_barInfo;
- (void)handleDataAfterParse;
- (void)dealloc;
- (void)setOtherConfig;
- (id)init;

@end

