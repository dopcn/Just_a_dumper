//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController, YKPagesManager;
@protocol YKPageDelegate;

@protocol YKPagesManagerDelegate <NSObject>
- (NSString *)ykPagesManager:(YKPagesManager *)arg1 titleForPageAtIndex:(long long)arg2;
- (void)ykPagesManager:(YKPagesManager *)arg1 reusePage:(UIViewController *)arg2 atIndex:(long long)arg3;
- (NSString *)ykPagesManager:(YKPagesManager *)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(YKPagesManager *)arg1;

@optional
- (void)ykPagesManager:(YKPagesManager *)arg1 scrollDirection:(unsigned long long)arg2;
- (NSString *)ykPagesManager:(YKPagesManager *)arg1 iconForPageAtIndex:(long long)arg2;
- (void)stopAtEndWithYkPagesManager:(YKPagesManager *)arg1;
- (void)ykPagesManager:(YKPagesManager *)arg1 exposureIndexs:(NSArray *)arg2;
- (void)ykPagesManager:(YKPagesManager *)arg1 selectedIndexDidChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(YKPagesManager *)arg1 selectedIndexWillChangeFrom:(long long)arg2 to:(long long)arg3 byMenuView:(_Bool)arg4;
- (void)ykPagesManager:(YKPagesManager *)arg1 didActivatePage:(UIViewController *)arg2 atIndex:(long long)arg3;
- (NSString *)ykPagesManager:(YKPagesManager *)arg1 classNameForPageAtIndex:(long long)arg2;
- (UIViewController<YKPageDelegate> *)ykPagesManager:(YKPagesManager *)arg1 controllerForPageAtIndex:(long long)arg2;
@end

