//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, QXLViewerBaseModel, QXLViewerCollectionCell;

@protocol QXLViewerCollectionCellDelegate <NSObject>

@optional
- (void)collectionCellNeedLoadMoreData:(QXLViewerCollectionCell *)arg1;
- (void)collectionCellTryLoadDidClicked:(QXLViewerCollectionCell *)arg1;
- (void)collectionCell:(QXLViewerCollectionCell *)arg1 triggerHeaderAction:(NSDictionary *)arg2;
- (void)collectionCell:(QXLViewerCollectionCell *)arg1 didSelectRowWithModel:(QXLViewerBaseModel *)arg2;
@end

