//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KKMediaRootViewController;

@interface QLFigerReportMgr : NSObject
{
    KKMediaRootViewController *_mainCtrl;
}

@property(nonatomic) KKMediaRootViewController *mainCtrl; // @synthesize mainCtrl=_mainCtrl;
- (void)reportDrmInfo:(long long)arg1 value1:(long long)arg2 value2:(long long)arg3 url:(id)arg4 processTime:(unsigned long long)arg5;
- (void)reportClipCache:(unsigned long long)arg1 clipIndex:(unsigned long long)arg2 value1:(long long)arg3 value2:(long long)arg4 vType:(unsigned long long)arg5 videoChannel:(unsigned long long)arg6 url:(id)arg7 step:(long long)arg8;
- (void)reportFirstLoading:(unsigned long long)arg1 vType:(unsigned long long)arg2 videoChannel:(unsigned long long)arg3 url:(id)arg4;
- (void)reportPlayEnd:(unsigned long long)arg1 value1:(long long)arg2 vType:(unsigned long long)arg3 videoChannel:(unsigned long long)arg4 url:(id)arg5;
- (void)reportPlayCount:(unsigned long long)arg1 value1:(long long)arg2 vType:(unsigned long long)arg3 videoChannel:(unsigned long long)arg4 url:(id)arg5;
- (void)reportCGI:(double)arg1 level:(unsigned long long)arg2 value1:(long long)arg3 value2:(long long)arg4 vt:(unsigned long long)arg5 vType:(unsigned long long)arg6 url:(id)arg7 step:(long long)arg8;
- (void)generateBaseInfoForRepctl:(id)arg1;
- (void)handleReqModuleError:(id)arg1;
- (void)dealloc;
- (id)init;

@end

