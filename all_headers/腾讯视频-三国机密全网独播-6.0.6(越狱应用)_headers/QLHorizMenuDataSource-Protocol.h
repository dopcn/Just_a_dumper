//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, QLHorizMenuView, UIColor, UIFont, UIImage;

@protocol QLHorizMenuDataSource <NSObject>
- (NSString *)horizMenu:(QLHorizMenuView *)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(QLHorizMenuView *)arg1;
- (UIColor *)backgroundColorForMenu:(QLHorizMenuView *)arg1;

@optional
- (_Bool)horizMenu:(QLHorizMenuView *)arg1 shouldDisplayRedPoint:(NSIndexPath *)arg2;
- (UIFont *)prominentSelectedItemFontForMenu:(QLHorizMenuView *)arg1;
- (unsigned long long)currentHorizMenuAligmentStyleForMenu:(QLHorizMenuView *)arg1;
- (struct CGSize)maskViewSizeForMenu:(QLHorizMenuView *)arg1;
- (UIImage *)selectedItemImageForMenu:(QLHorizMenuView *)arg1;
- (unsigned long long)eachItemWidthForMenu:(QLHorizMenuView *)arg1;
- (double)btnNaviMaskBottomGapHeight:(QLHorizMenuView *)arg1;
- (UIFont *)buttonFontForHorizMenu:(QLHorizMenuView *)arg1;
@end

