//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BNStatisticsBatchStorge : NSObject
{
    NSMutableArray *_batchStorge;
    NSMutableArray *_currentSessionItems;
    NSMutableArray *_failSessionItems;
}

+ (void)releaseInstance;
+ (id)GetInstance;
@property(retain, nonatomic) NSMutableArray *failSessionItems; // @synthesize failSessionItems=_failSessionItems;
@property(retain, nonatomic) NSMutableArray *currentSessionItems; // @synthesize currentSessionItems=_currentSessionItems;
@property(retain, nonatomic) NSMutableArray *batchStorge; // @synthesize batchStorge=_batchStorge;
- (void).cxx_destruct;
- (id)getLastStatisticsItems:(_Bool)arg1;
- (void)removeCurrentSessionItems;
- (void)removeFailSessionItems;
- (id)getFailSessionItems;
- (void)addFailSessionItems:(id)arg1;
- (void)loadStorge;
- (void)saveStorage;
- (void)removePostItems:(_Bool)arg1 itemCount:(int)arg2;
- (int)canPostItemsStatus:(_Bool)arg1 withEventID:(id)arg2;
- (_Bool)isSessionPostItem:(id)arg1;
- (int)addStatisticItem:(id)arg1 withEventID:(id)arg2;
- (id)getStatisticsItems:(_Bool)arg1 excludeLast:(_Bool)arg2;
- (id)mapBatchStoragePath;
- (id)init;
- (void)dealloc;

@end

