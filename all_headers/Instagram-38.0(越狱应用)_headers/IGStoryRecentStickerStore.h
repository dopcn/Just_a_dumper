//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionClearableObject-Protocol.h"

@class IGFileCoordinator, NSMutableArray, NSString;

@interface IGStoryRecentStickerStore : NSObject <IGUserSessionClearableObject>
{
    NSMutableArray *_stickers;
    IGFileCoordinator *_fileCoordinator;
}

+ (void)clearForUserPK:(id)arg1;
+ (id)archiveURLForUserPK:(id)arg1;
@property(readonly, nonatomic) IGFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, copy, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
- (void).cxx_destruct;
- (void)archive;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)addRecentSticker:(id)arg1;
- (id)allRecentStickers;
- (id)initWithCurrentUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

