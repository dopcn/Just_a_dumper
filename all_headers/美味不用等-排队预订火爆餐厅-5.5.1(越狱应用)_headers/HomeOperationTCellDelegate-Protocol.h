//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HomeOperationTCell, NSIndexPath, OperationActivityModel;

@protocol HomeOperationTCellDelegate <NSObject>
- (void)operationTCell:(HomeOperationTCell *)arg1 didSelectedAtIndexPath:(NSIndexPath *)arg2;
- (OperationActivityModel *)operationTCell:(HomeOperationTCell *)arg1 modelAtIndexPath:(NSIndexPath *)arg2;
- (long long)operationTCell:(HomeOperationTCell *)arg1 numberOfItemsInSection:(long long)arg2;
@end

