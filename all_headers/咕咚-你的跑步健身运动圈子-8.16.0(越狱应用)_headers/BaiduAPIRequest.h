//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection;
@protocol BaiduAPIRequestDelegate;

@interface BaiduAPIRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    id <BaiduAPIRequestDelegate> _delegate;
}

@property(nonatomic) id <BaiduAPIRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
- (id)generateNoFilePostBody:(id)arg1;
- (id)generateFilePostBody:(id)arg1;
- (_Bool)isKindOfUploadFile:(id)arg1;
- (void)apiRequestWithUrl:(id)arg1 httpMethod:(id)arg2 params:(id)arg3 andDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

