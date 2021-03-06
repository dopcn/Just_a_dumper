//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DbSQLDataDefinitionCommand-Protocol.h"
#import "DbSQLStatement-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface DbSQLCreateTableStatement : NSObject <DbSQLStatement, DbSQLDataDefinitionCommand>
{
    _Bool _isTemporary;
    NSString *_tableName;
    NSMutableDictionary *_columnDictionary;
    NSMutableArray *_columnArray;
    NSString *_primaryKeysString;
    NSString *_uniqueString;
}

+ (id)instantiateCreateTableStatementsWithXmlSchema:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *uniqueString; // @synthesize uniqueString=_uniqueString;
@property(retain, nonatomic) NSString *primaryKeysString; // @synthesize primaryKeysString=_primaryKeysString;
@property(retain, nonatomic) NSMutableArray *columnArray; // @synthesize columnArray=_columnArray;
@property(retain, nonatomic) NSMutableDictionary *columnDictionary; // @synthesize columnDictionary=_columnDictionary;
@property(nonatomic) _Bool isTemporary; // @synthesize isTemporary=_isTemporary;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (void)unique:(id)arg1;
- (void)primary:(id)arg1;
- (void)column:(id)arg1 type:(id)arg2 defaultValue:(id)arg3 isPrimaryKey:(_Bool)arg4 isRequired:(_Bool)arg5 isUnique:(_Bool)arg6 autoIncrement:(_Bool)arg7;
- (void)column:(id)arg1 type:(id)arg2 isUnique:(_Bool)arg3;
- (void)column:(id)arg1 type:(id)arg2 isPrimaryKey:(_Bool)arg3;
- (void)column:(id)arg1 type:(id)arg2 defaultValue:(id)arg3;
- (void)column:(id)arg1 type:(id)arg2;
- (id)statement;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

