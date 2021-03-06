//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDAPICached;

@interface MDMyQuickVideoApiHelper : NSObject
{
    MDAPICached *_apiCached;
}

@property(retain, nonatomic) MDAPICached *apiCached; // @synthesize apiCached=_apiCached;
- (void).cxx_destruct;
- (void)commitPriceSetting:(double)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setNeedInviteBeforeChat:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)commitAppearTimeFrom:(double)arg1 to:(double)arg2 appearSquare:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)loadQuickVideoCenterDataWithParmas:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)saveQVProfileWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)uploadQVCoverImage:(id)arg1 target:(id)arg2 type:(unsigned long long)arg3 ok:(SEL)arg4 err:(SEL)arg5 fail:(SEL)arg6;
- (void)filterUserTextWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)deleteMyInviteWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)loadMyQuickVideoInvitedListWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)commitQVAddFriendWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)deleteMyQVChatWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)reportWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)loadMyQuickVideoHistoryListWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)loadMyQuickVideoDataWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end

