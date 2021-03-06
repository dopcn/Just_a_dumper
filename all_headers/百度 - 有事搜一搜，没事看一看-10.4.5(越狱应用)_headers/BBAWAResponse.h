//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface BBAWAResponse : NSObject
{
    NSString *_url;
    NSData *_body;
    NSNumber *_status;
    NSDictionary *_headers;
    unsigned long long _responseDataDBID;
}

+ (id)responseFromDictionary:(id)arg1;
+ (id)responseFromFetchResponse:(id)arg1;
+ (id)responseFromJSValue:(id)arg1;
@property(nonatomic) unsigned long long responseDataDBID; // @synthesize responseDataDBID=_responseDataDBID;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toFetchResponse;
- (id)toDictionary;
- (id)initWithUrl:(id)arg1 body:(id)arg2 status:(id)arg3 headers:(id)arg4;

@end

