//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YoyoObject.h"

#import "YoyoEventProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface YoyoEvent : YoyoObject <YoyoEventProtocol>
{
    NSMutableDictionary *_receiverEntries;
    NSMutableArray *_requestEntries;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_backgorundQueue;
    NSObject *_receiverLockObj;
    NSObject *_reqLockObj;
}

+ (void)start;
+ (id)instance;
@property(retain, nonatomic) NSObject *reqLockObj; // @synthesize reqLockObj=_reqLockObj;
@property(retain, nonatomic) NSObject *receiverLockObj; // @synthesize receiverLockObj=_receiverLockObj;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgorundQueue; // @synthesize backgorundQueue=_backgorundQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *requestEntries; // @synthesize requestEntries=_requestEntries;
@property(retain, nonatomic) NSMutableDictionary *receiverEntries; // @synthesize receiverEntries=_receiverEntries;
- (void).cxx_destruct;
- (void)test;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)notifySyncWithName:(id)arg1;
- (void)notifySyncWithName:(id)arg1 data:(id)arg2;
- (void)notifyAsyncWithName:(id)arg1;
- (void)notifyAsyncWithName:(id)arg1 data:(id)arg2;
- (void)notifyAsyncWithName:(id)arg1 data:(id)arg2 inMainQueue:(_Bool)arg3 priority:(unsigned long long)arg4;
- (void)enqueueRequestEntry:(id)arg1 priority:(unsigned long long)arg2;
- (void)createRequestEntries;
- (void)removeAllObserversWithTarget:(id)arg1;
- (void)removeObserver:(id)arg1 forName:(id)arg2;
- (void)addObserver:(id)arg1 block:(CDUnknownBlockType)arg2 forName:(id)arg3 priority:(unsigned long long)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forName:(id)arg3 priority:(unsigned long long)arg4;
- (void)addObserver:(id)arg1 action:(id)arg2 forName:(id)arg3 priority:(unsigned long long)arg4;
- (id)receiverEntryWithName:(id)arg1;
- (void)createReceiverEntries;
- (void)performDirectlyReceiverEntry:(id)arg1 data:(id)arg2;
- (void)performReceiverEntry:(id)arg1 data:(id)arg2 inQueue:(id)arg3;
- (void)performReceiverActionsWithRequestEntry:(id)arg1;
- (void)dispatchAsync;
- (void)stop;
- (void)start;
- (void)onNotifySync:(id)arg1;
- (void)initSync;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

