//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NHSqliteMigration : NSObject
{
}

+ (id)tableInfoInContext:(id)arg1 tableName:(id)arg2;
+ (_Bool)isTableExistInContext:(id)arg1 tableName:(id)arg2;
+ (id)getIndexNameWithTableClassObject:(id)arg1 indexPropertyArray:(id)arg2;
+ (id)getCreateIndexSqlWithProArray:(id)arg1 isUniqueIndex:(_Bool)arg2 tableClassObject:(id)arg3 propertyMapDic:(id)arg4;
+ (void)upgradeIndexInContext:(id)arg1 tableClassObject:(id)arg2;
+ (void)upgradeTableInContext:(id)arg1 tableClassObject:(id)arg2;
+ (void)createTableInContext:(id)arg1 tableClassObject:(id)arg2;
+ (_Bool)migrationInContext:(id)arg1 tableClassObject:(id)arg2;

@end

