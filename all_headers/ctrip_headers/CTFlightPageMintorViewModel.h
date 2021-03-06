//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CTFlightPageMintorViewModel : NSObject
{
    NSObject<OS_dispatch_queue> *_mintorQueue;
    NSMutableArray *_traceArray;
    NSDictionary *_pageTypeDic;
}

- (void).cxx_destruct;
- (id)getPageTypeDictionary;
- (_Bool)isType:(unsigned long long)arg1 inPage:(id)arg2;
- (id)pageCodeFromType:(unsigned long long)arg1;
- (_Bool)containType:(unsigned long long)arg1 inArray:(id)arg2;
- (_Bool)isFinishIntArray:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)isFinishInlandArray:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)isFinishArray:(id)arg1 type:(unsigned long long)arg2;
- (id)timeStringFromTimeSign:(id)arg1;
- (void)logTraceWithArray:(id)arg1 type:(unsigned long long)arg2;
- (void)collectionTraceAndSendWithType:(unsigned long long)arg1;
- (void)clearUnusedTraceWithType:(unsigned long long)arg1;
- (void)packageTraceWithType:(unsigned long long)arg1;
- (void)logTraceWithMintorTraceType:(unsigned long long)arg1;
- (id)init;

@end

