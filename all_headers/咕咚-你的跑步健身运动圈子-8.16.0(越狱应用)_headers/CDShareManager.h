//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CDShareManager : NSObject
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancellation;
    unsigned long long _actionType;
}

+ (id)sharedInstance;
@property(readonly) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) CDUnknownBlockType cancellation; // @synthesize cancellation=_cancellation;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)clean;
- (_Bool)handleOpenURL:(id)arg1 fromSourceApp:(id)arg2;
- (void)didShareObject:(id)arg1 withActionType:(unsigned long long)arg2;
- (void)willShareObject:(id)arg1 withActionType:(unsigned long long)arg2;
- (void)performShareActionWithActionType:(unsigned long long)arg1 object:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 cancellation:(CDUnknownBlockType)arg5;
- (void)didReceiveApplicationDidBecomeActiveNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

