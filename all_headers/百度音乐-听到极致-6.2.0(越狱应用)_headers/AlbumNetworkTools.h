//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UGCNetworkService.h"

@interface AlbumNetworkTools : UGCNetworkService
{
}

+ (void)purgeSharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceSynch;
+ (id)sharedInstanceNoSynch;
- (_Bool)needEncrypt;
- (void)boonInfoWithType:(unsigned long long)arg1 typeID:(id)arg2 withGroup:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)payTopWithType:(unsigned long long)arg1 typeID:(id)arg2 withGroup:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

