//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, QLShortPlayerStrategyConfig, QLShortVideoPlayerScrollMgr, UIView;

@protocol QLP_ShortVideoPlayerSponsor <NSObject>

@optional
@property(nonatomic) __weak QLShortVideoPlayerScrollMgr *bindingShortVideoScrollMgr;
- (void)qlp_ControlShortVideoPlayOrPause:(_Bool)arg1 strategy:(QLShortPlayerStrategyConfig *)arg2;
- (NSDictionary *)qlp_ShortVideoPlayerInfo;
- (UIView *)qlp_ShortVideoPlayerView;
@end

