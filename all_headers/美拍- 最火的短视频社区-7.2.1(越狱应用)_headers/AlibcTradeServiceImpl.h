//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlibcTradeService-Protocol.h"

@class NSString;

@interface AlibcTradeServiceImpl : NSObject <AlibcTradeService>
{
}

+ (id)sharedInstance;
- (void)setShowTypeByRemote:(id)arg1;
- (void)showURL:(id)arg1 webView:(id)arg2;
- (void)creatWebView:(id)arg1 webView:(id *)arg2 viewControl:(id *)arg3 push:(_Bool)arg4;
- (long long)show:(id)arg1 webView:(id)arg2 page:(id)arg3 showParams:(id)arg4 taoKeParams:(id)arg5 trackParam:(id)arg6 tradeProcessSuccessCallback:(CDUnknownBlockType)arg7 tradeProcessFailedCallback:(CDUnknownBlockType)arg8;
- (long long)show:(id)arg1 page:(id)arg2 showParams:(id)arg3 taoKeParams:(id)arg4 trackParam:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

