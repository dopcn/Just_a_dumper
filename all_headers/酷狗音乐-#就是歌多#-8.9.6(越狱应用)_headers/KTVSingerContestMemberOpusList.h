//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVSingerContestPlayerInfo, NSArray;
@protocol KTVSingerContestOpusInfo;

@interface KTVSingerContestMemberOpusList : KTVObjectModel
{
    KTVSingerContestPlayerInfo *_player;
    NSArray<KTVSingerContestOpusInfo> *_opusList;
}

@property(retain, nonatomic) NSArray<KTVSingerContestOpusInfo> *opusList; // @synthesize opusList=_opusList;
@property(retain, nonatomic) KTVSingerContestPlayerInfo *player; // @synthesize player=_player;
- (void).cxx_destruct;

@end

