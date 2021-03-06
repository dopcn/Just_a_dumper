//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAModel.h"

@class FAUserAuthenPresetLiveInfoModel, FAUserMobileLiveStarStatus, FAUserRichLevelInfo, FAUserStarLevelInfo, NSString;
@protocol Optional;

@interface FAUserModel : FAModel
{
    _Bool _isLook;
    _Bool _isGift;
    _Bool _isLoginKG;
    NSString *_pid;
    long long _coin;
    long long _kugouId;
    long long _userId;
    NSString *_token;
    long long _partnerid;
    NSString *_userLogo;
    NSString *_nickName;
    long long _sex;
    long long _vip;
    long long _richLevel;
    NSString<Optional> *_userLogoM;
    NSString *_userName;
    long long _starLevel;
    long long _followCount;
    long long _fansCount;
    long long _starCard;
    long long _opusCount;
    long long _imgCount;
    NSString *_userPhone;
    long long _roomId;
    double _bean;
    FAUserRichLevelInfo<Optional> *_richInfo;
    FAUserStarLevelInfo<Optional> *_starInfo;
    FAUserMobileLiveStarStatus *_starStatus;
    FAUserAuthenPresetLiveInfoModel *_authenPresetLiveInfo;
}

@property(retain, nonatomic) FAUserAuthenPresetLiveInfoModel *authenPresetLiveInfo; // @synthesize authenPresetLiveInfo=_authenPresetLiveInfo;
@property(retain, nonatomic) FAUserMobileLiveStarStatus *starStatus; // @synthesize starStatus=_starStatus;
@property(copy, nonatomic) FAUserStarLevelInfo<Optional> *starInfo; // @synthesize starInfo=_starInfo;
@property(copy, nonatomic) FAUserRichLevelInfo<Optional> *richInfo; // @synthesize richInfo=_richInfo;
@property(nonatomic) double bean; // @synthesize bean=_bean;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *userPhone; // @synthesize userPhone=_userPhone;
@property(nonatomic) long long imgCount; // @synthesize imgCount=_imgCount;
@property(nonatomic) long long opusCount; // @synthesize opusCount=_opusCount;
@property(nonatomic) _Bool isLoginKG; // @synthesize isLoginKG=_isLoginKG;
@property(nonatomic) _Bool isGift; // @synthesize isGift=_isGift;
@property(nonatomic) long long starCard; // @synthesize starCard=_starCard;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long starLevel; // @synthesize starLevel=_starLevel;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString<Optional> *userLogoM; // @synthesize userLogoM=_userLogoM;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
@property(nonatomic) _Bool isLook; // @synthesize isLook=_isLook;
@property(nonatomic) long long vip; // @synthesize vip=_vip;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(nonatomic) long long partnerid; // @synthesize partnerid=_partnerid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long coin; // @synthesize coin=_coin;
@property(nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end

