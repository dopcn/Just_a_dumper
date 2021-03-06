//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MtopError, MtopExtRequest, NSData, NSDictionary, NSString, NSURL;

@interface MtopExtResponse : NSObject
{
    _Bool _isLoginCancel;
    _Bool _isAuthCancel;
    int _httpStartusCode;
    MtopError *_error;
    NSDictionary *_responseHeaders;
    NSData *_responseData;
    MtopExtRequest *_request;
    NSURL *_requestURL;
}

@property(nonatomic) _Bool isAuthCancel; // @synthesize isAuthCancel=_isAuthCancel;
@property(nonatomic) _Bool isLoginCancel; // @synthesize isLoginCancel=_isLoginCancel;
@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(readonly, nonatomic) MtopError *error; // @synthesize error=_error;
@property(readonly, nonatomic) int httpStartusCode; // @synthesize httpStartusCode=_httpStartusCode;
- (void).cxx_destruct;
- (_Bool)isSuccess;
@property(readonly, nonatomic) NSDictionary *responseJsons;
- (id)description;
@property(readonly, nonatomic) NSString *responseString;
- (id)resolveError:(id)arg1;
- (id)initWithError:(id)arg1 request:(id)arg2;
- (id)initWithHttp:(int)arg1 headers:(id)arg2 rawbody:(id)arg3 request:(id)arg4 mRequest:(id)arg5;

@end

