//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class MNFRedEnvelopeAlertVC, MNMGoodsOrderGroupInfoEntity, MNRGoodsOrderGroupInfo, NSString, NewUserGiftViewController;

@interface StorePaySuccessViewController : MNBViewController <UIWebViewDelegate>
{
    unsigned long long _enumOrderSaleType;
    NSString *_orderId;
    NSString *_orderSuccessUrl;
    MNMGoodsOrderGroupInfoEntity *_entity;
    MNFRedEnvelopeAlertVC *_vcRedEnvelopAlert;
    NewUserGiftViewController *_vcNewUserGift;
    MNRGoodsOrderGroupInfo *_requestGoodsOrderDetail;
}

@property(retain, nonatomic) MNRGoodsOrderGroupInfo *requestGoodsOrderDetail; // @synthesize requestGoodsOrderDetail=_requestGoodsOrderDetail;
@property(retain, nonatomic) NewUserGiftViewController *vcNewUserGift; // @synthesize vcNewUserGift=_vcNewUserGift;
@property(retain, nonatomic) MNFRedEnvelopeAlertVC *vcRedEnvelopAlert; // @synthesize vcRedEnvelopAlert=_vcRedEnvelopAlert;
@property(retain, nonatomic) MNMGoodsOrderGroupInfoEntity *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSString *orderSuccessUrl; // @synthesize orderSuccessUrl=_orderSuccessUrl;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned long long enumOrderSaleType; // @synthesize enumOrderSaleType=_enumOrderSaleType;
- (void).cxx_destruct;
- (void)displayNewUserGift:(id)arg1;
- (void)showAppStoreAlert;
- (void)showRedEvenlope;
- (void)mndOptionalCloseBtnClick;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadGoodsOrderDataFailed;
- (void)loadGoodsOrderDataSuccess:(id)arg1;
- (void)loadGoodsOrderData;
- (void)backMainView;
- (void)mt_cancelLoadData;
- (void)mt_loadData;
- (void)viewDidLoad;
- (void)initSubViews;
- (void)createNavBarView;
- (void)mt_createViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

