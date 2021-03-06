//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, PicassoNavigatorActionInfo, PicassoNavigatorInfo, PicassoNavigatorItemInfo, UIColor, UIViewController;

@protocol PicassoNavigatorProtocol <NSObject>
- (void)popViewControllerWithInfo:(PicassoNavigatorActionInfo *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)pushViewControllerWithInfo:(PicassoNavigatorActionInfo *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)clearLeftNavigationItemsWithInfoArray:(NSArray *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)clearRightNavigationItemsWithInfoArray:(NSArray *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)setLeftNavigationItemsWithInfoArray:(NSArray *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)setRightNavigationItemsWithInfoArray:(NSArray *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)setNavigationBarTitleWithInfo:(PicassoNavigatorItemInfo *)arg1 completion:(void (^)(long long, NSDictionary *))arg2 withViewController:(UIViewController *)arg3;
- (void)setNavigationBackgroundColor:(UIColor *)arg1 withController:(UIViewController *)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 withController:(UIViewController *)arg3;

@optional
- (void)openScheme:(PicassoNavigatorInfo *)arg1 completion:(void (^)(long long, NSDictionary *))arg2;
@end

