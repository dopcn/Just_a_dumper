//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SNDynamicFrameworks/SNBaseRequest.h>

@class NSString;

@interface SNPMBQQDHTTPRequest : SNBaseRequest
{
    long long _pageIndex;
    long long _pageSize;
    long long _realCount;
    NSString *_errorMsg;
}

@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long realCount; // @synthesize realCount=_realCount;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (id)responseHeaders;
- (void)requestDidFailed;
- (id)defaultUserAgentString;
- (id)requestHeaderFieldValueDictionary;
- (void)start;
- (id)init;

@end

