//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "OrangeRetry-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSRecursiveLock, NSString, OrangeConfigCenter, OrangeIndexModel;

@interface OrangeIndexManager : NSObject <OrangeRetry>
{
    _Bool _needRetryRequestIndex;
    _Bool _reqeusting;
    _Bool _cdnReqeusting;
    _Bool _checkUpdateRequesting;
    OrangeIndexModel *_indexModel;
    OrangeConfigCenter *_configCenter;
    NSMutableArray *_callbacks;
    NSRecursiveLock *_locker;
    NSRecursiveLock *_cdnLocker;
    NSRecursiveLock *_indexModeLock;
    NSOperationQueue *_queue;
}

+ (void)initialize;
+ (void)removeLocalIndex;
+ (id)shareInstance;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSRecursiveLock *indexModeLock; // @synthesize indexModeLock=_indexModeLock;
@property(retain, nonatomic) NSRecursiveLock *cdnLocker; // @synthesize cdnLocker=_cdnLocker;
@property(retain, nonatomic) NSRecursiveLock *locker; // @synthesize locker=_locker;
@property(readonly, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(nonatomic) _Bool checkUpdateRequesting; // @synthesize checkUpdateRequesting=_checkUpdateRequesting;
@property(nonatomic) _Bool cdnReqeusting; // @synthesize cdnReqeusting=_cdnReqeusting;
@property(nonatomic) _Bool reqeusting; // @synthesize reqeusting=_reqeusting;
@property(nonatomic) __weak OrangeConfigCenter *configCenter; // @synthesize configCenter=_configCenter;
@property(retain, nonatomic) OrangeIndexModel *indexModel; // @synthesize indexModel=_indexModel;
- (void).cxx_destruct;
- (id)getUserdefaultPrex;
- (id)getIndexFileName;
- (void)retryUpdateIndexIfNeed;
- (void)addUpdateIndexCallback:(CDUnknownBlockType)arg1;
- (void)callbackBlack:(id)arg1;
- (void)downloadIndex:(id)arg1 ipStrategy:(id)arg2 serverTimeCheckCnt:(int)arg3;
- (void)downloadIndex:(id)arg1;
- (void)checkUpdateIndex:(int)arg1 ipStrategy:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)checkUpdateIndexResult:(CDUnknownBlockType)arg1;
- (void)updateIndexByModel:(id)arg1;
- (id)init;
- (void)retVersionInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

