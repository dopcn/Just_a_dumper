//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMAnalysisManager : NSObject
{
}

+ (id)idfvString;
+ (id)idfaString;
+ (id)macString;
+ (id)channel;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2 service:(id)arg3;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2 label:(id)arg3 value:(id)arg4 remark:(id)arg5 requestData:(id)arg6;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2 requestData:(id)arg3;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2 value:(id)arg3;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2 remark:(id)arg3;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2 label:(id)arg3;
+ (void)eventWithPageCode:(id)arg1 actionCode:(id)arg2;
+ (void)eventWithActionCode:(id)arg1;
+ (void)eventWithPageCode:(id)arg1;
+ (void)start;

@end

