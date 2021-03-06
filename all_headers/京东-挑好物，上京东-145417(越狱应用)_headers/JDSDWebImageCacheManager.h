//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDSDWebImageCacheManager : NSObject
{
    NSString *_isSetMemoryCost;
}

+ (void)serverConfigUpdate:(id)arg1;
+ (void)load;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedJDSDWebImageCacheManager;
@property(copy, nonatomic) NSString *isSetMemoryCost; // @synthesize isSetMemoryCost=_isSetMemoryCost;
- (id)isSetMemoryCostOpen;
- (void)saveMomoryCostKey:(id)arg1;
- (_Bool)getIsMemoryCostOpen;
- (void)setMaxMemorySize;
- (unsigned long long)getTotalMemorySize;
- (void)setMaxCacheSize;
- (void)getSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)getSize;
- (void)clearDiskOnCompletion:(CDUnknownBlockType)arg1;
- (void)clearDisk;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

