//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HXPageRoundScroller;

@protocol HXPageRoundScrollerDelegate <NSObject>
- (void)didEndScroll:(HXPageRoundScroller *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (void)didScroll:(HXPageRoundScroller *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (void)didScroll:(HXPageRoundScroller *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 withProgress:(float)arg4;
@end

