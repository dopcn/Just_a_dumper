//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UTMCLogger : NSObject
{
}

+ (void)e:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)w:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)i:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)d:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)v:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (id)logLevelString:(int)arg1;
+ (void)printLog:(int)arg1 level:(int)arg2 tag:(id)arg3 with:(id)arg4 and:(char *)arg5;
+ (void)setDev:(_Bool)arg1;
+ (void)setDebug:(_Bool)arg1;

@end

