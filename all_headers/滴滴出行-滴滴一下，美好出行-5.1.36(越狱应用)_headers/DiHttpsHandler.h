//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DiHttpsHandler : NSObject
{
    _Bool _httpsDebugEnabled;
    int _trustType;
    NSArray *_trustedCertificates;
}

+ (id)defaultHandler;
@property(retain, nonatomic) NSArray *trustedCertificates; // @synthesize trustedCertificates=_trustedCertificates;
@property(nonatomic) int trustType; // @synthesize trustType=_trustType;
@property(nonatomic) _Bool httpsDebugEnabled; // @synthesize httpsDebugEnabled=_httpsDebugEnabled;
- (void).cxx_destruct;
- (void)handleConnection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)initCert;
- (id)initWithTrustType:(int)arg1;

@end

