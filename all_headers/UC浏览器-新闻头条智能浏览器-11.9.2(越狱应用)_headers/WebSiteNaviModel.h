//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NaviPageContentManagerDelegate-Protocol.h"
#import "WebSiteNaviWebViewLoadingDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NaviPageContentManager, WebSiteNaviWebView;
@protocol WebSiteNaviWebViewDelegate;

@interface WebSiteNaviModel : NSObject <WebSiteNaviWebViewLoadingDelegate, NaviPageContentManagerDelegate>
{
    _Bool m_isLoadingWebView;
    id <WebSiteNaviWebViewDelegate> _websiteDelegate;
    NSArray *_naviPageDataArray;
    WebSiteNaviWebView *_webView;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _requestCompletionBlock;
    CDUnknownBlockType _webViewResizeBlock;
    NaviPageContentManager *_naviPageContentManager;
    NSMutableDictionary *_navipageOpened;
    NSString *_cmsDataID;
}

@property(copy, nonatomic) NSString *cmsDataID; // @synthesize cmsDataID=_cmsDataID;
@property(retain, nonatomic) NSMutableDictionary *navipageOpened; // @synthesize navipageOpened=_navipageOpened;
@property(retain, nonatomic) NaviPageContentManager *naviPageContentManager; // @synthesize naviPageContentManager=_naviPageContentManager;
@property(copy, nonatomic) CDUnknownBlockType webViewResizeBlock; // @synthesize webViewResizeBlock=_webViewResizeBlock;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) WebSiteNaviWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSArray *naviPageDataArray; // @synthesize naviPageDataArray=_naviPageDataArray;
@property(nonatomic) id <WebSiteNaviWebViewDelegate> websiteDelegate; // @synthesize websiteDelegate=_websiteDelegate;
- (void)naviPageContent:(id)arg1 baseUrl:(id)arg2 naviKey:(id)arg3;
- (void)freeWebViewWithoutUsing;
- (void)didResizeNaviWebView:(id)arg1;
- (void)didFinishDrawForWebSiteNaviWebView:(id)arg1;
- (void)webSiteNaviWebViewSizeChanged:(id)arg1;
- (void)webSiteNaviWebView:(id)arg1 didStateChange:(int)arg2;
- (id)createRequestURL:(id)arg1 npData:(id)arg2;
- (void)loadHTMLForWebSiteNaviWebView:(id)arg1 naviPageData:(id)arg2;
- (void)preloadCoolSiteIsLandscape:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2 requestCompletionHandeler:(CDUnknownBlockType)arg3 webViewResizeHandeler:(CDUnknownBlockType)arg4;
- (id)loadNaviPageDataArray;
- (void)resetNaviPageRecodeByNaviPageData:(id)arg1;
- (void)saveNaviPageRecordFile;
- (void)loadNaviPageRecord;
- (void)dealloc;
- (void)dispatchJSEventNotify:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

