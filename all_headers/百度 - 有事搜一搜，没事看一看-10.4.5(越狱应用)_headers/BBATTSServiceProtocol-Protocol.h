//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol BBATTSServiceDelegate;

@protocol BBATTSServiceProtocol <NSObject>
+ (_Bool)isBriefContentEnabled;
+ (void)updateAudioInfo:(NSDictionary *)arg1;
+ (void)appendText:(NSString *)arg1 forIdentity:(NSString *)arg2;
+ (void)playText:(NSString *)arg1 withIdentity:(NSString *)arg2;
+ (void)setDelegete:(id <BBATTSServiceDelegate>)arg1;
+ (NSString *)currentPlayedIdentity;
+ (void)cancel;
+ (void)play;
+ (void)pause;
+ (_Bool)isPaused;
+ (_Bool)isPlaying;
+ (_Bool)isOn;
@end

