//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectRecipientOneTapStateTracker, IGMediaMetadata, IGStoryRecipientListController, NSOrderedSet, NSSet;
@protocol IGQuickCamOutputAsset;

@protocol IGStoryRecipientListControllerDelegate <NSObject>
- (void)storyRecipientControllerDidTapBackButton:(IGStoryRecipientListController *)arg1 uploadMetadata:(IGMediaMetadata *)arg2 oneTapStateTracker:(IGDirectRecipientOneTapStateTracker *)arg3 selectedStorySendTarget:(long long)arg4 selectedExternalServices:(NSSet *)arg5 selectedDirectRecipients:(NSOrderedSet *)arg6 recipientsFromSearch:(NSOrderedSet *)arg7 bumpedRecipients:(NSSet *)arg8;
- (void)storyRecipientController:(IGStoryRecipientListController *)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(NSSet *)arg3 asset:(id <IGQuickCamOutputAsset>)arg4;
@end

