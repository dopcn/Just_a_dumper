//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseManager.h"

@interface JMDataAnalyzeManager2 : JMBaseManager
{
}

+ (void)sendAllData;
+ (void)invalidateSendDataTimer;
+ (id)dicWithParameters:(id)arg1;
+ (id)addAb:(id)arg1;
+ (void)trackEvent:(id)arg1 parameters:(id)arg2 page:(id)arg3 pageParams:(id)arg4;
+ (void)trackEvent:(id)arg1 parameters:(id)arg2;
+ (void)trackPage:(id)arg1 parameters:(id)arg2 fromPage:(id)arg3 fromPageParams:(id)arg4 fromType:(id)arg5 fromTypeID:(id)arg6;
+ (void)trackPage:(id)arg1 parameters:(id)arg2 fromType:(id)arg3 fromTypeID:(id)arg4;
+ (void)trackPage:(id)arg1 parameters:(id)arg2;
+ (void)trackPage:(id)arg1;
+ (void)setUid:(id)arg1;
+ (void)setSite:(id)arg1;
+ (void)startWithCollectorID:(id)arg1 source:(id)arg2 site:(id)arg3 uid:(id)arg4;

@end

