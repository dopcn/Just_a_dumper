//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTWebView.h"

@protocol MttRNRCWebViewDelegate;

@interface MttRNReadingCenterArticleWebView : RCTWebView
{
    id <MttRNRCWebViewDelegate> _rcwDelegate;
}

@property(nonatomic) __weak id <MttRNRCWebViewDelegate> rcwDelegate; // @synthesize rcwDelegate=_rcwDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)reload;

@end

