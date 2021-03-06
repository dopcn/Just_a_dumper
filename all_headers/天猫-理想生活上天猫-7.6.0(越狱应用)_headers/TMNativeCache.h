//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TMNativeCache : NSObject
{
}

+ (void)performAction:(id)arg1 params:(id)arg2;
+ (void)compare:(id)arg1 value:(id)arg2 entityName:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)update:(id)arg1 value:(id)arg2 entityName:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)clearCache:(CDUnknownBlockType)arg1;
+ (id)path:(id)arg1 entity:(id)arg2 config:(id)arg3;
+ (void)deleteEntity:(id)arg1 config:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)deleteDataInEntityName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)deleteWithKey:(id)arg1 entityName:(id)arg2 config:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)deleteWithKey:(id)arg1 entityName:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)fetchEntity:(id)arg1 config:(id)arg2 callBackQueue:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)fetchEntity:(id)arg1 callBackQueue:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)fetchKeys:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)fetchEntity:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)fetch:(id)arg1 entityName:(id)arg2 config:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (id)fetch:(id)arg1 entityName:(id)arg2 config:(id)arg3;
+ (void)fetch:(id)arg1 entityName:(id)arg2 callBackQueue:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)fetch:(id)arg1 entityName:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)insert:(id)arg1 value:(id)arg2 entityName:(id)arg3 config:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (_Bool)insert:(id)arg1 value:(id)arg2 entityName:(id)arg3 config:(id)arg4;
+ (void)insert:(id)arg1 value:(id)arg2 entityName:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (_Bool)insert:(id)arg1 value:(id)arg2 entityName:(id)arg3;

@end

