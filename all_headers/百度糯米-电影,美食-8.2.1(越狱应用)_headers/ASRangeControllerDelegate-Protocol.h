//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASRangeController, NSArray, NSIndexSet;

@protocol ASRangeControllerDelegate <NSObject>
- (void)rangeController:(ASRangeController *)arg1 didDeleteSectionsAtIndexSet:(NSIndexSet *)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)rangeController:(ASRangeController *)arg1 didInsertSectionsAtIndexSet:(NSIndexSet *)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)rangeController:(ASRangeController *)arg1 didDeleteNodes:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)rangeController:(ASRangeController *)arg1 didInsertNodes:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)rangeController:(ASRangeController *)arg1 didEndUpdatesAnimated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)didBeginUpdatesInRangeController:(ASRangeController *)arg1;
@end

