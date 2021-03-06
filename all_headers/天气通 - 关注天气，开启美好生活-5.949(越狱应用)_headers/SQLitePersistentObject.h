//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SQLitePersistentObject : NSObject
{
    int pk;
    _Bool dirty;
    _Bool alreadySaving;
    _Bool alreadyDeleting;
}

+ (void)unregisterObject:(id)arg1;
+ (void)registerObjectInMemory:(id)arg1;
+ (id)memoryMapKeyForObject:(int)arg1;
+ (void)tableCheck:(id)arg1;
+ (id)tableColumns:(id)arg1;
+ (id)tableName;
+ (id)classNameForTableName:(id)arg1;
+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (void)deleteObjectsByCriteria:(id)arg1;
+ (id)propertiesWithEncodedTypes;
+ (id)pairedArraysForProperties:(id)arg1 withCriteria:(id)arg2;
+ (id)pairedArraysForProperties:(id)arg1;
+ (id)sortedFieldValuesWithKeysForProperty:(id)arg1;
+ (id)findByCriteria:(id)arg1;
+ (id)findByPK:(int)arg1;
+ (void)deleteObject:(int)arg1 cascade:(_Bool)arg2;
+ (id)allObjects;
+ (long long)countByCriteria:(id)arg1;
+ (long long)count;
+ (id)findFirstByCriteria:(id)arg1;
+ (id)transients;
+ (id)indices;
+ (void)clearCache;
+ (double)performSQLAggregation:(id)arg1;
- (id)memoryMapKey;
- (void)takeValue:(id)arg1 forKey:(id)arg2;
- (void)takeValuesFromDictionary:(id)arg1;
- (void)setPk:(int)arg1;
- (_Bool)isDirty;
- (void)makeClean;
- (void)markDirty;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)findRelated:(Class)arg1;
- (id)findRelated:(Class)arg1 filter:(id)arg2;
- (id)findRelated:(Class)arg1 forProperty:(id)arg2 filter:(id)arg3;
- (void)deleteForeignObjects:(Class)arg1;
- (void)deleteObjectCascade:(_Bool)arg1 withDB:(id)arg2;
- (void)deleteObjectCascade:(_Bool)arg1;
- (void)deleteObject;
- (_Bool)existsInDB;
- (void)revertProperties:(id)arg1;
- (void)revertProperty:(id)arg1;
- (void)revert;
- (void)save;
- (void)_save:(id)arg1;
- (int)pk;

@end

