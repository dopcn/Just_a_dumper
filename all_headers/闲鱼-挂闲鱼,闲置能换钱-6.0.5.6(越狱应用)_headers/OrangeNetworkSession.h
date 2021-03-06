//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSString, NSURLSession;

@interface OrangeNetworkSession : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_sessionHosted;
    NSURLSession *_sessionUnHosted;
}

+ (id)sharedSession;
@property(retain, nonatomic) NSURLSession *sessionUnHosted; // @synthesize sessionUnHosted=_sessionUnHosted;
@property(retain, nonatomic) NSURLSession *sessionHosted; // @synthesize sessionHosted=_sessionHosted;
- (void).cxx_destruct;
- (_Bool)validateCertificate:(struct __SecTrust *)arg1;
- (_Bool)isLegalDomain:(id)arg1;
- (_Bool)isLegalIP:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isRequestHostedByNetwork:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

