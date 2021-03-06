//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebPageNavigation.h"

@interface UCWebPageNavigation : WebPageNavigation
{
    _Bool _isPageStartLoading;
    _Bool _shouldTryResetToolbar;
}

@property(nonatomic) _Bool shouldTryResetToolbar; // @synthesize shouldTryResetToolbar=_shouldTryResetToolbar;
@property(nonatomic) _Bool isPageStartLoading; // @synthesize isPageStartLoading=_isPageStartLoading;
- (void)trySwitchBottomBarV12;
- (void)didLeaveHomePage;
- (void)didEnterHomePage;
- (void)didSubscriptionDismiss;
- (void)didSubscriptionPresent;
- (void)didScrollOutChannelMode;
- (void)didScrollInChannelMode:(id)arg1;
- (void)onMainUIDidFinishLoad;
- (void)resetHomePageToolbar:(unsigned long long)arg1 withActive:(_Bool)arg2;
- (void)resetHomePageToolbar:(unsigned long long)arg1;
- (void)webAgent:(id)arg1 loadingStateChange:(int)arg2;
- (id)getViewWithTag:(int)arg1;
- (id)getIconWithTag:(int)arg1;
- (id)getTitleWithTag:(int)arg1;
- (id)getThumbnailWithTag:(int)arg1 andNeedsRefresh:(_Bool)arg2;
- (id)webPageGestureCurrentView:(id)arg1;
- (void)tryResetHomePageToolbar:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)setAgentIndex:(int)arg1;
- (id)currentWebAgent;
- (id)description;
- (void)dealloc;
- (id)init;

@end

