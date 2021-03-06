//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDogfooderProtocol-Protocol.h"

@class NSString;

@interface IGDogfooderIntern : NSObject <IGDogfooderProtocol>
{
}

- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)updateOnBackground;
- (void)cancelUpdate;
- (void)continueUpdateSwitchToMaster;
- (void)continueUpdate;
- (void)checkForUpdatesWithForce:(_Bool)arg1;
- (long long)environment;
- (long long)updateMode;
- (id)networker;
- (id)initWithUserInfoProvider:(CDUnknownBlockType)arg1 environment:(long long)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

