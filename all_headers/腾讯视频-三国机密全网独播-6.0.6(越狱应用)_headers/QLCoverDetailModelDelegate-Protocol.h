//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, QLCoverDetailModel;

@protocol QLCoverDetailModelDelegate <NSObject>
- (void)coverDetailModelDidFinishAllload:(QLCoverDetailModel *)arg1;
- (void)coverDetailModelDidCancelPreload:(QLCoverDetailModel *)arg1;
- (void)coverDetailModelDidFinishPreload:(QLCoverDetailModel *)arg1;
- (void)coverDetailModel:(QLCoverDetailModel *)arg1 didFailedPreLoadWithError:(NSError *)arg2;
- (void)coverDetailModelDidStartPreload:(QLCoverDetailModel *)arg1;
@end

