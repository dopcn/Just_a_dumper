//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NTESNBAudioMiniPlayer;

@protocol NTESNBAudioMiniPlayerDelegate <NSObject>

@optional
- (void)audioMiniPlayerAvatarDidClicked:(NTESNBAudioMiniPlayer *)arg1;
- (void)audioMiniPlayerCloseButtonDidClicked:(NTESNBAudioMiniPlayer *)arg1;
- (void)audioMiniPlayerPauseButtonDidClicked:(NTESNBAudioMiniPlayer *)arg1;
- (void)audioMiniPlayerPlayButtonDidClicked:(NTESNBAudioMiniPlayer *)arg1;
@end

