//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

@interface OJANetworkClient : AFHTTPSessionManager
{
}

+ (_Bool)isTestEnvironment;
+ (id)dwUAString;
+ (id)safeParamDictFromParameters:(id)arg1;
+ (id)urlEncodedUTF8String:(id)arg1;
+ (id)getLolGameZonesUrl;
+ (id)getSearchPlayerUrl;
+ (id)getHeroChampionUrl;
+ (id)getHeroRankUrl;
+ (id)getHeroGameUrl;
+ (id)getHeroPlayerUrl;
+ (id)lolStaticAppendCommonParameters:(id)arg1;
+ (id)getLOLStaticUrl;
+ (id)getHeroHomeUrl;
+ (id)getDuoWanWebUrl;
+ (id)getHomeUrl;
+ (id)sharedClient;
- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

