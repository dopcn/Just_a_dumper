//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdHTMLRenderer.h"

@class NSString;

@interface BaiduMobAdH5Renderer : BaiduMobAdHTMLRenderer
{
    _Bool _supportCountdown;
    _Bool _needSendShowLog;
    int _seconds;
    NSString *_htmlString;
}

@property(nonatomic) int seconds; // @synthesize seconds=_seconds;
@property(nonatomic) _Bool needSendShowLog; // @synthesize needSendShowLog=_needSendShowLog;
@property(nonatomic) _Bool supportCountdown; // @synthesize supportCountdown=_supportCountdown;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
- (id)adView;
- (void)dismissSplash;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)load;

@end

