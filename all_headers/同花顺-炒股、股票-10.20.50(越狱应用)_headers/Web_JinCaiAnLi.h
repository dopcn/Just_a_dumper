//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CompView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WebViewProcessDelegate-Protocol.h"

@class CWebview, NSString, UIButton, UILabel;

@interface Web_JinCaiAnLi : CompView <UIScrollViewDelegate, WebViewProcessDelegate>
{
    CWebview *_webJCAL;
    UIButton *_btnOrder;
    int _nCacheId;
    NSString *_strSid;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) NSString *_strSid; // @synthesize _strSid;
@property(retain, nonatomic) UIButton *_btnOrder; // @synthesize _btnOrder;
- (void)dealloc;
- (void)didDisappear;
- (void)didAppear;
- (void)willDisappear;
- (void)willAppear;
- (void)checkAndRequestBandTelNum;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webViewdidFailLoadWithError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadWebRequest;
- (void)initWebView;
- (void)onOrderBtn;
- (void)onFinishInflate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

