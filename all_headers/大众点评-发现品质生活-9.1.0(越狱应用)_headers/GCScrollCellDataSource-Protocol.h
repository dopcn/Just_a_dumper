//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCScrollCell, UIView;

@protocol GCScrollCellDataSource <NSObject>
- (UIView *)scrollCell:(GCScrollCell *)arg1 viewForIndex:(long long)arg2;
- (struct CGSize)viewSizeForScrollCell:(GCScrollCell *)arg1;
- (long long)numberOfViewsInScrollCell:(GCScrollCell *)arg1;

@optional
- (long long)numberOfRowsPerPageInScrollCell:(GCScrollCell *)arg1;
@end

