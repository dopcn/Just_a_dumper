//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVPlayerBaseInfo.h"

@class KTVPersonalInfoEntity, KTVSpaceInfoNum, NSString;

@interface KTVUserSpaceInfo : KTVPlayerBaseInfo
{
    _Bool _ownerAccess;
    _Bool _discount;
    _Bool _isShowRedPoint;
    int _withdrawIosSwitch;
    NSString *_userSignature;
    long long _competitionMedal;
    NSString *_compMedalDescr;
    long long _richMedal;
    long long _honorMedal;
    long long _judgeMedal;
    unsigned long long _judgeGrade;
    NSString *_judgeMedalDay;
    long long _followedNum;
    long long _fansNum;
    long long _winRate;
    long long _voteRate;
    unsigned long long _accompanimentNum;
    unsigned long long _localSongNum;
    unsigned long long _totalKb;
    unsigned long long _kNum;
    long long _opusNum;
    long long _forwardNum;
    long long _albumNum;
    unsigned long long _relation;
    KTVSpaceInfoNum *_infoNum;
    KTVPersonalInfoEntity *_infoEntity;
}

@property(retain, nonatomic) KTVPersonalInfoEntity *infoEntity; // @synthesize infoEntity=_infoEntity;
@property(retain, nonatomic) KTVSpaceInfoNum *infoNum; // @synthesize infoNum=_infoNum;
@property(nonatomic) unsigned long long relation; // @synthesize relation=_relation;
@property(nonatomic) long long albumNum; // @synthesize albumNum=_albumNum;
@property(nonatomic) long long forwardNum; // @synthesize forwardNum=_forwardNum;
@property(nonatomic) long long opusNum; // @synthesize opusNum=_opusNum;
@property(nonatomic) _Bool isShowRedPoint; // @synthesize isShowRedPoint=_isShowRedPoint;
@property(nonatomic) int withdrawIosSwitch; // @synthesize withdrawIosSwitch=_withdrawIosSwitch;
@property(nonatomic) _Bool discount; // @synthesize discount=_discount;
@property(nonatomic) unsigned long long kNum; // @synthesize kNum=_kNum;
@property(nonatomic) unsigned long long totalKb; // @synthesize totalKb=_totalKb;
@property(nonatomic) unsigned long long localSongNum; // @synthesize localSongNum=_localSongNum;
@property(nonatomic) unsigned long long accompanimentNum; // @synthesize accompanimentNum=_accompanimentNum;
@property(nonatomic) long long voteRate; // @synthesize voteRate=_voteRate;
@property(nonatomic) long long winRate; // @synthesize winRate=_winRate;
@property(nonatomic) long long fansNum; // @synthesize fansNum=_fansNum;
@property(nonatomic) long long followedNum; // @synthesize followedNum=_followedNum;
@property(retain, nonatomic) NSString *judgeMedalDay; // @synthesize judgeMedalDay=_judgeMedalDay;
@property(nonatomic) unsigned long long judgeGrade; // @synthesize judgeGrade=_judgeGrade;
@property(nonatomic) long long judgeMedal; // @synthesize judgeMedal=_judgeMedal;
@property(nonatomic) long long honorMedal; // @synthesize honorMedal=_honorMedal;
@property(nonatomic) long long richMedal; // @synthesize richMedal=_richMedal;
@property(retain, nonatomic) NSString *compMedalDescr; // @synthesize compMedalDescr=_compMedalDescr;
@property(nonatomic) long long competitionMedal; // @synthesize competitionMedal=_competitionMedal;
@property(copy, nonatomic) NSString *userSignature; // @synthesize userSignature=_userSignature;
@property(nonatomic) _Bool ownerAccess; // @synthesize ownerAccess=_ownerAccess;
- (void).cxx_destruct;
- (void)refreshAccessState;
- (void)updateUserSpaceInfoByInfoNumber:(id)arg1;
- (void)updateUserSpaceInfoByLocation:(id)arg1;
- (void)updateUserSpaceInfoByKtvPlayerInfo:(id)arg1;
- (void)updateUserSpaceInfoByUserSpaceInfo:(id)arg1;
- (void)updateUserSpaceInfoByOthersInfo:(id)arg1;
- (void)updateUserSpaceInfoByBasicInfo:(id)arg1;
- (void)updateUserSpaceInfoByInfoEntity:(id)arg1;
- (void)setPlayerId:(long long)arg1;
- (id)init;

@end

