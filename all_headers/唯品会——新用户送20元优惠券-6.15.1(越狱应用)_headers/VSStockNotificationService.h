//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "VSRequestDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableString, NSString, VSCachedRemindMessage, VSCheckSubscriptionStatusRequest, VSFetchCachedRemindMessageRequest, VSMerchandiseImageRequest, VSRemoveCachedRemindMessageRequest, VSSkusInventoryDetailRequest, VSStockNotificationAlertView, VSStockNotificationSubscriptionParameterModel;

@interface VSStockNotificationService : NSObject <VSRequestDelegate, UIAlertViewDelegate>
{
    _Bool _isSubscription;
    _Bool _isRequesting;
    _Bool _isCurrentQueryInProcess;
    _Bool _isServiceAvailable;
    _Bool _isServiceStarted;
    _Bool _currentSubcribeResult;
    _Bool _currentReservedResult;
    int _payType;
    VSCheckSubscriptionStatusRequest *_cssRequest;
    VSFetchCachedRemindMessageRequest *_fcrmRequest;
    VSRemoveCachedRemindMessageRequest *_rcrmRequest;
    VSSkusInventoryDetailRequest *_sidRequest;
    VSMerchandiseImageRequest *_miRequest;
    NSMutableString *_didReadMessageList;
    NSArray *_cachedMessageList;
    VSStockNotificationAlertView *_alertView;
    VSCachedRemindMessage *_currentMessage;
    CDUnknownBlockType _subscriptionCallback;
    CDUnknownBlockType _statusCallback;
    NSMutableDictionary *_requestCallbackPool;
    unsigned long long _queryRepeatCount;
    VSStockNotificationSubscriptionParameterModel *_parameterModel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultService;
@property(nonatomic) _Bool currentReservedResult; // @synthesize currentReservedResult=_currentReservedResult;
@property(nonatomic) _Bool currentSubcribeResult; // @synthesize currentSubcribeResult=_currentSubcribeResult;
@property(retain, nonatomic) VSStockNotificationSubscriptionParameterModel *parameterModel; // @synthesize parameterModel=_parameterModel;
@property(nonatomic) int payType; // @synthesize payType=_payType;
@property(nonatomic) unsigned long long queryRepeatCount; // @synthesize queryRepeatCount=_queryRepeatCount;
@property(retain, nonatomic) NSMutableDictionary *requestCallbackPool; // @synthesize requestCallbackPool=_requestCallbackPool;
@property(nonatomic) _Bool isServiceStarted; // @synthesize isServiceStarted=_isServiceStarted;
@property(nonatomic) _Bool isServiceAvailable; // @synthesize isServiceAvailable=_isServiceAvailable;
@property(nonatomic) _Bool isCurrentQueryInProcess; // @synthesize isCurrentQueryInProcess=_isCurrentQueryInProcess;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(copy, nonatomic) CDUnknownBlockType statusCallback; // @synthesize statusCallback=_statusCallback;
@property(copy, nonatomic) CDUnknownBlockType subscriptionCallback; // @synthesize subscriptionCallback=_subscriptionCallback;
@property(nonatomic) _Bool isSubscription; // @synthesize isSubscription=_isSubscription;
@property(retain, nonatomic) VSCachedRemindMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(nonatomic) __weak VSStockNotificationAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSArray *cachedMessageList; // @synthesize cachedMessageList=_cachedMessageList;
@property(retain, nonatomic) NSMutableString *didReadMessageList; // @synthesize didReadMessageList=_didReadMessageList;
@property(retain, nonatomic) VSMerchandiseImageRequest *miRequest; // @synthesize miRequest=_miRequest;
@property(retain, nonatomic) VSSkusInventoryDetailRequest *sidRequest; // @synthesize sidRequest=_sidRequest;
@property(retain, nonatomic) VSRemoveCachedRemindMessageRequest *rcrmRequest; // @synthesize rcrmRequest=_rcrmRequest;
@property(retain, nonatomic) VSFetchCachedRemindMessageRequest *fcrmRequest; // @synthesize fcrmRequest=_fcrmRequest;
@property(retain, nonatomic) VSCheckSubscriptionStatusRequest *cssRequest; // @synthesize cssRequest=_cssRequest;
- (void).cxx_destruct;
- (void)showNotificationAlertView;
- (void)requestError:(id)arg1 error:(id)arg2;
- (void)requestCompleted:(id)arg1 response:(id)arg2;
- (void)sendRequest:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)requestImageOfMerchandiseForCachedMessage:(id)arg1;
- (void)requestStockWithSkuListString:(id)arg1;
- (void)logSwitchStatus;
- (void)reloadSwitch;
- (void)fetchSwitch;
- (CDUnknownBlockType)fetchSwitchCallback;
- (void)subscribeSkuStockNotificationResponseHandler;
- (void)isShowTipsAlert;
- (void)requestSubscriptionStatusForSkuIdList:(id)arg1;
- (void)requestSubscribeSkuStockNotification;
- (void)requestDeleteCachedMessageWithSkuId:(id)arg1;
- (void)requestCachedMessageForUser;
- (void)handleStockOfSkuListResponse:(id)arg1;
- (void)handleSubscriptionStatusResponse:(id)arg1;
- (void)handleDeleteCachedMessage:(id)arg1;
- (void)handleCachedMessageResponse:(id)arg1;
- (void)showMessageAlertView;
- (void)showDateAlertView:(id)arg1 isLastDate:(_Bool)arg2;
- (void)sessionDidChange:(id)arg1;
- (void)subscribeCurrentMerchandise:(_Bool)arg1 emptyStockSkuIdList:(id)arg2;
- (void)stockNotificationAlertViewDidClose:(_Bool)arg1;
- (id)skuListStringWithList:(id)arg1;
- (void)showNotificationAlertView:(id)arg1;
- (void)showSubscriptionAlertViewWithCallback:(CDUnknownBlockType)arg1;
- (void)removeCachedMessagesWithEmptyStockSkuIdList:(id)arg1;
- (void)registerRemoteNotificationResult:(_Bool)arg1;
- (_Bool)isServiceUsedInLastFiveDays;
- (_Bool)isRequestInProcessing:(id)arg1;
- (_Bool)isMessageDidRead:(long long)arg1;
- (_Bool)isRemoteNotificationEnabled;
- (void)judgeAreaChanged;
- (void)arrangeSubscription;
- (void)arrangeMessageId:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isServiceEnabled;
- (_Bool)isServiceEnableAutoCheck;
- (void)stopService;
- (void)resumeService;
- (void)startService;
- (void)subscribeWithParameter:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchSubscriptionStatusWithSkuList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchCachedMessageForUser;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

