//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MDtableViewDictionary : NSObject
{
    NSMutableArray *_array;
    NSMutableDictionary *_keyIndexes;
    NSMutableDictionary *_indexkeys;
}

- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)keyForIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (long long)objectIndexForKey:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)array;
- (void)dealloc;
- (id)init;

@end

