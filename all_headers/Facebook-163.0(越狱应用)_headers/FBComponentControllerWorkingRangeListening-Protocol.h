//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol FBComponentControllerWorkingRangeListening <NSObject>

@optional
- (void)componentExitedFullImpressionRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2;
- (void)componentEnteredFullImpressionRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2;
- (void)componentExitedFocusedRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2 previousTransitions:(NSArray *)arg3;
- (void)componentEnteredFocusedRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2 previousTransitions:(NSArray *)arg3;
- (void)componentExitedVisibleRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2 previousTransitions:(NSArray *)arg3;
- (void)componentEnteredVisibleRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2 previousTransitions:(NSArray *)arg3;
- (void)componentExitedWorkingRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2;
- (void)componentEnteredWorkingRangeWithLayout:(const struct CKComponentLayout *)arg1 timestamp:(double)arg2;
@end

