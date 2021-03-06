//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWBaseSession.h"

@class NSMutableURLRequest, NSURLConnection, NWPolicyResult, NWSPDYOrigin;
@protocol NWHTTPSessionDelegate;

@interface NWHTTPSession : NWBaseSession
{
    double _connectionBegin;
    double _connectionEnd;
    NSURLConnection *_connection;
    NSMutableURLRequest *_urlRequest;
    id <NWHTTPSessionDelegate> _httpSessionDelegate;
    NWSPDYOrigin *_origin;
    NWPolicyResult *_policyResult;
}

@property(retain, nonatomic) NWPolicyResult *policyResult; // @synthesize policyResult=_policyResult;
@property(retain, nonatomic) NWSPDYOrigin *origin; // @synthesize origin=_origin;
@property(nonatomic) __weak id <NWHTTPSessionDelegate> httpSessionDelegate; // @synthesize httpSessionDelegate=_httpSessionDelegate;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)getProtocol;
- (id)getConnData;
- (void)asynConnect;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

@end

