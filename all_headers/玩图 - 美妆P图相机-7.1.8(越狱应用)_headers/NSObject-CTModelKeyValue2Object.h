//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CTModelKeyValue-Protocol.h"

@class NSString;

@interface NSObject (CTModelKeyValue2Object) <CTModelKeyValue>
+ (id)CTPropertyKey:(id)arg1;
+ (id)CTObjectArrayWithValueArray:(id)arg1;
+ (id)CTObjectWithKeyValues:(id)arg1;
- (id)CTJsonObj;
- (id)CTSetKeyValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

