//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol PurchaseInAppStoreDelegate;

@interface TPurchaseInAppStore : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    id <PurchaseInAppStoreDelegate> delegate;
    NSMutableArray *transactionHistory;
}

+ (id)getInstance;
@property(nonatomic) id <PurchaseInAppStoreDelegate> delegate; // @synthesize delegate;
- (void)restoreTransaction:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (_Bool)isPurchasedLilyTexture;
- (_Bool)isPurchasedLilyFilter;
- (_Bool)isPUrchasedStickers;
- (_Bool)isPurchasedRemoveAds;
- (void)handlePurchasedCoins:(id)arg1;
- (void)handlePurchasedRemoveAds:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)provideContent:(id)arg1;
- (void)recordTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)purchasedTransaction:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestAllProducts;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestProductData:(id)arg1;
- (_Bool)canMakePay;
- (void)errorTip:(id)arg1;
- (void)perchaseProduct:(id)arg1;
- (void)buy:(id)arg1;
- (void)restore;
- (void)removeTransactionObserver;
- (void)addTransactionObserver;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

