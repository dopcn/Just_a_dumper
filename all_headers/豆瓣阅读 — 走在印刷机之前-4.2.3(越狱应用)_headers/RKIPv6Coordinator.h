//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RKIPv6Coordinator : NSObject
{
    unsigned long long _status;
}

+ (id)sharedCoordinator;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)updateStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_networkReachabilityStatusDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)synthesizeAddressesFromAddress:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

