//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YapDatabase, YapDatabaseConnection;

@interface METCollectionDAO : NSObject
{
    NSString *_key;
    YapDatabase *_database;
    YapDatabaseConnection *_connection;
}

+ (id)defaultDAOWithType:(unsigned long long)arg1;
@property(retain, nonatomic) YapDatabaseConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) YapDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isCollectedItem:(long long)arg1;
- (void)clearLocalRemovedItemsInDatabase;
- (void)clearLocalAddedItemsInDatabase;
- (void)clearCollectedItemInDatabase;
- (void)clearAllItemsInDatabase;
- (void)addLocalRemovedItem:(id)arg1;
- (void)addLocalAddedItems:(id)arg1;
- (void)removeCollectedIDs:(id)arg1;
- (void)addCollectedIDs:(id)arg1;
- (void)removeCollectedID:(long long)arg1;
- (void)addCollectedID:(long long)arg1;
- (id)localRemovedItems;
- (id)localAddedItems;
- (id)collectedItems;
- (id)localRemovedItemCollectionKey;
- (id)localAddedItemCollectionKey;
- (id)localCollectedItemCollectionKey;
- (id)localRemovedItemsKey;
- (id)localAddedItemsKey;
- (id)localCollectedItemKeyWithID:(long long)arg1;
- (id)initWithKey:(id)arg1;

@end

