//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CFHTTPDNSRequestResponse : NSObject
{
    long long _statusCode;
    NSDictionary *_headerFields;
    NSString *_httpVersion;
}

@property(copy, nonatomic) NSString *httpVersion; // @synthesize httpVersion=_httpVersion;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

@end

