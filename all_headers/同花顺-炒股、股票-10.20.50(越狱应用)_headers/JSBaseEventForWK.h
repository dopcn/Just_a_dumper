//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HXWKWebView, WKWebView;

@interface JSBaseEventForWK : NSObject
{
    WKWebView *_webView;
    HXWKWebView *_hxWKWebView;
}

@property(nonatomic) __weak HXWKWebView *hxWKWebView; // @synthesize hxWKWebView=_hxWKWebView;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)stopWebView:(id)arg1;
- (void)resetWebView:(id)arg1;
- (id)initWithHXWKWebView:(id)arg1;
- (id)initWithWebView:(id)arg1;

@end

