//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class NFCellActionInfo, NSArray, NSDictionary, NSString, UIView, UIViewController;

@protocol NewsFlowViewDelegate <UIScrollViewDelegate>
- (_Bool)homePageIsShowing;

@optional
- (void)channelTabBackButtonClick;
- (void)newsFlowViewDidEnterLongPressMode:(_Bool)arg1;
- (void)switchChannelViaScroll;
- (void)switchToTargetChannel:(NSString *)arg1;
- (_Bool)isInSingleChannelMode;
- (_Bool)isInChannelMode;
- (void)tryGotoChannel:(NSString *)arg1 forceSingleMode:(_Bool)arg2 userInfo:(NSDictionary *)arg3;
- (void)newsFlowViewDidOpenDetail:(NFCellActionInfo *)arg1 succeed:(_Bool)arg2;
- (void)newsFlowViewWillOpenDetail:(NFCellActionInfo *)arg1;
- (_Bool)newsFlowViewShouldOpenDetail:(NFCellActionInfo *)arg1;
- (void)newsFlowViewDidActiveContainers:(NSArray *)arg1;
- (void)newsFlowDidShowSearchBar;
- (void)newsFlowDidClickSearchBar:(UIView *)arg1 withVC:(UIViewController *)arg2;
- (void)openNewHomePage;
- (void)newsFlowViewHorizontalDidScroll:(double)arg1;
- (void)newsFlowViewIsRequesting:(_Bool)arg1 channel:(NSString *)arg2;
- (_Bool)isInWeMedia;
- (NSString *)activeChannel;
@end

