//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BridgeService.h"

#import "FeedbackDelegate-Protocol.h"

@class NSString;

@interface YXCallVoipYellowPageService : BridgeService <FeedbackDelegate>
{
}

- (void)sendFeedbackSuccess:(id)arg1;
- (void)sendFeedbackFailed:(id)arg1;
- (void)voipDial:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)feedback:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)getContactList:(id)arg1 Callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

