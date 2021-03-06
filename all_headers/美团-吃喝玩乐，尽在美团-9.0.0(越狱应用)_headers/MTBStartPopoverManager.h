//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RACDisposable, TTWebViewBaseController;

@interface MTBStartPopoverManager : NSObject
{
    TTWebViewBaseController *_webVC;
    RACDisposable *_webviewLoadedNotificationDisposal;
    RACDisposable *_webviewClosedNotificationDisposal;
}

+ (id)sharedInstance;
@property(retain, nonatomic) RACDisposable *webviewClosedNotificationDisposal; // @synthesize webviewClosedNotificationDisposal=_webviewClosedNotificationDisposal;
@property(retain, nonatomic) RACDisposable *webviewLoadedNotificationDisposal; // @synthesize webviewLoadedNotificationDisposal=_webviewLoadedNotificationDisposal;
@property(retain, nonatomic) TTWebViewBaseController *webVC; // @synthesize webVC=_webVC;
- (void).cxx_destruct;
- (id)currentTopViewController;
- (void)addImageViewFromURL:(id)arg1 onImageControl:(id)arg2;
- (id)addImageControl:(struct CGSize)arg1 onTopVCWithPostion:(struct CGPoint)arg2;
- (void)loadStartPopoverSidebarPackageWithInfo:(id)arg1;
- (_Bool)shouldPresentWebViewOnViewController:(id)arg1;
- (id)popoverWebviewControllerWithURL:(id)arg1;
- (void)resetOriginalBarStyle:(long long)arg1;
- (void)loadStartPopoverWebViewWithInfo:(id)arg1;
- (void)loadStartPopoverWithInfo:(id)arg1;
- (void)loadStartPopoverWithIdentifier:(id)arg1;

@end

