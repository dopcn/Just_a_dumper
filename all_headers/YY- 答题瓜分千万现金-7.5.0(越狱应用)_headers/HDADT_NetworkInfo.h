//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HDADT_NetworkInfo : NSObject
{
    struct __SCNetworkReachability *_reachability;
}

+ (id)sharedObject;
- (void)dealloc;
- (id)init;
@property(readonly) int networkState;
@property(readonly) _Bool isWifi;

@end

