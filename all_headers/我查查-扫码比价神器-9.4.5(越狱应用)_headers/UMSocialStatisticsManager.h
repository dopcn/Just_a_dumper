//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UMSocialComFMDatabaseQueue;
@protocol OS_dispatch_queue;

@interface UMSocialStatisticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_UMSocialStatisticsManagerDueue;
    void *isOnUMSocialStatisticsManagerDueue;
    UMSocialComFMDatabaseQueue *_dbQueue;
    NSString *_dbPath;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (_Bool)checkMaxLimit;
- (unsigned long long)fileSizeAtPath:(id)arg1;
- (id)generateJsonDataWithLocalStatisticsV2Messages:(id)arg1;
- (void)deRegisterNotification;
- (void)registerNotification;
- (void)handleUMSocialSendStatisticsV2MessageFromLocalNotification:(id)arg1;
- (void)postUMSocialSendStatisticsV2MessageFromLocal:(id)arg1 withDataBaseArray:(id)arg2;
- (void)deleteASyncWithArray:(id)arg1;
- (void)doDeleteASyncWithArray:(id)arg1;
- (void)doDeleteWithItemDic:(id)arg1 withSQLStringArray:(id)arg2 withSQLColumnValueArray:(id)arg3;
- (void)generateDeleteSQLInfoWithItemDic:(id)arg1 withSQLString:(id *)arg2 withSQLColumnValueArray:(id *)arg3;
- (void)fetchASyncWithCompleteBlock:(CDUnknownBlockType)arg1 withFetchCount:(unsigned long long)arg2;
- (id)doFetchASyncWithFetchCount:(unsigned long long)arg1;
- (void)saveUMSocialStatistics:(id)arg1 withCurDate:(id)arg2;
- (void)doSaveUMSocialStatistics:(id)arg1 withCurDate:(id)arg2;
- (void)generateSaveSQLInfoWithUMSocialStatistics:(id)arg1 withCurDate:(id)arg2 withSQLStringArray:(id)arg3 withSQLColumnValueArray:(id)arg4;
- (void)generateInsertKeyAndValueWithSQLDictionaryArgs:(id)arg1 withSQLString:(id *)arg2 withSQLColumnValueArray:(id *)arg3;
- (void)asyncSaveWithSqlStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)transitionDatabaseWithSqlStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)createStatisticsTable;
- (void)resetDataBase;
- (void)removeDataBase;
- (void)closeDataBase;
- (void)createDataBase;
- (void)dealloc;
- (id)init;

@end

