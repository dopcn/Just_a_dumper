//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGCacheEfficiencySurface : NSObject
{
    long long _cachedItems;
    long long _cachedBytes;
    long long _hitItems;
    long long _hitBytes;
}

@property(nonatomic) long long hitBytes; // @synthesize hitBytes=_hitBytes;
@property(nonatomic) long long hitItems; // @synthesize hitItems=_hitItems;
@property(nonatomic) long long cachedBytes; // @synthesize cachedBytes=_cachedBytes;
@property(nonatomic) long long cachedItems; // @synthesize cachedItems=_cachedItems;
- (void)aggregateObject:(id)arg1;

@end

