//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SpeechMsgPlayerDelegate <NSObject>

@optional
- (void)OnReachMaxPlayTime:(unsigned int)arg1 fileTime:(unsigned int)arg2;
- (void)OnStopPlayData:(unsigned int)arg1 fileTime:(unsigned int)arg2;
- (void)OnAudioPlayError;
- (void)OnAudioPlayStatus:(unsigned int)arg1 fileTime:(unsigned int)arg2 volume:(unsigned int)arg3;
@end

