//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdrEasyJSWebView, NSString;

@interface AdrEasyJSDataFunction : NSObject
{
    _Bool removeAfterExecute;
    NSString *funcID;
    AdrEasyJSWebView *webView;
}

@property(nonatomic) _Bool removeAfterExecute; // @synthesize removeAfterExecute;
@property(retain, nonatomic) AdrEasyJSWebView *webView; // @synthesize webView;
@property(retain, nonatomic) NSString *funcID; // @synthesize funcID;
- (id)executeWithParams:(id)arg1;
- (id)executeWithParam:(id)arg1;
- (id)execute;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

