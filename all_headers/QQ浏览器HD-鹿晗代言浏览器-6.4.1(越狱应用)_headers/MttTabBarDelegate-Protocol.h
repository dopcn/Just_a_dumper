//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MttMutipleTabBar;

@protocol MttTabBarDelegate <NSObject>
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 didReplaceBrowserWindowIndex:(long long)arg2 withIndex:(long long)arg3;
- (void)mttMutipleTabBarClearRevertWebBrowserWindows:(MttMutipleTabBar *)arg1;
- (void)mttMutipleTabBarShowRevertWebBrowserWindowList:(MttMutipleTabBar *)arg1;
- (void)mttMutipleTabBarAddNewWebBrowserWindow:(MttMutipleTabBar *)arg1;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 revertBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 restoreBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 closeRightBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 closeleftBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 closeOtherBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 closeAllBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 closedBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(MttMutipleTabBar *)arg1 selectedBrowserWindowChangedWithIndex:(unsigned long long)arg2;
@end

