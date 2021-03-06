//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XMFMDBOperation : NSObject
{
    unsigned long long availbleSize;
    _Bool _needUpdate;
    long long _updateStage;
    NSString *_sqlInsertValueFormatStr;
    NSString *_sqlTableKeyTypeStr;
    NSString *_sqlTableKeyStr;
    CDUnknownBlockType _inserArgmentsBlock;
}

+ (unsigned long long)freeDiskSpaceInBytes;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType inserArgmentsBlock; // @synthesize inserArgmentsBlock=_inserArgmentsBlock;
@property(retain, nonatomic) NSString *sqlTableKeyStr; // @synthesize sqlTableKeyStr=_sqlTableKeyStr;
@property(retain, nonatomic) NSString *sqlTableKeyTypeStr; // @synthesize sqlTableKeyTypeStr=_sqlTableKeyTypeStr;
@property(retain, nonatomic) NSString *sqlInsertValueFormatStr; // @synthesize sqlInsertValueFormatStr=_sqlInsertValueFormatStr;
@property(readonly, nonatomic) long long updateStage; // @synthesize updateStage=_updateStage;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
- (long long)getDiskSize;
- (void)checkInsertFailedAlertView;
- (void)checkUpdateFailedAlertView;
- (void)assertDataBase:(id)arg1 withReason:(id)arg2 isCritical:(_Bool)arg3;
- (_Bool)checkAndCreteTableName:(id)arg1;
- (id)getDBV4_3_28_TableKeyTypeString;
- (id)getDBV4_3_28_TableKeyFiledString;
- (void)downDataBase;
- (void)fixedUpdateDbFailed;
- (id)getDbUpdateBackFilePath;
- (_Bool)upgradeDataBase:(id)arg1 withTable:(id)arg2 withData:(id)arg3;
- (void)upgradeFrom_4_1_1;
- (void)upgradeFrom_1_0_4;
- (void)upgradeFrom:(id)arg1 to:(id)arg2;
- (void)forceUpdateToNewVersion;
- (_Bool)checkAddUpdateTalbeName:(id)arg1 withTableKeyFiled:(id)arg2 withTableStruct:(id)arg3;
- (void)setDatabaseSchemaVersion:(int)arg1;
- (int)getDatabaseSchemaVersion;
- (id)getSqlInsertValueFormatString;
- (void)initUpdateDB;
- (id)init;
- (_Bool)dropDataBase:(id)arg1 tableName:(id)arg2;
- (_Bool)clearDataBase:(id)arg1 tableName:(id)arg2;
- (_Bool)renameDataBase:(id)arg1 fromTable:(id)arg2 toTable:(id)arg3;
- (_Bool)insertDataBase:(id)arg1 table:(id)arg2 withArgumentsCallBack:(CDUnknownBlockType)arg3;
- (_Bool)insertDataBase:(id)arg1 table:(id)arg2 record:(id)arg3;
- (id)getDataBaseAllColumName:(id)arg1 tableName:(id)arg2;
- (id)queryDataBase:(id)arg1 sqlString:(id)arg2;
- (void)robackTransactionDataBase:(id)arg1;
- (void)commitTransactionDataBase:(id)arg1;
- (void)startTransactionDataBase:(id)arg1;
- (_Bool)updateDataBase:(id)arg1 sqlString:(id)arg2;
- (_Bool)createDataBase:(id)arg1 table:(id)arg2;
- (void)dealloc;

@end

