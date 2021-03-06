//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLALogAuditor;
@protocol OS_dispatch_queue;

@interface GLALocalCacheManager : NSObject
{
    struct sqlite3 *database;
    NSObject<OS_dispatch_queue> *_dataBaseQueue;
    GLALogAuditor *_logAuditor;
}

+ (id)manager;
@property(retain, nonatomic) GLALogAuditor *logAuditor; // @synthesize logAuditor=_logAuditor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataBaseQueue; // @synthesize dataBaseQueue=_dataBaseQueue;
- (void).cxx_destruct;
- (id)getLogFromDataBase:(long long)arg1;
- (id)getImmediatelyLogFromDataBase;
- (id)getLogDataByStmt:(struct sqlite3_stmt *)arg1;
- (_Bool)deleteLogInDataBase:(long long)arg1 tableName:(id)arg2 strWhere:(id)arg3;
- (long long)getLogsCountWithName:(id)arg1 strWhere:(id)arg2;
- (_Bool)deleteLogInDataBaseByIds:(id)arg1 andtableName:(id)arg2;
- (id)getLogWithUrlFlag:(long long)arg1 limited:(long long)arg2;
- (_Bool)deleteLogInDataBaseByIds:(id)arg1;
- (_Bool)deleteLogInDataBase:(long long)arg1;
- (void)writeToDataBase:(id)arg1 urlFlag:(long long)arg2 priority:(long long)arg3;
- (long long)getLogsCountWithFlag:(long long)arg1;
- (long long)getLogsCount;
- (_Bool)createSqliteTable;
- (void)logDataBaseError;
- (id)dataFilePath;
- (void)closeSqlite;
- (_Bool)openSqlite;
- (id)init;

@end

