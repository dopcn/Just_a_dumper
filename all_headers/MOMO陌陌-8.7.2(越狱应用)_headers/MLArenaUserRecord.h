//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EtaModel.h"

@interface MLArenaUserRecord : EtaModel
{
    unsigned long long _drawCount;
    unsigned long long _lossCount;
    unsigned long long _winCount;
    unsigned long long _winStreakCount;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(nonatomic) unsigned long long winStreakCount; // @synthesize winStreakCount=_winStreakCount;
@property(nonatomic) unsigned long long winCount; // @synthesize winCount=_winCount;
@property(nonatomic) unsigned long long lossCount; // @synthesize lossCount=_lossCount;
@property(nonatomic) unsigned long long drawCount; // @synthesize drawCount=_drawCount;

@end

