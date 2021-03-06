//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol BDWalletMemoryCacheDelegate;

@interface BDWalletMemoryCache : NSObject
{
    id <BDWalletMemoryCacheDelegate> _delegate;
    NSMutableDictionary *_cacheItems;
}

+ (id)cacheForOwner:(id)arg1;
+ (id)defaultCache;
@property(retain, nonatomic) NSMutableDictionary *cacheItems; // @synthesize cacheItems=_cacheItems;
@property(nonatomic) __weak id <BDWalletMemoryCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addDenpendency:(id)arg1 forKey:(id)arg2;
- (id)cacheItemForKey:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)addArray:(id)arg1 forKey:(id)arg2 dependency:(id)arg3;
- (id)addArray:(id)arg1 forKey:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 dependency:(id)arg3;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)containsKey:(id)arg1;
- (id)init;

@end

