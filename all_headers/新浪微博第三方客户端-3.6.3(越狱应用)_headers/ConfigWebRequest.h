//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBRequestDelegate-Protocol.h"

@class NSData, NSMutableDictionary, NSString, WebRequest;
@protocol ConfigWebRequestDelegate;

@interface ConfigWebRequest : NSObject <WBRequestDelegate>
{
    id <ConfigWebRequestDelegate> delegate;
    NSData *syn_data;
    int *loopNum;
    _Bool israndomURL;
    WebRequest *_webRequest;
    NSString *_domainURL;
    NSMutableDictionary *_requestDict;
    NSString *configKey;
}

@property(nonatomic) NSString *configKey; // @synthesize configKey;
@property(nonatomic) id <ConfigWebRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic, getter=getRequestDict) NSMutableDictionary *requestDict; // @synthesize requestDict=_requestDict;
@property(retain, nonatomic) NSString *domainURL; // @synthesize domainURL=_domainURL;
@property(retain, nonatomic) WebRequest *webRequest; // @synthesize webRequest=_webRequest;
- (void)dealloc;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveRawData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)endConfigReuqest;
- (id)startConfigSynchronousRequest;
- (void)startConfigAsynchronousRequest;
- (void)initRequestParam;
- (void)randomURL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

