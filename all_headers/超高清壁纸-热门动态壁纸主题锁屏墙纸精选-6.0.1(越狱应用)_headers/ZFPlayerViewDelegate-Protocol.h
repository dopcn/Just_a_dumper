//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, ZFPlayerView;

@protocol ZFPlayerViewDelegate <NSObject>
- (void)clickFullScreenBtn:(ZFPlayerView *)arg1 curretnVideoDict:(NSDictionary *)arg2;
- (void)showNextVideoReminder:(ZFPlayerView *)arg1;
- (void)playerViewLocked:(ZFPlayerView *)arg1;
- (void)clickPlayerView:(ZFPlayerView *)arg1;
@end

