//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSRequestDelegate-Protocol.h"

@class NSString, UIView, VSCartNativeDataHandle, VSDeleteCartHistoryRequest;
@protocol VSCartNativeServiceDelegate, VSUnifiedComponentsManagerProtocol, VSUnifiedComponentsViewProtocol;

@interface VSCartNativeService : NSObject <VSRequestDelegate>
{
    _Bool _isRequestingMcart;
    id <VSCartNativeServiceDelegate> _delegate;
    VSDeleteCartHistoryRequest *_deleteCartHistoryRequest;
    VSCartNativeDataHandle *_cartNativeDataHandle;
    CDUnknownBlockType _nativeCartServiceDidUpdate;
    CDUnknownBlockType _nativeCartWithCodeCallback;
    NSObject<VSUnifiedComponentsManagerProtocol> *_unifiedComponentsMgr;
    NSObject<VSUnifiedComponentsManagerProtocol> *_cartToOperationComponentsMgr;
    UIView<VSUnifiedComponentsViewProtocol> *_findULikeView;
    UIView<VSUnifiedComponentsViewProtocol> *_cartToOperationView;
    CDUnknownBlockType _findULikeCallback;
    CDUnknownBlockType _cartToOperationCallback;
    NSObject<VSUnifiedComponentsManagerProtocol> *_unifiedComponentsManager;
    UIView<VSUnifiedComponentsViewProtocol> *_unifiedComponentsView;
}

+ (void)clearSalesOfAttribution;
+ (void)removeSalesOfAttributionWithSkuId:(id)arg1;
+ (void)updateSalesOfAttribution:(id)arg1;
+ (void)isRecommendedCoupon:(_Bool)arg1;
@property(retain, nonatomic) UIView<VSUnifiedComponentsViewProtocol> *unifiedComponentsView; // @synthesize unifiedComponentsView=_unifiedComponentsView;
@property(retain, nonatomic) NSObject<VSUnifiedComponentsManagerProtocol> *unifiedComponentsManager; // @synthesize unifiedComponentsManager=_unifiedComponentsManager;
@property(copy, nonatomic) CDUnknownBlockType cartToOperationCallback; // @synthesize cartToOperationCallback=_cartToOperationCallback;
@property(copy, nonatomic) CDUnknownBlockType findULikeCallback; // @synthesize findULikeCallback=_findULikeCallback;
@property(retain, nonatomic) UIView<VSUnifiedComponentsViewProtocol> *cartToOperationView; // @synthesize cartToOperationView=_cartToOperationView;
@property(retain, nonatomic) UIView<VSUnifiedComponentsViewProtocol> *findULikeView; // @synthesize findULikeView=_findULikeView;
@property(retain, nonatomic) NSObject<VSUnifiedComponentsManagerProtocol> *cartToOperationComponentsMgr; // @synthesize cartToOperationComponentsMgr=_cartToOperationComponentsMgr;
@property(retain, nonatomic) NSObject<VSUnifiedComponentsManagerProtocol> *unifiedComponentsMgr; // @synthesize unifiedComponentsMgr=_unifiedComponentsMgr;
@property(copy, nonatomic) CDUnknownBlockType nativeCartWithCodeCallback; // @synthesize nativeCartWithCodeCallback=_nativeCartWithCodeCallback;
@property(nonatomic) _Bool isRequestingMcart; // @synthesize isRequestingMcart=_isRequestingMcart;
@property(copy, nonatomic) CDUnknownBlockType nativeCartServiceDidUpdate; // @synthesize nativeCartServiceDidUpdate=_nativeCartServiceDidUpdate;
@property(retain, nonatomic) VSCartNativeDataHandle *cartNativeDataHandle; // @synthesize cartNativeDataHandle=_cartNativeDataHandle;
@property(retain, nonatomic) VSDeleteCartHistoryRequest *deleteCartHistoryRequest; // @synthesize deleteCartHistoryRequest=_deleteCartHistoryRequest;
@property(nonatomic) __weak id <VSCartNativeServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)asynRequestcartToOperationComponents:(CDUnknownBlockType)arg1;
- (void)asynRequestUnifiedComponents:(CDUnknownBlockType)arg1;
- (void)hideDataReloadView;
- (void)showErrorDefaultView:(id)arg1;
- (void)handleErrorResponse:(id)arg1 error:(id)arg2;
- (void)requestError:(id)arg1 error:(id)arg2;
- (void)requestCompleted:(id)arg1 response:(id)arg2;
- (void)handleDeleteCartHistoryResponse:(id)arg1;
- (void)callback:(_Bool)arg1 response:(id)arg2;
- (void)cartRequestCallBack:(id)arg1 result:(_Bool)arg2 cartRequestType:(unsigned long long)arg3 response:(id)arg4 message:(id)arg5;
- (void)fetchSubscriberMessageWithSkuIds:(id)arg1 tipType:(id)arg2 value:(CDUnknownBlockType)arg3;
- (void)sendAccurateExposeStatic;
- (void)clearReserveInfo;
- (void)requestCartAdditionalInfo:(id)arg1;
- (void)requestCartEdit:(id)arg1 sizeNum:(id)arg2;
- (void)requestDeleteReserveCart:(id)arg1;
- (void)requestDeleteCart:(id)arg1;
- (void)requestDeleteCartHistory;
- (void)requestReserveInfo:(id)arg1;
- (void)requestCartHistory:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestGetCartHistory:(id)arg1;
- (void)requestGetCartHistory;
- (void)preloadDisplayHomeCollectedGoodsToastData;
- (void)requestRecommendProductWithCid:(id)arg1 dispatchGroup:(id)arg2;
- (void)requestRecommendProduct:(id)arg1;
- (void)doNonPreloadRequest;
- (void)fetchUnifiedComponentsManagerWithSuperView:(id)arg1 viewCallback:(CDUnknownBlockType)arg2;
- (void)requestCart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getNMSimpleCartData:(CDUnknownBlockType)arg1;
- (void)getSimpleCartData;
- (void)requestMcartGetCartWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestMcartGetCart;
- (id)packageShoppingCartRequest:(id)arg1;
- (void)dealloc;
- (id)initCartNativeService:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

