//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol KGVipAppstorePayBLLDelegate;

@interface KGVipAppstorePayBLL : NSObject
{
    _Bool _isRestore;
    _Bool _isKuBi;
    id <KGVipAppstorePayBLLDelegate> _delegate;
    id _tag;
    NSString *_orderNumber;
    NSDictionary *_appStoreProIDDict;
    NSDictionary *_proIDDict;
    NSDictionary *_autoProIDDict;
    NSDictionary *_proKubiDict;
}

@property(retain, nonatomic) NSDictionary *proKubiDict; // @synthesize proKubiDict=_proKubiDict;
@property(retain, nonatomic) NSDictionary *autoProIDDict; // @synthesize autoProIDDict=_autoProIDDict;
@property(retain, nonatomic) NSDictionary *proIDDict; // @synthesize proIDDict=_proIDDict;
@property(retain, nonatomic) NSDictionary *appStoreProIDDict; // @synthesize appStoreProIDDict=_appStoreProIDDict;
@property(nonatomic) _Bool isKuBi; // @synthesize isKuBi=_isKuBi;
@property(copy, nonatomic) NSString *orderNumber; // @synthesize orderNumber=_orderNumber;
@property(readonly, nonatomic) _Bool isRestore; // @synthesize isRestore=_isRestore;
@property(readonly, nonatomic) id tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <KGVipAppstorePayBLLDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendError:(id)arg1 AndgmFlow:(int)arg2 productID:(id)arg3;
- (void)failFlowDelegate:(int)arg1 failDict:(id)arg2 AndError:(id)arg3;
- (void)successWithPayFlow:(int)arg1;
- (void)finishFlowDelegate:(int)arg1;
- (void)openVipWithUserId:(id)arg1 AndUserToken:(id)arg2 AndReceipt:(id)arg3 AndOrderNumber:(id)arg4 AndOutTradeNo:(id)arg5 AndSuccessRep:(CDUnknownBlockType)arg6 AndErrorRep:(CDUnknownBlockType)arg7;
- (void)requestOrderWithProductId:(id)arg1 AndUserId:(id)arg2 AndUserToken:(id)arg3 AndSourceId:(long long)arg4 AndHash:(id)arg5 AndRep:(CDUnknownBlockType)arg6 AndErrorRep:(CDUnknownBlockType)arg7;
- (void)toOpenVipWithUserId:(id)arg1 AndUserToken:(id)arg2 AndReceipt:(id)arg3 AndOrderNumber:(id)arg4 AndOutTradeNo:(id)arg5 AndTranEntity:(id)arg6;
- (void)toAppstoreWithProductId:(id)arg1 AndOrderNo:(id)arg2 AndUserId:(id)arg3 AndUserToken:(id)arg4;
- (void)restoreAppStoreWithReceipt:(id)arg1 AndUserId:(id)arg2 AndUserToken:(id)arg3 AndSourceId:(id)arg4 AndHash:(id)arg5 AndTag:(id)arg6;
- (void)batchRestorerequestOrderWithPrTranEntity:(id)arg1 userID:(id)arg2 userToken:(id)arg3 sourceID:(id)arg4 hash:(id)arg5 Rep:(CDUnknownBlockType)arg6;
- (void)restorerequestOrderWithPrTranEntity:(id)arg1 userID:(id)arg2 userToken:(id)arg3 sourceID:(id)arg4 hash:(id)arg5 Rep:(CDUnknownBlockType)arg6;
- (void)openVipWithProudctId:(id)arg1 AndUserId:(id)arg2 AndUserToken:(id)arg3 AndSourceId:(long long)arg4 AndHash:(id)arg5 AndTag:(id)arg6;
- (_Bool)isAutoProIDWithProID:(id)arg1;
- (id)arrayAppStoreProIds;

@end

