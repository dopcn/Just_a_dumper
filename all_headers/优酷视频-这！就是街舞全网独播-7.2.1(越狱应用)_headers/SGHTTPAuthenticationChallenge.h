//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLAuthenticationChallenge.h>

@interface SGHTTPAuthenticationChallenge : NSURLAuthenticationChallenge
{
    struct _CFHTTPAuthentication *_HTTPAuthentication;
}

- (struct _CFHTTPAuthentication *)CFHTTPAuthentication;
- (void)dealloc;
- (id)initWithResponse:(struct __CFHTTPMessage *)arg1 previousFailureCount:(long long)arg2 failureResponse:(id)arg3 sender:(id)arg4;

@end

