//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface YYObjectStoreManager : NSObject
{
    NSMutableDictionary *_globalObjectStores;
    NSMutableDictionary *_userObjectStores;
}

+ (id)sharedObject;
@property(readonly, nonatomic) NSMutableDictionary *userObjectStores; // @synthesize userObjectStores=_userObjectStores;
@property(readonly, nonatomic) NSMutableDictionary *globalObjectStores; // @synthesize globalObjectStores=_globalObjectStores;
- (void).cxx_destruct;
- (_Bool)removeAllKeysInObjectStore;
- (id)userObjectStoreWithNamespace:(id)arg1 inDirectory:(id)arg2;
- (id)userObjectStoreWithNamespace:(id)arg1;
- (id)globalObjectStoreWithNamespace:(id)arg1;
- (id)init;

@end

