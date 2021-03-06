//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCMessageNetFetcher.h"

#import "UCAdDataFetcher-Protocol.h"

@class NSString, UCAdDataRequest;
@protocol UCAdDataFetcherDelegate;

@interface UCAdDataJSONFetcher : UCMessageNetFetcher <UCAdDataFetcher>
{
    _Bool _isHttps;
    id <UCAdDataFetcherDelegate> _delegate;
    UCAdDataRequest *_request;
}

+ (id)adNetFetcherWithRequest:(id)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool isHttps; // @synthesize isHttps=_isHttps;
@property(retain, nonatomic) UCAdDataRequest *request; // @synthesize request=_request;
@property(nonatomic) id <UCAdDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isHttpsServer;
- (id)decodeResponseData:(id)arg1;
- (id)encodeRequestData:(id)arg1;
- (BOOL)encryptionType;
- (id)serverURLString;
- (void)notifyFetchFailWithError:(id)arg1;
- (void)notifyFetchSuccessWithInfo:(id)arg1;
- (void)didFetchFailWithError:(long long)arg1;
- (void)didFetchData:(id)arg1;
- (id)httpBodyData;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

