//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNHTTPDispatcher.h"

@interface BNJSCompNetworkAPIHelper : BDNHTTPDispatcher
{
}

+ (id)defaultHelper;
- (id)finalComponentParametersFrom:(id)arg1 withComponentParamseters:(id)arg2;
- (id)finalParametersFromParameters:(id)arg1;
- (id)requestWithURLPath:(id)arg1 viaHTTPS:(_Bool)arg2 usingHTTPResendOnHTTPSError:(_Bool)arg3 httpMethod:(unsigned long long)arg4 timeoutInterval:(double)arg5 responseDataType:(long long)arg6 serverType:(long long)arg7 hybirdParams:(id)arg8 withParameters:(id)arg9 withRequestHeader:(id)arg10 withRequestBody:(id)arg11 isNaserverAgentDemotion:(_Bool)arg12 withNaserverAgentDemotionInfo:(id)arg13 cachePolicy:(unsigned long long)arg14 cacheExpirationTime:(double)arg15 cacheGroup:(id)arg16 priority:(long long)arg17 parseResponseModelClass:(Class)arg18;
- (id)request:(id)arg1 httpMethod:(unsigned long long)arg2 serverType:(long long)arg3 hybirdParams:(id)arg4 withParameters:(id)arg5 withHeaders:(id)arg6 withBody:(id)arg7 respType:(long long)arg8 withCachePolicy:(unsigned long long)arg9 onCache:(CDUnknownBlockType)arg10 isViaGlaxy:(_Bool)arg11 isViaHTTPS:(_Bool)arg12 isNaserverAgentDemotion:(_Bool)arg13 withNaserverAgentDemotionInfo:(id)arg14 success:(CDUnknownBlockType)arg15 failure:(CDUnknownBlockType)arg16;
- (id)POST:(id)arg1 serverType:(long long)arg2 hybirdParams:(id)arg3 withParameters:(id)arg4 withHeaders:(id)arg5 withBody:(id)arg6 respType:(long long)arg7 withCachePolicy:(unsigned long long)arg8 onCache:(CDUnknownBlockType)arg9 isViaGlaxy:(_Bool)arg10 isViaHTTPS:(_Bool)arg11 isNaserverAgentDemotion:(_Bool)arg12 withNaserverAgentDemotionInfo:(id)arg13 success:(CDUnknownBlockType)arg14 failure:(CDUnknownBlockType)arg15;
- (id)POST:(id)arg1 serverType:(long long)arg2 hybirdParams:(id)arg3 withParameters:(id)arg4 withHeaders:(id)arg5 withBody:(id)arg6 respType:(long long)arg7 isViaGlaxy:(_Bool)arg8 isViaHTTPS:(_Bool)arg9 isNaserverAgentDemotion:(_Bool)arg10 withNaserverAgentDemotionInfo:(id)arg11 success:(CDUnknownBlockType)arg12 failure:(CDUnknownBlockType)arg13;
- (id)GET:(id)arg1 serverType:(long long)arg2 respType:(long long)arg3 hybirdParams:(id)arg4 withParameters:(id)arg5 withHeaders:(id)arg6 withCachePolicy:(unsigned long long)arg7 onCache:(CDUnknownBlockType)arg8 isViaGlaxy:(_Bool)arg9 isViaHTTPS:(_Bool)arg10 isNaserverAgentDemotion:(_Bool)arg11 withNaserverAgentDemotionInfo:(id)arg12 success:(CDUnknownBlockType)arg13 failure:(CDUnknownBlockType)arg14;
- (id)GET:(id)arg1 serverType:(long long)arg2 respType:(long long)arg3 hybirdParams:(id)arg4 withHeaders:(id)arg5 withCachePolicy:(unsigned long long)arg6 onCache:(CDUnknownBlockType)arg7 isViaGlaxy:(_Bool)arg8 isViaHTTPS:(_Bool)arg9 isNaserverAgentDemotion:(_Bool)arg10 withNaserverAgentDemotionInfo:(id)arg11 success:(CDUnknownBlockType)arg12 failure:(CDUnknownBlockType)arg13;
- (id)GET:(id)arg1 serverType:(long long)arg2 respType:(long long)arg3 hybirdParams:(id)arg4 isViaGlaxy:(_Bool)arg5 isViaHTTPS:(_Bool)arg6 isNaserverAgentDemotion:(_Bool)arg7 withNaserverAgentDemotionInfo:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (id)initDefaultPluginWithBaseURL:(id)arg1;
- (id)initDefaultHelper;

@end

