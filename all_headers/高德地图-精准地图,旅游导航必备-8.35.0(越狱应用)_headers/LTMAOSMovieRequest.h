//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSBaseRequest.h"

@interface LTMAOSMovieRequest : AMAOSBaseRequest
{
    int _requestType;
}

+ (id)bizLogicName;
- (id)requestCinemaPutParamWithCity:(id)arg1 keywords:(id)arg2 lon:(double)arg3 lat:(double)arg4 movieID:(id)arg5 countryname:(id)arg6 flags:(int)arg7 pagesize:(int)arg8 mode:(int)arg9 search_SceneID:(id)arg10 transparent:(id)arg11;
- (id)requestCinemaPutParamWithPoiIDs:(id)arg1 movieID:(id)arg2 lon:(double)arg3 lat:(double)arg4 search_SceneID:(id)arg5 transparent:(id)arg6;
- (id)requestMoviesPutParamWithCity:(id)arg1 lon:(double)arg2 lat:(double)arg3 pagesize:(int)arg4 pagenum:(int)arg5 mode:(int)arg6 transparent:(id)arg7;
- (id)getRequestVersion;
- (int)getServerType;
- (id)getRelativeUrl;
- (id)decodeJsonRequestData:(id)arg1;
- (void)setParams:(id)arg1;

@end

