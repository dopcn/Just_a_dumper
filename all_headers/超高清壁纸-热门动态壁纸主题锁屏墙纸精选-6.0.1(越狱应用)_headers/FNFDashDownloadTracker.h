//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFAssetResourceLoadingRequest, NSString;

@interface FNFDashDownloadTracker : NSObject
{
    FNFAssetResourceLoadingRequest *_resourceLoaderRequest;
    unsigned long long _currentRequestOffset;
    unsigned long long _currentRequestLength;
    unsigned long long _currentRequestBytesReceived;
    NSString *_currentRequestRepresentationId;
    unsigned long long _lastRequestReceiveOffset;
    NSString *_lastRequestRepresentationId;
    unsigned long long _bytesRequested;
    unsigned long long _bytesReceived;
    FNFAssetResourceLoadingRequest *_diskCacheResourceLoaderRequest;
    unsigned long long _bytesFromPrefetchCache;
}

@property(nonatomic) unsigned long long bytesFromPrefetchCache; // @synthesize bytesFromPrefetchCache=_bytesFromPrefetchCache;
@property(retain, nonatomic) FNFAssetResourceLoadingRequest *diskCacheResourceLoaderRequest; // @synthesize diskCacheResourceLoaderRequest=_diskCacheResourceLoaderRequest;
@property(nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(nonatomic) unsigned long long bytesRequested; // @synthesize bytesRequested=_bytesRequested;
@property(readonly, copy, nonatomic) NSString *lastRequestRepresentationId; // @synthesize lastRequestRepresentationId=_lastRequestRepresentationId;
@property(readonly, nonatomic) unsigned long long lastRequestReceiveOffset; // @synthesize lastRequestReceiveOffset=_lastRequestReceiveOffset;
@property(readonly, copy, nonatomic) NSString *currentRequestRepresentationId; // @synthesize currentRequestRepresentationId=_currentRequestRepresentationId;
@property(readonly, nonatomic) unsigned long long currentRequestBytesReceived; // @synthesize currentRequestBytesReceived=_currentRequestBytesReceived;
@property(readonly, nonatomic) unsigned long long currentRequestLength; // @synthesize currentRequestLength=_currentRequestLength;
@property(readonly, nonatomic) unsigned long long currentRequestOffset; // @synthesize currentRequestOffset=_currentRequestOffset;
@property(readonly, nonatomic) FNFAssetResourceLoadingRequest *resourceLoaderRequest; // @synthesize resourceLoaderRequest=_resourceLoaderRequest;
- (void).cxx_destruct;
- (void)_clearCurrentRequestData;
- (void)markBytesReceived:(unsigned long long)arg1;
- (void)clearDataForSeek;
- (void)markRequestAsCanceled;
- (void)markRequestAsFinishedWithRequestLength:(unsigned long long)arg1;
- (void)setRequest:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 representation:(id)arg4;
- (_Bool)fetchInProgress;
- (id)description;

@end

