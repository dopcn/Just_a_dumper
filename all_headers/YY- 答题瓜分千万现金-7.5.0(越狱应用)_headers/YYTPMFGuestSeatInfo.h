//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYTPMFCommonTypeBase.h"

@class YYTPMFAnimEmoticonInfo, YYTPMFGodGoddessInfo;

@interface YYTPMFGuestSeatInfo : YYTPMFCommonTypeBase
{
    _Bool _isPublished;
    _Bool _isGodGoddess;
    _Bool _isMvp;
    long long _seatExtType;
    long long _seatStatus;
    long long _sex;
    unsigned long long _uid;
    unsigned long long _hiValue;
    unsigned long long _groupId;
    unsigned long long _position;
    unsigned long long _loverUid;
    unsigned long long _likedValue;
    unsigned long long _charmValue;
    unsigned long long _charmDelta;
    YYTPMFGodGoddessInfo *_godGoddessInfo;
    YYTPMFAnimEmoticonInfo *_emoticonInfo;
}

@property(retain, nonatomic) YYTPMFAnimEmoticonInfo *emoticonInfo; // @synthesize emoticonInfo=_emoticonInfo;
@property(nonatomic) _Bool isMvp; // @synthesize isMvp=_isMvp;
@property(retain, nonatomic) YYTPMFGodGoddessInfo *godGoddessInfo; // @synthesize godGoddessInfo=_godGoddessInfo;
@property(nonatomic) _Bool isGodGoddess; // @synthesize isGodGoddess=_isGodGoddess;
@property(nonatomic) unsigned long long charmDelta; // @synthesize charmDelta=_charmDelta;
@property(nonatomic) unsigned long long charmValue; // @synthesize charmValue=_charmValue;
@property(nonatomic) unsigned long long likedValue; // @synthesize likedValue=_likedValue;
@property(nonatomic) unsigned long long loverUid; // @synthesize loverUid=_loverUid;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long hiValue; // @synthesize hiValue=_hiValue;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(nonatomic) _Bool isPublished; // @synthesize isPublished=_isPublished;
@property(nonatomic) long long seatStatus; // @synthesize seatStatus=_seatStatus;
@property(nonatomic) long long seatExtType; // @synthesize seatExtType=_seatExtType;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

