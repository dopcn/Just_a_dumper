//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAPIPlugin.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString, UIView, UIViewController;

@interface SAPIRegisterPlugin : SAPIPlugin <MFMessageComposeViewControllerDelegate>
{
    NSString *_smsContent;
    UIViewController *_webViewController;
    UIView *_mainWebView;
}

@property(nonatomic) __weak UIView *mainWebView; // @synthesize mainWebView=_mainWebView;
@property(nonatomic) __weak UIViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(copy, nonatomic) NSString *smsContent; // @synthesize smsContent=_smsContent;
- (void).cxx_destruct;
- (id)uuid;
- (void)cancelAllRequest;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)stopCheck;
- (void)startCheck;
- (void)action_fast_reg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

