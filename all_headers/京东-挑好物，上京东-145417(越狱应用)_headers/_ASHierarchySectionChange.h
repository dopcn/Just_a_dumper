//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface _ASHierarchySectionChange : NSObject
{
    unsigned long long _animationOptions;
    NSIndexSet *_indexSet;
    long long _changeType;
}

+ (id)allIndexesInChanges:(id)arg1;
+ (void)sortAndCoalesceChanges:(id)arg1;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(readonly, nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
- (void).cxx_destruct;
- (id)initWithChangeType:(long long)arg1 indexSet:(id)arg2 animationOptions:(unsigned long long)arg3;

@end

