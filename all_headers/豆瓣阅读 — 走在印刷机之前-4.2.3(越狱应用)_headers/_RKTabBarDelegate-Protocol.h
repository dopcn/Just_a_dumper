//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RKTabBarItem, _RKTabBar;

@protocol _RKTabBarDelegate <NSObject>

@optional
- (void)_tabBar:(_RKTabBar *)arg1 didDoubleClickSelectedItem:(RKTabBarItem *)arg2;
- (void)_tabBar:(_RKTabBar *)arg1 didClickSelectedItem:(RKTabBarItem *)arg2;
- (void)_tabBar:(_RKTabBar *)arg1 didSelectItem:(RKTabBarItem *)arg2;
- (_Bool)_tabBar:(_RKTabBar *)arg1 shouldSelectItem:(RKTabBarItem *)arg2;
@end

