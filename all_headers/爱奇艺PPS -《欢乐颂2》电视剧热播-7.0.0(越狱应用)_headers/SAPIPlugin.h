//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface SAPIPlugin : NSObject
{
    _Bool _runInBackground;
    UIView *_webView;
}

@property(nonatomic) __weak UIView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool runInBackground; // @synthesize runInBackground=_runInBackground;
- (void).cxx_destruct;
- (void)evalJS:(id)arg1;
- (void)toCallBackErrorWithCommand:(id)arg1;
- (void)toCallBackSuccessWithCommand:(id)arg1;
- (void)toCallBackError:(id)arg1 callBackId:(id)arg2;
- (void)toCallBackSuccess:(id)arg1 callBackId:(id)arg2;
- (void)defaultCommand:(id)arg1;

@end

