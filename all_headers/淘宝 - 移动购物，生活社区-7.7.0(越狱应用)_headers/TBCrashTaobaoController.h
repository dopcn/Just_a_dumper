//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBCrashTaobaoController : NSObject
{
}

+ (id)shareInstance;
- (void)commitAlarmFailWithPage:(id)arg1 monitorPoint:(id)arg2 errMsg:(id)arg3;
- (void)commitCounterWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3;
- (void)commitStatWithPage:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3 value:(int)arg4;
- (void)registStatWithPage:(id)arg1 monitorPoint:(id)arg2;
- (void)registLowMemoryObservers;
- (id)gethpVersion;
- (void)getMetaData:(id)arg1;
- (id)getWVURLData;
- (id)init;

@end

