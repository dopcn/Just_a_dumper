//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BARMessageHandle-Protocol.h"

@class BAREngineMessageManager, NSString;

@interface BARMsgBaseHandler : NSObject <BARMessageHandle>
{
    BAREngineMessageManager *_sharedMsgManager;
}

@property(nonatomic) __weak BAREngineMessageManager *sharedMsgManager; // @synthesize sharedMsgManager=_sharedMsgManager;
- (void).cxx_destruct;
- (void)pauseRender;
- (void)resumeRender;
- (void)stopRender;
- (void)startRender;
- (void)dealloc;
- (void)handleMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

