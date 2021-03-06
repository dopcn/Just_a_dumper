//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DropAnimationDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface DropGoodsController : NSObject <DropAnimationDelegate>
{
    NSMutableArray *_animationControllers;
}

+ (void)stopService;
+ (void)startService;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *animationControllers; // @synthesize animationControllers=_animationControllers;
- (void)dropAnimationCancel:(id)arg1;
- (void)dropAnimationFinish:(id)arg1;
- (void)dropAnimationStop:(id)arg1;
- (void)dropAnimationStart:(id)arg1;
- (void)didReceiveDropCoinEvent;
- (void)removeAnimationController:(id)arg1;
- (void)addAnimationController:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

