//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SofaBaseWebViewController.h"

#import "ONEGestureBackInteractionDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, RACSubject, SofaBizDataSource;

@interface SofaNavigationWebViewController : SofaBaseWebViewController <ONEGestureBackInteractionDelegate>
{
    _Bool _hideNavigationBarAtFirstPage;
    _Bool _disablePopEvent;
    RACSubject *_h5ClickSubject;
    SofaBizDataSource *_sofaDataSource;
    NSDictionary *_detailDic;
    NSMutableDictionary *_getParams;
    NSString *_customTitle;
}

@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain, nonatomic) NSMutableDictionary *getParams; // @synthesize getParams=_getParams;
@property(retain, nonatomic) NSDictionary *detailDic; // @synthesize detailDic=_detailDic;
@property(retain, nonatomic) SofaBizDataSource *sofaDataSource; // @synthesize sofaDataSource=_sofaDataSource;
@property(retain, nonatomic) RACSubject *h5ClickSubject; // @synthesize h5ClickSubject=_h5ClickSubject;
@property(nonatomic) _Bool disablePopEvent; // @synthesize disablePopEvent=_disablePopEvent;
@property(nonatomic) _Bool hideNavigationBarAtFirstPage; // @synthesize hideNavigationBarAtFirstPage=_hideNavigationBarAtFirstPage;
- (void).cxx_destruct;
- (_Bool)disableGuesture;
- (void)p_clearLeftNavigationView;
- (void)p_addLeftNavigationView;
- (void)trWebViewDidFinishLoad:(id)arg1;
- (void)p_updateNavigationBarTitleWithWebView:(id)arg1;
- (void)p_updateShouldShowNavigationBarBackButton;
- (void)p_updateShouldShowNavigationBar;
- (id)getUrlForData:(id)arg1 withUrl:(id)arg2;
- (id)baseUrl;
- (void)submitCancelReasonWithData:(id)arg1;
- (id)sofaProductId;
- (void)loadBridgeAndHandler;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

