//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ShareWebView.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString;

@interface WBLoginView : ShareWebView <UIWebViewDelegate>
{
    NSString *_redirectURL;
}

@property(retain, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
- (void).cxx_destruct;
- (void)cleanCookies;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loginWithAppkey:(id)arg1 redirectURL:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

