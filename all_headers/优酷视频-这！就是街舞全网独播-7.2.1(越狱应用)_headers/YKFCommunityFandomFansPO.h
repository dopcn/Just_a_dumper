//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFCommunityExpLevelItemPO, YKFCommunityFansManagerGroupInfoPO, YKFCommunityManagerRoleInfoPO, YKFCommunityMemberRolePO, YKFCommunityNameplatePO;

@interface YKFCommunityFandomFansPO : YKFAPIModel
{
    _Bool _isBlack;
    _Bool _isFollowFandom;
    _Bool _isShutup;
    long long _fandomId;
    long long _fandomType;
    long long _fansIdentity;
    long long _gender;
    NSString *_headPicUrl;
    NSString *_homePageUrl;
    YKFCommunityExpLevelItemPO *_levelVO;
    YKFCommunityFansManagerGroupInfoPO *_managerGroup;
    YKFCommunityManagerRoleInfoPO *_managerRole;
    YKFCommunityMemberRolePO *_memberRoleVO;
    YKFCommunityNameplatePO *_nameplateVO;
    NSString *_nickName;
    long long _userId;
}

@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) YKFCommunityNameplatePO *nameplateVO; // @synthesize nameplateVO=_nameplateVO;
@property(retain, nonatomic) YKFCommunityMemberRolePO *memberRoleVO; // @synthesize memberRoleVO=_memberRoleVO;
@property(retain, nonatomic) YKFCommunityManagerRoleInfoPO *managerRole; // @synthesize managerRole=_managerRole;
@property(retain, nonatomic) YKFCommunityFansManagerGroupInfoPO *managerGroup; // @synthesize managerGroup=_managerGroup;
@property(retain, nonatomic) YKFCommunityExpLevelItemPO *levelVO; // @synthesize levelVO=_levelVO;
@property(nonatomic) _Bool isShutup; // @synthesize isShutup=_isShutup;
@property(nonatomic) _Bool isFollowFandom; // @synthesize isFollowFandom=_isFollowFandom;
@property(nonatomic) _Bool isBlack; // @synthesize isBlack=_isBlack;
@property(retain, nonatomic) NSString *homePageUrl; // @synthesize homePageUrl=_homePageUrl;
@property(retain, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long fansIdentity; // @synthesize fansIdentity=_fansIdentity;
@property(nonatomic) long long fandomType; // @synthesize fandomType=_fandomType;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;

@end

