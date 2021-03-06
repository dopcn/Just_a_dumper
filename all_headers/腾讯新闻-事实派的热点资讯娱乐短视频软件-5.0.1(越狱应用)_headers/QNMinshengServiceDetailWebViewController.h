//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNPureWebDetailViewController.h"

#import "QNShareActivityControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, QNMinshengWebMonitorManager;

@interface QNMinshengServiceDetailWebViewController : QNPureWebDetailViewController <QNShareActivityControllerDelegate>
{
    NSString *_serviceURLStr;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_sharePic;
    NSString *_shareServiceId;
    QNMinshengWebMonitorManager *_monitorLoader;
    NSMutableDictionary *_urlCostTimeDic;
}

@property(retain, nonatomic) NSMutableDictionary *urlCostTimeDic; // @synthesize urlCostTimeDic=_urlCostTimeDic;
@property(retain, nonatomic) QNMinshengWebMonitorManager *monitorLoader; // @synthesize monitorLoader=_monitorLoader;
- (void).cxx_destruct;
- (void)triggerHttpErrorCode:(long long)arg1 andURL:(id)arg2 netWork:(long long)arg3;
- (void)triggerHttpCostTime:(double)arg1 andNetWork:(long long)arg2 andURL:(id)arg3;
- (id)getDevUaForMinsheng;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)getShareToEmailInfo;
- (id)listItemForShare;
- (void)onAction:(id)arg1;
- (void)configBarButtons;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 andOtherParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

