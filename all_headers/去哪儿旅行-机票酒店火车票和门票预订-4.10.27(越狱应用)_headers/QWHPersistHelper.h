//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QWHPersistHelper : NSObject
{
}

+ (id)transferJsonArray:(id)arg1;
+ (id)getTableNameWithClass:(Class)arg1;
+ (void)autoUpdateDataWith:(CDUnknownBlockType)arg1 inDB:(id)arg2;
+ (void)updateData:(id)arg1 inDB:(id)arg2;
+ (void)removeAllDataWithClass:(Class)arg1 inDB:(id)arg2;
+ (void)removeData:(id)arg1 inDB:(id)arg2;
+ (void)addDataWithArray:(id)arg1 inDB:(id)arg2;
+ (void)addSingleData:(id)arg1 inDB:(id)arg2;
+ (void)addData:(id)arg1 inDB:(id)arg2;
+ (id)getDataWithClass:(Class)arg1 withPredicate:(id)arg2 inDB:(id)arg3;
+ (id)getDataWithClass:(Class)arg1 where:(id)arg2 inDB:(id)arg3;
+ (id)getSingleDataWithClass:(Class)arg1 inDB:(id)arg2;
+ (id)getDataWithClass:(Class)arg1 inDB:(id)arg2;
+ (void)replaceDataWithArray:(id)arg1 inDB:(id)arg2;
+ (void)replaceDataWithObject:(id)arg1 inDB:(id)arg2;
+ (void)removeDBAtPath:(id)arg1;

@end

