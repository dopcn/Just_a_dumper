//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJBaseApiHelper.h"

@interface GJLvXiaoErAPIHelper : GJBaseApiHelper
{
}

+ (id)baseURL;
+ (id)sharedInstance;
- (void)loadTradersWithParams:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 andFailed:(CDUnknownBlockType)arg3;
- (void)loadTakeOutDataWithPuid:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 andFailed:(CDUnknownBlockType)arg3;
- (void)loadDetailDataWithPuid:(id)arg1 anDsign:(id)arg2 whenSuccess:(CDUnknownBlockType)arg3 andFailed:(CDUnknownBlockType)arg4;
- (void)loadDetailDataWithPuid:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 andFailed:(CDUnknownBlockType)arg3;
- (void)loadCommunitiesWithParams:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 andFailed:(CDUnknownBlockType)arg3;
- (void)loadServicesWithParams:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 andFailed:(CDUnknownBlockType)arg3;

@end

