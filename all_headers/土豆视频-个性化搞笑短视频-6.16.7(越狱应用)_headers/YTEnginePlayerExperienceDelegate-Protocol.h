//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol YTEnginePlayerExperienceDelegate <NSObject>

@optional
- (void)enginePlayer:(id)arg1 startAudioPlay:(_Bool)arg2;
- (void)enginePlayerSeekEnd:(id)arg1;
- (void)enginePlayerPassiveSeekBegin:(id)arg1 ignore:(_Bool)arg2;
- (void)enginePlayer:(id)arg1 playList:(NSString *)arg2;
- (void)enginePlayer:(id)arg1 cdnType:(long long)arg2;
- (void)enginePlayer:(id)arg1 cdnToRenderDelay:(double)arg2;
- (void)enginePlayer:(id)arg1 videoInitial:(long long)arg2;
- (void)enginePlayer:(id)arg1 renderDelay:(double)arg2;
- (void)enginePlayer:(id)arg1 videoHttp302Delay:(long long)arg2;
- (void)enginePlayer:(id)arg1 adHttp302Delay:(long long)arg2;
- (void)enginePlayer:(id)arg1 videoConnectDelay:(long long)arg2;
- (void)enginePlayer:(id)arg1 adConnectDelay:(long long)arg2;
- (void)enginePlayer:(id)arg1 startP2P:(NSString *)arg2 index:(NSString *)arg3;
- (void)enginePlayer:(id)arg1 startVideoClip:(NSString *)arg2 index:(NSString *)arg3;
@end

