//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VPUPHTTPBaseAPI.h"

@class NSDictionary, NSSet, NSString, VPUPSecurityPolicy;

@interface VPUPHTTPGeneralAPI : VPUPHTTPBaseAPI
{
    NSString *_requestMethod;
    VPUPSecurityPolicy *_apiSecurityPolicy;
    unsigned long long _apiRequestMethodType;
    long long _apiPriority;
    unsigned long long _apiRequestSerializerType;
    unsigned long long _apiResponseSerializerType;
    unsigned long long _apiRequestCachePolicy;
    double _apiRequestTimeoutInterval;
    id _requestParameters;
    NSDictionary *_apiRequestHTTPHeaderField;
    NSSet *_apiResponseAcceptableContentTypes;
    NSDictionary *_apiAddtionalRPCParams;
    NSString *_customRequestUrl;
    NSString *_apiAddtionalRequestFunction;
    CDUnknownBlockType _apiRequestWillBeSentBlock;
    CDUnknownBlockType _apiRequestDidSentBlock;
    CDUnknownBlockType _apiResponseObjReformerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType apiResponseObjReformerBlock; // @synthesize apiResponseObjReformerBlock=_apiResponseObjReformerBlock;
@property(copy, nonatomic) CDUnknownBlockType apiRequestDidSentBlock; // @synthesize apiRequestDidSentBlock=_apiRequestDidSentBlock;
@property(copy, nonatomic) CDUnknownBlockType apiRequestWillBeSentBlock; // @synthesize apiRequestWillBeSentBlock=_apiRequestWillBeSentBlock;
@property(copy, nonatomic) NSString *apiAddtionalRequestFunction; // @synthesize apiAddtionalRequestFunction=_apiAddtionalRequestFunction;
@property(copy, nonatomic) NSString *customRequestUrl; // @synthesize customRequestUrl=_customRequestUrl;
@property(retain, nonatomic) NSDictionary *apiAddtionalRPCParams; // @synthesize apiAddtionalRPCParams=_apiAddtionalRPCParams;
@property(retain, nonatomic) NSSet *apiResponseAcceptableContentTypes; // @synthesize apiResponseAcceptableContentTypes=_apiResponseAcceptableContentTypes;
@property(retain, nonatomic) NSDictionary *apiRequestHTTPHeaderField; // @synthesize apiRequestHTTPHeaderField=_apiRequestHTTPHeaderField;
@property(retain, nonatomic) id requestParameters; // @synthesize requestParameters=_requestParameters;
@property(nonatomic) double apiRequestTimeoutInterval; // @synthesize apiRequestTimeoutInterval=_apiRequestTimeoutInterval;
@property(nonatomic) unsigned long long apiRequestCachePolicy; // @synthesize apiRequestCachePolicy=_apiRequestCachePolicy;
@property(nonatomic) unsigned long long apiResponseSerializerType; // @synthesize apiResponseSerializerType=_apiResponseSerializerType;
@property(nonatomic) unsigned long long apiRequestSerializerType; // @synthesize apiRequestSerializerType=_apiRequestSerializerType;
@property(nonatomic) long long apiPriority; // @synthesize apiPriority=_apiPriority;
@property(nonatomic) unsigned long long apiRequestMethodType; // @synthesize apiRequestMethodType=_apiRequestMethodType;
@property(retain, nonatomic) VPUPSecurityPolicy *apiSecurityPolicy; // @synthesize apiSecurityPolicy=_apiSecurityPolicy;
@property(copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
- (void).cxx_destruct;
- (void)setApiCompletionHandler:(CDUnknownBlockType)arg1;
- (id)apiResponseObjReformer:(id)arg1 andError:(id)arg2;
- (void)apiRequestDidSent;
- (void)apiRequestWillBeSent;
- (id)initWithRequestMethod:(id)arg1;
- (id)init;

@end

