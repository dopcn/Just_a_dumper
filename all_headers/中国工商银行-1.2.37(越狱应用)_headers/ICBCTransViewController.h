//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICBCViewController.h"

#import "BnCQueryCommandWebViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BnCQueryCommandWebView, NSMutableDictionary, NSString, UILabel, VolumeNotificationObject;

@interface ICBCTransViewController : ICBCViewController <BnCQueryCommandWebViewDelegate, UIWebViewDelegate>
{
    _Bool isFromQrCode;
    _Bool _isNavHide;
    BnCQueryCommandWebView *webView;
    NSMutableDictionary *dataDic;
    NSString *oldUserAgent;
    UILabel *label;
    NSString *webviewType;
    NSString *_headTitle;
    VolumeNotificationObject *_volumeNotiObject;
}

@property(retain, nonatomic) VolumeNotificationObject *volumeNotiObject; // @synthesize volumeNotiObject=_volumeNotiObject;
@property(nonatomic) _Bool isNavHide; // @synthesize isNavHide=_isNavHide;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(retain, nonatomic) NSString *webviewType; // @synthesize webviewType;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
@property(nonatomic) _Bool isFromQrCode; // @synthesize isFromQrCode;
@property(retain, nonatomic) NSString *oldUserAgent; // @synthesize oldUserAgent;
@property(retain, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic;
@property(retain, nonatomic) BnCQueryCommandWebView *webView; // @synthesize webView;
- (void).cxx_destruct;
- (id)getCurrentShowWebView;
- (id)getWebviewType;
- (void)webviewBack;
- (void)webviewFailLoad:(id)arg1;
- (void)backToSubMenu;
- (void)hiddenTop;
- (void)showTop;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)callHideTabBar;
- (void)callTabBar;
- (void)backToMenu;
- (void)back;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)closePayWebViewWithData:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didQuerySuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

