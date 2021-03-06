//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YYTVDBModel : NSObject
{
    _Bool _quering;
    unsigned long long _ID;
    unsigned long long _UID;
    double _createdTime;
    CDUnknownBlockType _onDeleted;
    CDUnknownBlockType _onUpdated;
    long long _innerReferCount;
    double _innerLastUpdated;
}

+ (id)convertColumnType:(id)arg1;
+ (id)columnTypeFromProperty:(id)arg1;
+ (void)setColumns:(id)arg1;
+ (id)columns;
+ (void)deleteModel:(id)arg1;
+ (void)yytvdb_deleteMulti:(id)arg1;
+ (id)yytvdb_loadWithCondition:(id)arg1 params:(id)arg2 order:(unsigned long long)arg3 orderString:(id)arg4 limit:(long long)arg5 offset:(long long)arg6 inDB:(id)arg7 ignoreUser:(_Bool)arg8;
+ (id)yytvdb_loadWithCondition:(id)arg1 params:(id)arg2 order:(unsigned long long)arg3 limit:(long long)arg4 offset:(long long)arg5 inDB:(id)arg6;
+ (id)yytvdb_loadWithCondition:(id)arg1 params:(id)arg2 order:(unsigned long long)arg3 limit:(long long)arg4 offset:(long long)arg5 ignoreUser:(_Bool)arg6;
+ (id)yytvdb_loadWithCondition:(id)arg1 params:(id)arg2 order:(unsigned long long)arg3 ignoreUser:(_Bool)arg4;
+ (id)yytvdb_loadWithCondition:(id)arg1 params:(id)arg2 ignoreUser:(_Bool)arg3;
+ (id)yytvdb_loadWithCondition:(id)arg1 params:(id)arg2;
+ (id)yytvdb_loadAllWith:(unsigned long long)arg1 limit:(long long)arg2 offset:(long long)arg3;
+ (id)yytvdb_loadAllWithOrder:(id)arg1 limit:(long long)arg2;
+ (id)yytvdb_loadAllWith:(unsigned long long)arg1;
+ (id)yytvdb_loadAll;
+ (id)arrayWithResultSet:(id)arg1;
+ (void)create:(id)arg1;
+ (void)initialize;
+ (_Bool)forAllUser;
+ (_Bool)hasSelfRefer;
@property(nonatomic) double innerLastUpdated; // @synthesize innerLastUpdated=_innerLastUpdated;
@property(nonatomic) long long innerReferCount; // @synthesize innerReferCount=_innerReferCount;
@property(copy, nonatomic) CDUnknownBlockType onUpdated; // @synthesize onUpdated=_onUpdated;
@property(copy, nonatomic) CDUnknownBlockType onDeleted; // @synthesize onDeleted=_onDeleted;
@property(readonly, nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(readonly, nonatomic) unsigned long long UID; // @synthesize UID=_UID;
@property(readonly, nonatomic) unsigned long long ID; // @synthesize ID=_ID;
@property(nonatomic) _Bool quering; // @synthesize quering=_quering;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupKvo;
- (id)valuesForUpdate;
- (void)deleteSub;
- (void)delete;
- (_Bool)yytvdb_delete;
- (unsigned long long)deleteThreshold;
- (void)updateReferCount:(_Bool)arg1;
- (void)saveSub;
- (void)save:(_Bool)arg1;
- (void)yytvdb_save;
- (void)unionQuery:(id)arg1;
- (id)initWithResultSet:(id)arg1;
@property(readonly, nonatomic) double lastUpdated;
@property(readonly, nonatomic) long long referCount;
- (void)yytvdb_loadedFromDB;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

