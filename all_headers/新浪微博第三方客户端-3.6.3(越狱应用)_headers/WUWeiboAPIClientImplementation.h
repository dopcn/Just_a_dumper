//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPClient.h"

#import "WUWeiboAPIClientImplementation-Protocol.h"

@class NSString, NSURL;

@interface WUWeiboAPIClientImplementation : AFHTTPClient <WUWeiboAPIClientImplementation>
{
}

- (id)uploadFileData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 toPath:(id)arg4 withUploadFieldName:(id)arg5 parameters:(id)arg6 authorizationHeader:(id)arg7 uploadProgressChanged:(CDUnknownBlockType)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (id)requestWeiboAPIPath:(id)arg1 method:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *baseURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

