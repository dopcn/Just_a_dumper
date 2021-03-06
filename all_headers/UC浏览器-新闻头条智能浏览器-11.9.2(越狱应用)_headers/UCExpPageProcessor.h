//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SystemSettingDataProcessor.h"

@class UCExpPageViewController;

@interface UCExpPageProcessor : SystemSettingDataProcessor
{
    _Bool _hasShow;
    UCExpPageViewController *_expPageViewController;
}

@property(nonatomic) _Bool hasShow; // @synthesize hasShow=_hasShow;
@property(retain, nonatomic) UCExpPageViewController *expPageViewController; // @synthesize expPageViewController=_expPageViewController;
- (void)showProtocolPage:(long long)arg1;
- (void)onUCUserExpPlan:(id)arg1;
- (void)onUCPrivacyClaim:(id)arg1;
- (void)onUCAgreement:(id)arg1;
- (void)onExperiencePlan:(id)arg1;
- (_Bool)isExpPageLive;
- (void)dealloc;

@end

