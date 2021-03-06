//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseExtensionTransaction.h"

@class YapDatabaseReadTransaction, YapDatabaseSecondaryIndexConnection;

@interface YapDatabaseSecondaryIndexTransaction : YapDatabaseExtensionTransaction
{
    YapDatabaseSecondaryIndexConnection *parentConnection;
    YapDatabaseReadTransaction *databaseTransaction;
}

- (id)mutationDuringEnumerationException;
- (id)rowidsForKeys:(id)arg1 inCollection:(id)arg2;
- (id)performAggregateQuery:(id)arg1;
- (_Bool)getNumberOfRows:(unsigned long long *)arg1 matchingQuery:(id)arg2;
- (_Bool)enumerateIndexedValuesInColumn:(id)arg1 matchingQuery:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_enumerateIndexedValuesInColumn:(id)arg1 matchingQuery:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateRowsMatchingQuery:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateKeysAndObjectsMatchingQuery:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateKeysAndMetadataMatchingQuery:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateKeysMatchingQuery:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_enumerateRowidsMatchingQuery:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)bindQueryParameters:(id)arg1 forStatement:(struct sqlite3_stmt *)arg2 withOffset:(int)arg3;
- (struct sqlite3_stmt *)prepareQueryString:(id)arg1;
- (void)handleRemoveAllObjectsInAllCollections;
- (void)handleRemoveObjectsForKeys:(id)arg1 inCollection:(id)arg2 withRowids:(id)arg3;
- (void)handleRemoveObjectForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleTouchRowForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleTouchMetadataForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleTouchObjectForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleReplaceMetadata:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3;
- (void)handleReplaceObject:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3;
- (void)handleUpdateObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4;
- (void)handleInsertObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4;
- (void)_handleChangeWithRowid:(long long)arg1 collectionKey:(id)arg2 object:(id)arg3 metadata:(id)arg4 isInsert:(_Bool)arg5;
- (void)didRollbackTransaction;
- (void)didCommitTransaction;
- (void)removeAllRowids;
- (void)removeRowids:(id)arg1;
- (void)removeRowid:(long long)arg1;
- (void)addRowid:(long long)arg1 isNew:(_Bool)arg2;
- (id)tableName;
- (id)registeredName;
- (id)extensionConnection;
- (id)databaseTransaction;
- (_Bool)populate;
- (_Bool)createTable;
- (_Bool)dropTable;
- (_Bool)prepareIfNeeded;
- (_Bool)createIfNeeded;
- (id)initWithParentConnection:(id)arg1 databaseTransaction:(id)arg2;

@end

