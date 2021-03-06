//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CacheListManager : NSObject
{
    NSMutableDictionary *_cacheListDict;
    NSString *_cacheBasePath;
}

+ (id)sharedCacheListManager;
@property(retain, nonatomic) NSMutableDictionary *cacheListDict; // @synthesize cacheListDict=_cacheListDict;
- (void)dealloc;
- (void)saveList:(id)arg1 listData:(id)arg2 notificationName:(id)arg3;
- (void)saveList:(id)arg1 listData:(id)arg2;
- (id)getList:(id)arg1 cacheListGetOptions:(int)arg2;
- (id)getList:(id)arg1;
- (void)setLastRequestTimeIntervalByKey:(id)arg1;
- (_Bool)isRequestServerByKey:(id)arg1 cycleTimeInterval:(double)arg2;
- (id)getNotificationNameByKey:(id)arg1;
- (id)getList:(id)arg1 isDefault:(_Bool)arg2;
- (id)getCacheListByKey:(id)arg1;
- (id)getDefaultCacheListPath:(id)arg1;
- (id)getCacheListPath:(id)arg1;
- (id)getFullFileName:(id)arg1;
- (void)createDirectory;
- (id)init;

@end

