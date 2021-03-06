//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer;

@interface QSSupportData : NSObject
{
    NSMutableDictionary *_supportInfo;
    NSTimer *_timer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *supportInfo; // @synthesize supportInfo=_supportInfo;
- (void).cxx_destruct;
- (void)save;
- (unsigned long long)teamSupportStatusforTeam:(id)arg1 ofCate:(id)arg2;
- (void)setTeamStatus:(unsigned long long)arg1 forTeam:(id)arg2 ofCate:(id)arg3;
- (unsigned long long)playerSupportStatusforPlayer:(id)arg1 ofCate:(id)arg2;
- (void)setPlayerStatus:(unsigned long long)arg1 forPlayer:(id)arg2 ofCate:(id)arg3;
- (unsigned long long)matchSupportStatusWithMid:(id)arg1;
- (void)setMatchSupportStatus:(unsigned long long)arg1 forMatch:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)cachePath;

@end

