//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AdrWebViewDelegate-Protocol.h"

@class NSString;
@protocol AdrWebViewDelegate, AdrWebViewProgressDelegate;

@interface AdrWebViewProgress : NSObject <AdrWebViewDelegate>
{
    unsigned long long _loadingCount;
    unsigned long long _maxLoadCount;
    _Bool _interactive;
    float _progress;
    id <AdrWebViewProgressDelegate> _progressDelegate;
    id <AdrWebViewDelegate> _webViewProxyDelegate;
}

@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <AdrWebViewDelegate> webViewProxyDelegate; // @synthesize webViewProxyDelegate=_webViewProxyDelegate;
@property(nonatomic) __weak id <AdrWebViewProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (void)progressCompletedLoadWebView:(id)arg1 error:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)reset;
- (void)setProgress:(float)arg1;
- (void)completeProgress;
- (void)incrementProgress;
- (void)startProgress;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

