//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CTH5Global : NSObject
{
    NSString *_h5WebViewCallbackString;
}

+ (void)registerCustomUserAgent;
+ (id)makeBridgeCallbackJSString:(id)arg1;
+ (void)loadHotFixScriptInWorkDir;
+ (void)loadHotFixScriptForAppStart;
+ (void)copyLazyLoadHotfixFileIfNeed;
+ (void)startCTEngineIfNeed;
+ (id)sharedCTH5Global;
@property(copy, nonatomic) NSString *h5WebViewCallbackString; // @synthesize h5WebViewCallbackString=_h5WebViewCallbackString;
- (void).cxx_destruct;

@end

