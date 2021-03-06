//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TPBEditEffectHomeView, TPBEditFilterModel;

@protocol TPBEditEffectHomeViewDelegate <NSObject>
- (void)effectHomeView:(TPBEditEffectHomeView *)arg1 updatePlayerRate:(double)arg2;
- (void)effectHomeView:(TPBEditEffectHomeView *)arg1 seekToProgress:(double)arg2;
- (void)effectHomeView:(TPBEditEffectHomeView *)arg1 effectModel:(TPBEditFilterModel *)arg2;
- (void)effectHomeDidEndLongPress:(TPBEditEffectHomeView *)arg1;
- (void)effectHomeViewDidBeginLongPress:(TPBEditEffectHomeView *)arg1;
- (void)effectHomeViewActionDidTrigger:(TPBEditEffectHomeView *)arg1;
- (void)effectHomeView:(TPBEditEffectHomeView *)arg1 draggedToProgress:(double)arg2;
@end

