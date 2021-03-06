//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ERContainerTransactionChange, ERNode, NSArray, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface ERContainer : NSObject
{
    NSObject<OS_dispatch_semaphore> *_arrayLock;
    NSObject<OS_dispatch_semaphore> *_transactionLock;
    NSMutableArray *_insideArray;
    ERContainerTransactionChange *_transactionChanges;
    _Bool _inTransaction;
    ERNode *_changes;
    ERNode *_count;
    unsigned long long _insideCount;
    NSArray *_immutableArray;
}

@property(copy) NSArray *immutableArray; // @synthesize immutableArray=_immutableArray;
@property unsigned long long insideCount; // @synthesize insideCount=_insideCount;
@property _Bool inTransaction; // @synthesize inTransaction=_inTransaction;
@property(readonly) ERNode *count; // @synthesize count=_count;
@property(readonly) ERNode *changes; // @synthesize changes=_changes;
- (void).cxx_destruct;
- (id)description;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)setArray:(id)arg1;
- (id)array;
- (void)updateNode;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)exchangeObject:(id)arg1 at:(unsigned long long)arg2;
- (void)deleteLastObject;
- (void)deleteFirstObject;
- (void)deleteObject:(id)arg1;
- (void)deleteObjectAt:(unsigned long long)arg1;
- (void)insertObjectFront:(id)arg1;
- (void)appendObject:(id)arg1;
- (void)addObject:(id)arg1 at:(unsigned long long)arg2;
- (void)rollbackTransaction;
- (void)endTransaction;
- (void)beginTransaction;
- (void)changeTransaction:(CDUnknownBlockType)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

