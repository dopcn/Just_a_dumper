//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CDNotificationCenter : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultCenter;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)postWhenIdleNotification:(id)arg1 object:(id)arg2;
- (void)distributionNotification:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)internalPostNotification:(id)arg1 object:(id)arg2 type:(unsigned long long)arg3;

@end

