//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebStoreBaseViewController.h"

#import "MTDUserLoginDelegate-Protocol.h"

@class MNRGetCouponURLWithLogin, NSString;

@interface GoodsOrderListViewController : WebStoreBaseViewController <MTDUserLoginDelegate>
{
    _Bool _isBackToRoot;
    _Bool _isFirstAppear;
    NSString *_stringIndex;
    MNRGetCouponURLWithLogin *_requestGetLoginUrl;
}

@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) MNRGetCouponURLWithLogin *requestGetLoginUrl; // @synthesize requestGetLoginUrl=_requestGetLoginUrl;
@property(nonatomic) _Bool isBackToRoot; // @synthesize isBackToRoot=_isBackToRoot;
@property(retain, nonatomic) NSString *stringIndex; // @synthesize stringIndex=_stringIndex;
- (void).cxx_destruct;
- (void)refreshCurrentWebView;
- (void)backAction:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)getLoginUrlOrderListFail;
- (void)getLoginUrlOrderListSuccess:(id)arg1;
- (void)mtdRequiredUserLoginSucess;
- (void)mt_loadData;
- (void)mt_cancelLoadData;
- (void)mt_destroyEvents;
- (void)mt_createEvents;
- (void)viewDidAppear:(_Bool)arg1;
- (void)createNavBarView;
- (void)mt_createViews;
- (void)mt_initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

