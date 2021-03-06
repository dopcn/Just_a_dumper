//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VSOrderModel;

@protocol VSPrevSellOrderListDataSourceDelegate <NSObject>
- (void)reloadPresellOrderTableViewIfNeed;
- (void)tableViewCell:(id)arg1 frameDidUpdatedWithOrder:(VSOrderModel *)arg2;
- (void)didSelectedCellOfOrder:(VSOrderModel *)arg1;
- (void)commentOrderAction:(VSOrderModel *)arg1;
- (void)payOrderAction:(VSOrderModel *)arg1;
- (void)showNoMoreDataView;
- (void)loadDataFinished;
- (void)beginLoadData;

@optional
- (void)countDownEnd;
- (void)reputationOrderAction:(VSOrderModel *)arg1;
@end

