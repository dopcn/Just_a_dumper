//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PlayerContainerBottomControlViewDelegate <NSObject>
- (void)bottomViewClickSeekToTime:(double)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)bottomViewClickPauseButton:(_Bool)arg1;
- (void)bottomViewClickGiftButton;
- (void)bottomViewClickDanmakuEditButton;
- (void)bottomViewClickDanmakuSwitchButton:(_Bool)arg1;
- (void)bottomViewClickPostButton;
- (void)bottomViewClickChangeShowStyleButton;
@end

