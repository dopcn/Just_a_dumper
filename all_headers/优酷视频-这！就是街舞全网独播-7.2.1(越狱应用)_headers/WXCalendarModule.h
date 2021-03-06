//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXCalendarModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_23;
+ (id)wx_export_method_22;
+ (id)wx_export_method_21;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)checkCalendarEventWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)removeCalendarEventAtTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)storeCalendarEventWithTitle:(id)arg1 location:(id)arg2 note:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 alertTimeOffset:(double)arg6 canReminderEvent:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)dateFromRFC1123:(id)arg1;
- (id)convertToDateFrom:(id)arg1 withFomart:(id)arg2;
- (id)dateResolveFromDateString:(id)arg1;
- (void)removeEvent:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)checkEvent:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)addEvent:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

