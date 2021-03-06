//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ViewModelDelegate-Protocol.h"

@class NSError, NSString, UITableView;

@interface BaseViewModel : NSObject <ViewModelDelegate>
{
    long long dataChangedCnt;
    long long page;
    _Bool isRefreshing;
    _Bool hasMore;
    _Bool sizeing;
    UITableView *ownerTableView;
    _Bool _disabledDataChenged;
    int _state;
    int _tag;
    unsigned long long _minLoadPageNum;
    unsigned long long _reserveItemNum;
    NSError *_error;
    unsigned long long _loadingNum;
    id _owner;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) unsigned long long loadingNum; // @synthesize loadingNum=_loadingNum;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool disabledDataChenged; // @synthesize disabledDataChenged=_disabledDataChenged;
@property(nonatomic) unsigned long long reserveItemNum; // @synthesize reserveItemNum=_reserveItemNum;
@property(nonatomic) unsigned long long minLoadPageNum; // @synthesize minLoadPageNum=_minLoadPageNum;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)echoForKey:(id)arg1;
- (void)each:(CDUnknownBlockType)arg1;
- (void)preloadForView:(id)arg1;
- (void)dopreload;
- (void)bind:(id)arg1 indexPath:(id)arg2 keys:(id)arg3 keysMap:(id)arg4;
- (void)bind:(id)arg1 indexPath:(id)arg2 keys:(id)arg3;
- (void)emitDataChanged;
- (void)endDataChanged;
- (void)beginDataChanged;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)remove:(id)arg1;
- (void)remove:(id)arg1 count:(long long)arg2;
- (void)insert:(id)arg1 data:(id)arg2;
- (void)setData:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)data:(id)arg1 key:(id)arg2;
- (id)data:(id)arg1;
- (long long)itemCount:(long long)arg1;
- (long long)sectionCount;
- (void)ondataChanged;
- (void)onclear;
- (void)oncanelLoad;
- (void)onload;
- (void)reset;
- (void)cancelLoad;
- (void)setLoadFinished:(_Bool)arg1 nextPage:(long long)arg2;
- (void)setLoadFinished:(_Bool)arg1;
- (void)reload;
- (void)refresh;
- (void)load;
- (long long)size;
- (_Bool)isEmpty;
- (_Bool)isRefreshing;
- (_Bool)isLoading;
- (_Bool)needLoad;
- (long long)page;
- (_Bool)hasMore;
- (void)dealloc;
- (id)init;
- (void)preload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

