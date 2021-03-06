//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface JKArray : NSArray <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    id *objects;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long mutations;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)load;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)count;
- (void)dealloc;

@end

