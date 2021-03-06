//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, ViewPagerController;

@protocol ViewPagerDelegate <NSObject>

@optional
- (UIColor *)viewPager:(ViewPagerController *)arg1 colorForComponent:(unsigned long long)arg2 withDefault:(UIColor *)arg3;
- (double)viewPager:(ViewPagerController *)arg1 valueForOption:(unsigned long long)arg2 withDefault:(double)arg3;
- (void)viewPager:(ViewPagerController *)arg1 didChangeTabToIndex:(unsigned long long)arg2;
@end

