//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSData, NSError, NSOutputStream, NSString, NSURLConnection, NSURLResponse, RACDisposable, UIImage;
@protocol IMYCacheManagerProtocol;

@interface IMYURLRequestCacheProtocol : NSURLProtocol <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    _Bool _receivedResponse;
    _Bool _stoppedRequest;
    _Bool _isMySite;
    _Bool _isSilentRequest;
    RACDisposable *_disposable;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSOutputStream *_outputStream;
    NSData *_responseData;
    NSError *_error;
    UIImage *_image;
    id <IMYCacheManagerProtocol> _cacheManager;
}

+ (id)hasInterceptBlockWithURLString:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)urlTypeCanCacheWithRequest:(id)arg1 urlString:(id)arg2;
+ (_Bool)baseCanCacheWithRequest:(id)arg1 urlString:(id)arg2;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)imyPatchCanInitWithRequest:(id)arg1 urlString:(id)arg2;
+ (id)getURLInterceptManager;
+ (void)load;
+ (id)shareRCPManager;
+ (_Bool)isAjaxRequestWithURLRequest:(id)arg1;
+ (id)cacheBoxForURLString:(id)arg1;
+ (id)cacheKeyWithURLString:(id)arg1;
+ (_Bool)checkImageResourceWithURL:(id)arg1 string:(id)arg2;
+ (_Bool)checkScriptResourceWithURL:(id)arg1 string:(id)arg2;
+ (id)cacheCreatedDateForURLString:(id)arg1;
+ (void)setCachedData:(id)arg1 forURLString:(id)arg2;
+ (id)cachedDataForURLString:(id)arg1;
+ (void)addMapWebViewReuqest:(id)arg1 navigationType:(long long)arg2;
@property(nonatomic) _Bool isSilentRequest; // @synthesize isSilentRequest=_isSilentRequest;
@property(nonatomic) _Bool isMySite; // @synthesize isMySite=_isMySite;
@property(retain, nonatomic) id <IMYCacheManagerProtocol> cacheManager; // @synthesize cacheManager=_cacheManager;
@property(nonatomic) _Bool stoppedRequest; // @synthesize stoppedRequest=_stoppedRequest;
@property(nonatomic) _Bool receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasCacheWithKey:(id)arg1;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)cleanData;
- (void)connectionDidFinishLoading:(id)arg1 withRequestURL:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)stopLoading;
- (void)completionHandlerWithRequestURL:(id)arg1;
- (void)completionHandlerNoOperation;
- (void)requestDidFinishLoading;
- (void)requestDidFailWithError:(id)arg1;
- (void)requestDidLoadData:(id)arg1;
- (void)requestDidReceiveResponse;
- (void)requestWasRedirectedToRequest:(id)arg1;
- (void)startMeetYouImageRequest:(id)arg1 urlString:(id)arg2;
- (void)startNormalRequest:(id)arg1 urlString:(id)arg2 customHeader:(id)arg3;
- (void)startMyURLConnectionWithHeaders:(id)arg1;
- (_Bool)isMeetYouHostWithImageURL:(id)arg1 urlString:(id)arg2;
- (void)startMyURLConnection;
- (_Bool)querySDFileDataWithURLString:(id)arg1 forCacheKey:(id)arg2;
- (id)getSDFileDataWithURLString:(id)arg1;
- (_Bool)checkNeedRefreshCacheWithURL:(id)arg1 needRefresh:(_Bool)arg2;
- (_Bool)queryCacheDataWithCacheKey:(id)arg1 urlString:(id)arg2;
- (_Bool)runActionWithCacheData:(id)arg1 urlString:(id)arg2;
- (_Bool)queryInterceptCacheWithURLString:(id)arg1;
- (_Bool)queryIMYCacheEnableWithURLString:(id)arg1;
- (void)startDiskCacheLoading:(id)arg1;
- (_Bool)queryWebResourcesWithURLString:(id)arg1;
- (void)startLoading;
- (_Bool)imyPatchCacnelStartLoading:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

