//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase;

@interface NIMKeyValueStore : NSObject
{
    FMDatabase *_db;
}

+ (id)storeByPath:(id)arg1;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (_Bool)createDB:(id)arg1;
- (void)removeAllObjects;
- (id)allObjects;
- (id)objectByID:(id)arg1;
- (void)removeObjectByID:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)storeObject:(id)arg1;
- (void)dealloc;

@end

