//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BBATabPageView, UIViewController;

@protocol BBATabPageViewDelegate <NSObject>

@optional
- (void)tabPageContainerView:(BBATabPageView *)arg1 willClickToShowViewController:(UIViewController *)arg2 atIndex:(long long)arg3;
- (void)tabPageContainerView:(BBATabPageView *)arg1 willSlideToShowViewController:(UIViewController *)arg2 atIndex:(long long)arg3;
@end

