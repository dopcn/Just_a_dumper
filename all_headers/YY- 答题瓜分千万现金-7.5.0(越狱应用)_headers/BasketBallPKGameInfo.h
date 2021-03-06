//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface BasketBallPKGameInfo : NSObject
{
    unsigned int _gameId;
    unsigned int _serverTime;
    unsigned int _readyTime;
    unsigned int _startTime;
    unsigned int _endTime;
    unsigned int _totalGame;
    unsigned int _currentGame;
    unsigned int _roundStartTime;
    unsigned int _roundEndTime;
    unsigned int _punish;
    NSDictionary *_pkValue;
    NSDictionary *_highScore;
    NSDictionary *_wordings;
    NSDictionary *_avatarInfo;
    NSDictionary *_nickInfo;
    NSDictionary *_scores;
}

@property(nonatomic) unsigned int punish; // @synthesize punish=_punish;
@property(retain, nonatomic) NSDictionary *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NSDictionary *nickInfo; // @synthesize nickInfo=_nickInfo;
@property(retain, nonatomic) NSDictionary *avatarInfo; // @synthesize avatarInfo=_avatarInfo;
@property(retain, nonatomic) NSDictionary *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) NSDictionary *highScore; // @synthesize highScore=_highScore;
@property(retain, nonatomic) NSDictionary *pkValue; // @synthesize pkValue=_pkValue;
@property(nonatomic) unsigned int roundEndTime; // @synthesize roundEndTime=_roundEndTime;
@property(nonatomic) unsigned int roundStartTime; // @synthesize roundStartTime=_roundStartTime;
@property(nonatomic) unsigned int currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) unsigned int totalGame; // @synthesize totalGame=_totalGame;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int readyTime; // @synthesize readyTime=_readyTime;
@property(nonatomic) unsigned int serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) unsigned int gameId; // @synthesize gameId=_gameId;
- (void).cxx_destruct;
- (id)description;

@end

