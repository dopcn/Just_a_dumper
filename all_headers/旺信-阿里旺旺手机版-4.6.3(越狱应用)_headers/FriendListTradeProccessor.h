//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DelegateProccessor.h"

#import "TradeBizLogicDelegate-Protocol.h"

@class FriendListViewController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FriendListTradeProccessor : DelegateProccessor <TradeBizLogicDelegate>
{
    long long _completePage;
    NSMutableArray *_shopCollects;
}

@property(retain, nonatomic) NSMutableArray *shopCollects; // @synthesize shopCollects=_shopCollects;
@property(nonatomic) long long completePage; // @synthesize completePage=_completePage;
- (void).cxx_destruct;
- (void)didUnsubscribeShopWithSellerId:(id)arg1 withError:(id)arg2;
- (void)didQueryShopList:(id)arg1 withError:(id)arg2;
- (void)didQueryFavoriteShop:(id)arg1 withError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak FriendListViewController *owner; // @dynamic owner;
@property(readonly) Class superclass;

@end

