//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CDShoppingGoodsDetailViewController, CDShoppingSku, NSString;

@protocol CDShoppingGoodsDetailViewControllerDelegate <NSObject>
- (void)doNotSelectSku;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 countDidPlusToMaxLeftCount:(long long)arg2;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 countDidPlusToMaxSingleLimitCount:(long long)arg2;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 countDidPlusToLeftBuyCount:(long long)arg2;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 countDidPlusToMaxLimitCount:(long long)arg2;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 countDidChanged:(long long)arg2 limitCount:(long long)arg3;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 shouldRefreshSuperGoodsWithGoodsID:(NSString *)arg2;
- (void)didPopoverShow;
- (void)detailViewController:(CDShoppingGoodsDetailViewController *)arg1 didSelectedSku:(CDShoppingSku *)arg2;
- (void)detailViewControllerDidTriggerLoadMore:(CDShoppingGoodsDetailViewController *)arg1;
@end

