//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabaseQueue;
@protocol INewsFlowModelUpdateInfo, OS_dispatch_queue;

@interface NFDataItemDisplayUploadRecord : NSObject
{
    FMDatabaseQueue *_databaseQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    id <INewsFlowModelUpdateInfo> _lastUpdateInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <INewsFlowModelUpdateInfo> lastUpdateInfo; // @synthesize lastUpdateInfo=_lastUpdateInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) FMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
- (void)uploadDisplayRecord:(id)arg1;
- (void)channel:(id)arg1 willStartUpdateWithInfo:(id)arg2;
- (void)channel:(id)arg1 didUpdateWithData:(id)arg2 requestInfo:(id)arg3;
- (void)channel:(id)arg1 dataItemDidDisplay:(id)arg2;
- (id)databasePath;
- (void)dealloc;
- (id)init;

@end

