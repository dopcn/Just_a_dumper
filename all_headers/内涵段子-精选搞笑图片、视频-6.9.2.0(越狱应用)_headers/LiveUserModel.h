//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class LiveAvatarURLModel, LiveRoomStatsModel, LiveSpendGradeModel, LiveUserStatsModel, LivingRoomAttrs, NSArray, NSNumber, NSString;

@interface LiveUserModel : MTLModel <MTLJSONSerializing>
{
    _Bool _birthdayVaild;
    _Bool _enableWalletBubble;
    _Bool _blockStatus;
    _Bool _sinaVerified;
    _Bool _isAuthor;
    _Bool _canOthersDownloadVideo;
    _Bool _canBeFoundByAddressBook;
    _Bool _canBeFoundByGossip;
    _Bool _canBeLocatedByOthers;
    _Bool _showProfileGuide;
    _Bool _hotsoonVerified;
    NSNumber *_userID;
    NSNumber *_shortID;
    NSString *_duanziID;
    NSString *_nickName;
    unsigned long long _gender;
    NSString *_signature;
    NSNumber *_level;
    NSNumber *_birthday;
    NSString *_birthdayDescription;
    NSString *_constellation;
    NSString *_city;
    long long _createTime;
    long long _followStatus;
    long long _followingLivePushStatus;
    long long _livePushStatus;
    long long _commentPushStatus;
    long long _diggPushStatus;
    long long _followPushStatus;
    long long _recomVideoPushStatus;
    long long _focusedPublishVideoPushStatus;
    LiveUserStatsModel *_stats;
    NSArray *_topFans;
    LiveAvatarURLModel *_avatarLarge;
    LiveAvatarURLModel *_avatarThumb;
    LiveAvatarURLModel *_avatarThumbIOS;
    LiveAvatarURLModel *_avatarMedium;
    unsigned long long _allowStatus;
    unsigned long long _allowVideoStatus;
    LivingRoomAttrs *_livingRoomAttrs;
    LiveRoomStatsModel *_livingRoomStats;
    NSNumber *_ticketCount;
    unsigned long long _verifyStatus;
    NSString *_sinaVerifiedReason;
    NSString *_ugcVerifyDesc;
    NSNumber *_topVipNo;
    LiveSpendGradeModel *_spendGrade;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_shareURL;
    NSString *_hotsoonVerifiedReason;
    NSNumber *_allowUseLinkMic;
    NSNumber *_profitsRate;
}

+ (id)spendGradeJSONTransformer;
+ (id)livingRoomStatsJSONTransformer;
+ (id)livingRoomAttrsJSONTransformer;
+ (id)topFansJSONTransformer;
+ (id)avatarLargeJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)verifyStatusJSONTransformer;
+ (id)allowVideoStatusJSONTransformer;
+ (id)allowStatusJSONTransformer;
+ (id)focusedPublishVideoPushStatusJSONTransformer;
+ (id)recomVideoPushStatusJSONTransformer;
+ (id)followPushStatusJSONTransformer;
+ (id)diggPushStatusJSONTransformer;
+ (id)commentPushStatusJSONTransformer;
+ (id)livePushStatusJSONTransformer;
+ (id)followingLivePushStatusJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)genderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *profitsRate; // @synthesize profitsRate=_profitsRate;
@property(readonly, nonatomic) NSNumber *allowUseLinkMic; // @synthesize allowUseLinkMic=_allowUseLinkMic;
@property(readonly, nonatomic) NSString *hotsoonVerifiedReason; // @synthesize hotsoonVerifiedReason=_hotsoonVerifiedReason;
@property(readonly, nonatomic) _Bool hotsoonVerified; // @synthesize hotsoonVerified=_hotsoonVerified;
@property(readonly, nonatomic) _Bool showProfileGuide; // @synthesize showProfileGuide=_showProfileGuide;
@property(readonly, nonatomic) _Bool canBeLocatedByOthers; // @synthesize canBeLocatedByOthers=_canBeLocatedByOthers;
@property(readonly, nonatomic) _Bool canBeFoundByGossip; // @synthesize canBeFoundByGossip=_canBeFoundByGossip;
@property(readonly, nonatomic) _Bool canBeFoundByAddressBook; // @synthesize canBeFoundByAddressBook=_canBeFoundByAddressBook;
@property(readonly, nonatomic) _Bool canOthersDownloadVideo; // @synthesize canOthersDownloadVideo=_canOthersDownloadVideo;
@property(readonly, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(readonly, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(readonly, nonatomic) LiveSpendGradeModel *spendGrade; // @synthesize spendGrade=_spendGrade;
@property(readonly, nonatomic) NSNumber *topVipNo; // @synthesize topVipNo=_topVipNo;
@property(readonly, nonatomic) NSString *ugcVerifyDesc; // @synthesize ugcVerifyDesc=_ugcVerifyDesc;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) _Bool sinaVerified; // @synthesize sinaVerified=_sinaVerified;
@property(readonly, nonatomic) NSString *sinaVerifiedReason; // @synthesize sinaVerifiedReason=_sinaVerifiedReason;
@property(nonatomic) unsigned long long verifyStatus; // @synthesize verifyStatus=_verifyStatus;
@property(readonly, nonatomic) NSNumber *ticketCount; // @synthesize ticketCount=_ticketCount;
@property(readonly, nonatomic) LiveRoomStatsModel *livingRoomStats; // @synthesize livingRoomStats=_livingRoomStats;
@property(readonly, nonatomic) LivingRoomAttrs *livingRoomAttrs; // @synthesize livingRoomAttrs=_livingRoomAttrs;
@property(readonly, nonatomic) unsigned long long allowVideoStatus; // @synthesize allowVideoStatus=_allowVideoStatus;
@property(readonly, nonatomic) unsigned long long allowStatus; // @synthesize allowStatus=_allowStatus;
@property(readonly, nonatomic) LiveAvatarURLModel *avatarMedium; // @synthesize avatarMedium=_avatarMedium;
@property(readonly, nonatomic) LiveAvatarURLModel *avatarThumbIOS; // @synthesize avatarThumbIOS=_avatarThumbIOS;
@property(readonly, nonatomic) LiveAvatarURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(readonly, nonatomic) LiveAvatarURLModel *avatarLarge; // @synthesize avatarLarge=_avatarLarge;
@property(readonly, nonatomic) NSArray *topFans; // @synthesize topFans=_topFans;
@property(readonly, nonatomic) LiveUserStatsModel *stats; // @synthesize stats=_stats;
@property(nonatomic) _Bool blockStatus; // @synthesize blockStatus=_blockStatus;
@property(nonatomic) long long focusedPublishVideoPushStatus; // @synthesize focusedPublishVideoPushStatus=_focusedPublishVideoPushStatus;
@property(nonatomic) long long recomVideoPushStatus; // @synthesize recomVideoPushStatus=_recomVideoPushStatus;
@property(nonatomic) long long followPushStatus; // @synthesize followPushStatus=_followPushStatus;
@property(nonatomic) long long diggPushStatus; // @synthesize diggPushStatus=_diggPushStatus;
@property(nonatomic) long long commentPushStatus; // @synthesize commentPushStatus=_commentPushStatus;
@property(nonatomic) long long livePushStatus; // @synthesize livePushStatus=_livePushStatus;
@property(nonatomic) long long followingLivePushStatus; // @synthesize followingLivePushStatus=_followingLivePushStatus;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(readonly, nonatomic) _Bool enableWalletBubble; // @synthesize enableWalletBubble=_enableWalletBubble;
@property(readonly, nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(readonly, nonatomic) NSString *birthdayDescription; // @synthesize birthdayDescription=_birthdayDescription;
@property(readonly, nonatomic) _Bool birthdayVaild; // @synthesize birthdayVaild=_birthdayVaild;
@property(readonly, nonatomic) NSNumber *birthday; // @synthesize birthday=_birthday;
@property(readonly, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, nonatomic) NSString *duanziID; // @synthesize duanziID=_duanziID;
@property(readonly, nonatomic) NSNumber *shortID; // @synthesize shortID=_shortID;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

