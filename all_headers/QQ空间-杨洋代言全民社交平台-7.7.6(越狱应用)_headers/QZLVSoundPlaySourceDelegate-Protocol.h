//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QZLVSoundPlaySource;

@protocol QZLVSoundPlaySourceDelegate <NSObject>
- (void)audioSource:(QZLVSoundPlaySource *)arg1 changeDuration:(int)arg2 totalDuration:(int)arg3;
- (void)audioSource:(QZLVSoundPlaySource *)arg1 changeToState:(long long)arg2 fromState:(long long)arg3;
@end

