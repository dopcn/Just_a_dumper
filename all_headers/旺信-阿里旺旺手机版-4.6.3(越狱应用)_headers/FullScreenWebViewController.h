//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EAppBridgeWebviewController.h"

@class NJKWebViewProgressView;

__attribute__((visibility("hidden")))
@interface FullScreenWebViewController : EAppBridgeWebviewController
{
    NJKWebViewProgressView *_topProgressView;
}

@property(retain, nonatomic) NJKWebViewProgressView *topProgressView; // @synthesize topProgressView=_topProgressView;
- (void).cxx_destruct;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (void)onFullScreenBack:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addProgressView;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1 query:(id)arg2;

@end

