//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBNuxModalDelegate-Protocol.h"

@class FBNuxController, FBNuxModal, FBUserSession, NSString;
@protocol FBSnacksGroupStoryViewerNuxManagerDelegate;

@interface FBSnacksGroupStoryViewerNuxManager : NSObject <FBNuxModalDelegate>
{
    FBUserSession *_session;
    FBNuxModal *_modalNux;
    id <FBSnacksGroupStoryViewerNuxManagerDelegate> _delegate;
    FBNuxController *_nuxController;
}

@property(readonly, nonatomic) FBNuxController *nuxController; // @synthesize nuxController=_nuxController;
@property(nonatomic) __weak id <FBSnacksGroupStoryViewerNuxManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_nuxHeaderImage;
- (id)_createModalNUX;
- (void)nuxModalDidDismissSecondaryButton:(id)arg1;
- (void)nuxModalDidDismissPrimaryButton:(id)arg1;
- (void)registerNux;
- (void)unregisterNux;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

