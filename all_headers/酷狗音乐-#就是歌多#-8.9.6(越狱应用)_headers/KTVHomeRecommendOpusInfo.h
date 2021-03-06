//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSString;

@interface KTVHomeRecommendOpusInfo : KTVObjectModel
{
    int _opusType;
    long long _opusId;
    NSString *_opusName;
    KTVPlayerBaseInfo *_playerBase;
    long long _listenNum;
    NSString *_opusHash;
}

@property(copy, nonatomic) NSString *opusHash; // @synthesize opusHash=_opusHash;
@property(nonatomic) long long listenNum; // @synthesize listenNum=_listenNum;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase; // @synthesize playerBase=_playerBase;
@property(copy, nonatomic) NSString *opusName; // @synthesize opusName=_opusName;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
@property(nonatomic) int opusType; // @synthesize opusType=_opusType;
- (void).cxx_destruct;

@end

