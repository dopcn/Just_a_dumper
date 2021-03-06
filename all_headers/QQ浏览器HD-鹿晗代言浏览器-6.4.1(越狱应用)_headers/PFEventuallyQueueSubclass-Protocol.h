//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BFTask, NSArray, NSString, PFEventuallyPin, PFObject, PFOperationSet;
@protocol PFNetworkCommand;

@protocol PFEventuallyQueueSubclass <NSObject>
- (BFTask *)_waitForOperationSet:(PFOperationSet *)arg1 eventuallyPin:(PFEventuallyPin *)arg2;
- (BFTask *)_enqueueCommandInBackground:(id <PFNetworkCommand>)arg1 object:(PFObject *)arg2 identifier:(NSString *)arg3;
- (id <PFNetworkCommand>)_commandWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)_pendingCommandIdentifiers;
- (NSString *)_newIdentifierForCommand:(id <PFNetworkCommand>)arg1;
@end

