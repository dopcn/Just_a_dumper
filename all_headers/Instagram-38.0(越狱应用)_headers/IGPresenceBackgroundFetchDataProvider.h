//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStartupPrefetchJobProducer-Protocol.h"
#import "IGStartupPrefetchManagerListener-Protocol.h"

@class IGUserSession, NSOperationQueue, NSString;
@protocol IGPresenceBackgroundFetchStateChangeDelegate;

@interface IGPresenceBackgroundFetchDataProvider : NSObject <IGStartupPrefetchManagerListener, IGStartupPrefetchJobProducer>
{
    IGUserSession *_userSession;
    NSOperationQueue *_presenceFetchQueue;
    id <IGPresenceBackgroundFetchStateChangeDelegate> _delegate;
}

+ (id)presenceMappingDictFromResponseDict:(id)arg1;
+ (id)newGetPresenceRequest;
@property(nonatomic) __weak id <IGPresenceBackgroundFetchStateChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishedFetchingPrefetchWithIdentifier:(id)arg1;
- (id)prefetchJob;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startListeningToAppStateChanges;
- (void)enqueuePresenceFetchOperation;
- (void)triggerPresenceRefresh;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

