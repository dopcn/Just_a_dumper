//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseEntity.h"

@class NSArray, NSString;

@interface AnchorEntity : BaseEntity
{
    _Bool _forbidOrderSong;
    _Bool _followed;
    _Bool _familyAnchor;
    long long _userId;
    long long _anchorLevel;
    long long _appAnchorLevel;
    long long _wealthLevel;
    long long _wealthScore;
    long long _anchorScore;
    long long _upAnchorLevelScore;
    long long _upWealthLevelScore;
    NSString *_nick;
    NSString *_avatar;
    long long _followedCount;
    long long _followCount;
    long long _videoNum;
    NSString *_intro;
    long long _freeGiftTotal;
    long long _activityGiftId;
    long long _activityGiftTotal;
    long long _activityGiftOngoing;
    long long _userNum;
    long long _cityId;
    long long _provinceId;
    NSString *_city;
    long long _curAnchorScorePercent;
    NSArray *_eventIcons;
    NSString *_config;
    long long _familyId;
    long long _familyBadge;
    NSString *_familyBadgeName;
    NSString *_familyBadgeImageUrl;
    long long _sex;
    long long _age;
    NSString *_liveCoverUrl;
    long long _familyRoomId;
    long long _familyMicroStatus;
    long long _roomId;
    NSArray *_badgeList;
    long long _status;
    long long _invited;
    long long _confirm;
}

@property(nonatomic) long long confirm; // @synthesize confirm=_confirm;
@property(nonatomic) long long invited; // @synthesize invited=_invited;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *badgeList; // @synthesize badgeList=_badgeList;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long familyMicroStatus; // @synthesize familyMicroStatus=_familyMicroStatus;
@property(nonatomic) long long familyRoomId; // @synthesize familyRoomId=_familyRoomId;
@property(copy, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
@property(nonatomic) long long age; // @synthesize age=_age;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(nonatomic) _Bool familyAnchor; // @synthesize familyAnchor=_familyAnchor;
@property(copy, nonatomic) NSString *familyBadgeImageUrl; // @synthesize familyBadgeImageUrl=_familyBadgeImageUrl;
@property(copy, nonatomic) NSString *familyBadgeName; // @synthesize familyBadgeName=_familyBadgeName;
@property(nonatomic) long long familyBadge; // @synthesize familyBadge=_familyBadge;
@property(nonatomic) long long familyId; // @synthesize familyId=_familyId;
@property(copy, nonatomic) NSString *config; // @synthesize config=_config;
@property(retain, nonatomic) NSArray *eventIcons; // @synthesize eventIcons=_eventIcons;
@property(nonatomic) long long curAnchorScorePercent; // @synthesize curAnchorScorePercent=_curAnchorScorePercent;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) long long provinceId; // @synthesize provinceId=_provinceId;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic) _Bool forbidOrderSong; // @synthesize forbidOrderSong=_forbidOrderSong;
@property(nonatomic) long long userNum; // @synthesize userNum=_userNum;
@property(nonatomic) long long activityGiftOngoing; // @synthesize activityGiftOngoing=_activityGiftOngoing;
@property(nonatomic) long long activityGiftTotal; // @synthesize activityGiftTotal=_activityGiftTotal;
@property(nonatomic) long long activityGiftId; // @synthesize activityGiftId=_activityGiftId;
@property(nonatomic) long long freeGiftTotal; // @synthesize freeGiftTotal=_freeGiftTotal;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) long long videoNum; // @synthesize videoNum=_videoNum;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long followedCount; // @synthesize followedCount=_followedCount;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) long long upWealthLevelScore; // @synthesize upWealthLevelScore=_upWealthLevelScore;
@property(nonatomic) long long upAnchorLevelScore; // @synthesize upAnchorLevelScore=_upAnchorLevelScore;
@property(nonatomic) long long anchorScore; // @synthesize anchorScore=_anchorScore;
@property(nonatomic) long long wealthScore; // @synthesize wealthScore=_wealthScore;
@property(nonatomic) long long wealthLevel; // @synthesize wealthLevel=_wealthLevel;
@property(nonatomic) long long appAnchorLevel; // @synthesize appAnchorLevel=_appAnchorLevel;
@property(nonatomic) long long anchorLevel; // @synthesize anchorLevel=_anchorLevel;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

