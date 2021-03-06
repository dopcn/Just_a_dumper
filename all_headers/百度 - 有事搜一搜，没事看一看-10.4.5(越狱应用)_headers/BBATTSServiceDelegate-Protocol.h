//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol BBATTSServiceDelegate <NSObject>

@optional
- (void)audioPlayerDidClickTTSDetailButton:(NSString *)arg1;
- (void)locateToTTS:(NSString *)arg1;
- (void)playPreviousTTSWithCurrentTTSID:(NSString *)arg1;
- (void)playNextTTSWithCurrentTTSID:(NSString *)arg1 isAutoPlay:(_Bool)arg2;
- (void)ttsDidMeetError:(NSError *)arg1 playingString:(NSString *)arg2 playingTTSID:(NSString *)arg3 canWork:(_Bool)arg4;
- (void)ttsPlayStatusDidChange:(unsigned long long)arg1 currentTTSText:(NSString *)arg2 currentTTSID:(NSString *)arg3;
- (void)didCloseTTSEngine;
- (void)didOpenTTSEngine;
@end

