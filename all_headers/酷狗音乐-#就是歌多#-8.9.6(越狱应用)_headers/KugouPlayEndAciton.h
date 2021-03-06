//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KugouPlayEndAciton : UserActionRecord
{
    _Bool isSuccess;
    _Bool isFromOffLineFile;
    _Bool isManual;
    _Bool isPlayAndSave;
    _Bool isShort;
    _Bool isChangeVolume;
    _Bool _isBuffer;
    _Bool _isKuqunDj;
    _Bool _isActivePlay;
    int cacheType;
    NSString *songHash;
    long long playType;
    NSString *sourceFrom;
    long long mediaType;
    double startTime;
    double palyTime;
    NSString *fileName;
    NSString *singerName;
    long long fileSize;
    double mediaTotalTime;
    long long bitRate;
    double bufferTime;
    unsigned long long bufferTimes;
    unsigned long long errorCode;
    double progressTime;
    NSString *special_id;
    NSString *collecterId;
    NSString *collecterUserId;
    NSString *scid_albumid;
    long long songQuality;
    unsigned long long songSourceDevice;
    long long _mediaScreenType;
    NSString *_sourceSongHash;
    NSString *_ivar5;
}

@property(copy, nonatomic) NSString *ivar5; // @synthesize ivar5=_ivar5;
@property(nonatomic) _Bool isActivePlay; // @synthesize isActivePlay=_isActivePlay;
@property(nonatomic) _Bool isKuqunDj; // @synthesize isKuqunDj=_isKuqunDj;
@property(copy, nonatomic) NSString *sourceSongHash; // @synthesize sourceSongHash=_sourceSongHash;
@property(nonatomic) long long mediaScreenType; // @synthesize mediaScreenType=_mediaScreenType;
@property(nonatomic) _Bool isBuffer; // @synthesize isBuffer=_isBuffer;
@property(nonatomic) unsigned long long songSourceDevice; // @synthesize songSourceDevice;
@property(nonatomic) _Bool isChangeVolume; // @synthesize isChangeVolume;
@property(nonatomic) long long songQuality; // @synthesize songQuality;
@property(copy, nonatomic) NSString *scid_albumid; // @synthesize scid_albumid;
@property(copy, nonatomic) NSString *collecterUserId; // @synthesize collecterUserId;
@property(copy, nonatomic) NSString *collecterId; // @synthesize collecterId;
@property(copy, nonatomic) NSString *special_id; // @synthesize special_id;
@property(nonatomic) _Bool isShort; // @synthesize isShort;
@property(nonatomic) double progressTime; // @synthesize progressTime;
@property(nonatomic) int cacheType; // @synthesize cacheType;
@property(nonatomic) _Bool isPlayAndSave; // @synthesize isPlayAndSave;
@property(nonatomic) _Bool isManual; // @synthesize isManual;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode;
@property(nonatomic) unsigned long long bufferTimes; // @synthesize bufferTimes;
@property(nonatomic) double bufferTime; // @synthesize bufferTime;
@property(nonatomic) long long bitRate; // @synthesize bitRate;
@property(nonatomic) double mediaTotalTime; // @synthesize mediaTotalTime;
@property(nonatomic) long long fileSize; // @synthesize fileSize;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName;
@property(nonatomic) _Bool isFromOffLineFile; // @synthesize isFromOffLineFile;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(nonatomic) double palyTime; // @synthesize palyTime;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *sourceFrom; // @synthesize sourceFrom;
@property(nonatomic) long long playType; // @synthesize playType;
@property(copy, nonatomic) NSString *songHash; // @synthesize songHash;
- (void)dealloc;
- (_Bool)canSendRightAway;
- (void)coding;

@end

