//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, XBWebView;

@interface XBUrlAppKeyMapNode : NSObject
{
    NSString *_appKey;
    unsigned long long _webviewHashCode;
    XBWebView *_webView;
}

@property(nonatomic) __weak XBWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) unsigned long long webviewHashCode; // @synthesize webviewHashCode=_webviewHashCode;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)description;

@end

