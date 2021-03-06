//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class ECStoreObserver, NSString, SKProductsRequest;
@protocol ECPurchaseProductDelegate, ECPurchaseTransactionDelegate;

@interface ECPurchase : NSObject <SKProductsRequestDelegate>
{
    SKProductsRequest *_productsRequest;
    id <ECPurchaseProductDelegate> _productDelegate;
    id <ECPurchaseTransactionDelegate> _transactionDelegate;
    ECStoreObserver *_storeObserver;
    int _verifyRecepitMode;
    int _verifyReceiptStatus;
    int _resendReceiptTime;
    NSString *_receiptMsg;
}

+ (id)instance;
@property(copy, nonatomic) NSString *receiptMsg; // @synthesize receiptMsg=_receiptMsg;
@property(nonatomic) int resendReceiptTime; // @synthesize resendReceiptTime=_resendReceiptTime;
@property(nonatomic) int verifyReceiptStatus; // @synthesize verifyReceiptStatus=_verifyReceiptStatus;
@property(nonatomic) int verifyRecepitMode; // @synthesize verifyRecepitMode=_verifyRecepitMode;
@property(nonatomic) id <ECPurchaseTransactionDelegate> transactionDelegate; // @synthesize transactionDelegate=_transactionDelegate;
@property(nonatomic) id <ECPurchaseProductDelegate> productDelegate; // @synthesize productDelegate=_productDelegate;
- (void)verifyReceiptCompleted;
- (void)verifyReceiptUncompleted;
- (void)resendReceipt;
- (void)checkVerifyReceiptStatus;
- (id)stringDecrypt:(id)arg1 XorString:(id)arg2;
- (id)stringEncrypt:(id)arg1 XorString:(id)arg2;
- (void)dealloc;
- (id)getFailedTrans;
- (id)getRestoreTrans;
- (id)getCompleteTrans;
- (void)didFinishServerVerify:(id)arg1;
- (void)ServerVerifyReceipt:(id)arg1;
- (void)didFinishVerify:(id)arg1;
- (void)verifyReceipt:(id)arg1;
- (void)registerNotifications;
- (void)restoreTransaction:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)addPaymentWithProduct:(id)arg1;
- (void)removeTransactionObserver;
- (void)addTransactionObserver;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestProductData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

