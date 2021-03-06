//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLSession;

@interface BFMobLoginNet : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_urlSessioin;
}

+ (void)extendParams:(id)arg1;
+ (void)requestDataWithApiUrl:(id)arg1 paramsDic:(id)arg2 whenComplete:(CDUnknownBlockType)arg3;
+ (void)requestJsonByPostWithApiUrl:(id)arg1 paramsDic:(id)arg2 whenComplete:(CDUnknownBlockType)arg3;
+ (void)requestJsonWithApiUrl:(id)arg1 paramsDic:(id)arg2 whenComplete:(CDUnknownBlockType)arg3;
+ (id)getJson:(_Bool)arg1 withData:(id)arg2 response:(id)arg3 error:(id)arg4 andResultType:(unsigned long long *)arg5;
+ (id)getParamsStringWithParamsDic:(id)arg1 withResultType:(unsigned long long *)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) NSURLSession *urlSessioin; // @synthesize urlSessioin=_urlSessioin;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

