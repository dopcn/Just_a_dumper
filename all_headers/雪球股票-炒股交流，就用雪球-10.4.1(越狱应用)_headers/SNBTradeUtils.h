//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SNBBrokerBindDelegate-Protocol.h"

@class NSDictionary, NSString, SNBBroker, UIViewController;

@interface SNBTradeUtils : NSObject <SNBBrokerBindDelegate>
{
    UIViewController *tempVC;
    NSDictionary *_orderTypeList;
    CDUnknownBlockType _writeTokenCompletion;
    CDUnknownBlockType _brokerBindCompletion;
    CDUnknownBlockType _brokerBindCancel;
    SNBBroker *_currentBroker;
}

+ (void)_snb_SDKBrokerTradeWithBroker:(id)arg1 StockCode:(id)arg2 type:(long long)arg3;
+ (void)_snb_SDKBrokerTradeCancelWithBroker:(id)arg1;
+ (id)navigationVCFromURL:(id)arg1;
+ (void)tradeWithSDKBroker:(id)arg1 stockCode:(id)arg2 type:(long long)arg3;
+ (void)revokeWithSDKBroker:(id)arg1;
+ (_Bool)isOnlySDKBrokerThenTradeWithStockCode:(id)arg1 etype:(id)arg2 type:(long long)arg3;
+ (_Bool)isOnlySDKBrokerThenRevokeWithEtype:(id)arg1;
+ (id)isOnlySDKTradebleBrokerCheckWithEtype:(id)arg1;
+ (_Bool)versionLessThanVersion:(id)arg1 to:(id)arg2;
+ (void)handleBatchOrders:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)presentBrokerList:(id)arg1;
+ (id)shareUtils;
@property(retain, nonatomic) SNBBroker *currentBroker; // @synthesize currentBroker=_currentBroker;
@property(copy, nonatomic) CDUnknownBlockType brokerBindCancel; // @synthesize brokerBindCancel=_brokerBindCancel;
@property(copy, nonatomic) CDUnknownBlockType brokerBindCompletion; // @synthesize brokerBindCompletion=_brokerBindCompletion;
@property(copy, nonatomic) CDUnknownBlockType writeTokenCompletion; // @synthesize writeTokenCompletion=_writeTokenCompletion;
@property(copy, nonatomic) NSDictionary *orderTypeList; // @synthesize orderTypeList=_orderTypeList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)writeTokenRefreshNotification:(id)arg1;
- (void)willCancelBrokerBind:(id)arg1;
- (void)brokerBindVC:(id)arg1 resultData:(id)arg2;
- (id)getOrderTypeWithOrderName:(id)arg1;
- (id)getOrderNameWithOrderType:(id)arg1;
- (id)orderTypeNameWithOderType:(id)arg1;
- (void)showTradeViewWithTid:(id)arg1 fromViewController:(id)arg2;
- (void)showTradeViewWithTid:(id)arg1 action:(id)arg2 symbol:(id)arg3 price:(id)arg4 amount:(id)arg5 fromViewController:(id)arg6;
- (void)tradeWithSymbol:(id)arg1 isSale:(_Bool)arg2 tid:(id)arg3 isNative:(_Bool)arg4 fromViewController:(id)arg5;
- (void)showBindBroker:(id)arg1 isPresent:(_Bool)arg2 onViewController:(id)arg3 completion:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;
- (void)refreshBrokerToken:(id)arg1 onViewController:(id)arg2 shouldSupportSwitchBroker:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;
- (void)getRefreshTokenWithBroker:(id)arg1 onViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;
- (void)refreshTokenWithAttributes:(id)arg1 onViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;
- (void)refreshTokenWithSymbol:(id)arg1 onViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;
- (void)refreshTokenBeforeTradeWithBroker:(id)arg1 shouldSupportSwitchBroker:(_Bool)arg2 onViewController:(id)arg3 completion:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

