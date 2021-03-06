//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CommonTradeAssetCell, HoldingStockItem, NSString;

@protocol CommonTradeAssetCellDelegate <NSObject>

@optional
- (void)addOrRemoveSelfselStock:(HoldingStockItem *)arg1 tableViewCell:(CommonTradeAssetCell *)arg2;
- (void)modifyCostPrice:(HoldingStockItem *)arg1 tableViewCell:(CommonTradeAssetCell *)arg2;
- (void)detailStockInfo:(HoldingStockItem *)arg1 tableViewCell:(CommonTradeAssetCell *)arg2;
- (void)buyStock:(NSString *)arg1 tableViewCell:(CommonTradeAssetCell *)arg2;
- (void)sellStock:(NSString *)arg1 tableViewCell:(CommonTradeAssetCell *)arg2;
@end

