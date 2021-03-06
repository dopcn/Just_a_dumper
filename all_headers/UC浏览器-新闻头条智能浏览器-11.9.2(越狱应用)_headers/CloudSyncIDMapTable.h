//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CloudSyncSQLiteCommonTable.h"

@class FMDatabaseQueue, NSString;

@interface CloudSyncIDMapTable : CloudSyncSQLiteCommonTable
{
    FMDatabaseQueue *_dbQueue;
    NSString *_tableName;
}

+ (void)createTableInDatabaseIfNotExist:(id)arg1 andTableName:(id)arg2;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void)removeAll;
- (id)getLUIDWithGUID:(id)arg1;
- (id)getGuidWithLUID:(id)arg1;
- (void)deleteIDMap:(id)arg1;
- (void)addIDMap:(id)arg1;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 andTableName:(id)arg2;

@end

