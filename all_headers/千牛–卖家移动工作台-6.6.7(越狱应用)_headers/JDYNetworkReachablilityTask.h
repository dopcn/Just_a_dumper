//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JDYNetworkReachablilityTask : NSObject
{
    CDUnknownBlockType _taskBlock;
    long long _status;
    JDYNetworkReachablilityTask *_retainedSelf;
    struct __SCNetworkReachability *_ref;
}

+ (long long)currentStatusForFlag:(unsigned int)arg1;
+ (long long)currentStatusForRef:(struct __SCNetworkReachability *)arg1;
+ (id)arrangeTaskBlock:(CDUnknownBlockType)arg1 whenStatus:(long long)arg2;
@property(nonatomic) struct __SCNetworkReachability *ref; // @synthesize ref=_ref;
@property(retain, nonatomic) JDYNetworkReachablilityTask *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;

@end

