//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDWebBrowser.h"

@interface CDWebBrowser (Handle)
- (id)externalHandlers;
- (void)setExternalHandlers:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTokenRefresh;
- (void)setNumberOfTokenRefresh:(unsigned long long)arg1;
- (_Bool)notifyWillAppear;
- (void)setNotifyWillAppear:(_Bool)arg1;
- (void)bindSNSWithSNSType:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showTextNotify:(id)arg1;
- (void)webBrowserImageBrowser:(id)arg1;
- (void)webBrowserImageDownloadImages:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)webBrowserUploadWebImage:(CDUnknownBlockType)arg1;
- (void)webBrowserUserBind:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)didRegisterExternalHandlerIfNeeded;
- (void)registerExternalHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)refreshTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)callHandlerOfNotifyWillAppear;
- (void)preferredCommonHandle;
@end

