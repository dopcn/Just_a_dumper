//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QBProtocolDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, QBProtocolCallback;
@protocol UIWebViewDelegate;

@interface QBUIWebViewProxy : NSObject <QBProtocolDelegate, UIWebViewDelegate>
{
    _Bool _startNewNetworkRequest;
    _Bool _startNewRequest;
    QBProtocolCallback *_callback;
    NSURL *_currentMainURL;
    id <UIWebViewDelegate> _delegate;
    NSString *_webviewUA;
}

@property(retain, nonatomic) NSString *webviewUA; // @synthesize webviewUA=_webviewUA;
@property(nonatomic) __weak id <UIWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isMainRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)protocolDidInitMainRequest:(id)arg1 withObject:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)getCallBackHashId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

