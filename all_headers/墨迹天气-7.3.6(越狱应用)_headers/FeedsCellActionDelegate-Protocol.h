//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, UITableViewCell;

@protocol FeedsCellActionDelegate <NSObject>
- (void)didTapCell:(id)arg1 cell:(UITableViewCell *)arg2;

@optional
- (void)didClickCameraButtonWithObject:(id)arg1;
- (void)didClickButtonWithItemID:(NSNumber *)arg1 link:(NSString *)arg2;
@end

