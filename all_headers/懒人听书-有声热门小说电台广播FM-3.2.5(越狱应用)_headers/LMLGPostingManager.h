//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LMLGPostingQueueHandler;

@interface LMLGPostingManager : NSObject
{
    LMLGPostingQueueHandler *_queueHandler;
}

+ (id)shareManager;
@property(retain, nonatomic) LMLGPostingQueueHandler *queueHandler; // @synthesize queueHandler=_queueHandler;
- (void).cxx_destruct;
- (void)postDoneNotificaton:(id)arg1;
- (void)postTextPostWithPostModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyContentWithPostModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkShowHaveFailedPostsTips;
- (void)applicationWillTerminate:(id)arg1;
- (void)clearImageAndAudioCache;
- (void)deletePostingPostWithModel:(id)arg1;
- (id)currentPostingAndFailedPostsWithTopic:(id)arg1;
- (id)currentPostingAndFailedPostsWithGroupId:(long long)arg1;
- (void)repostingWithPostModel:(id)arg1;
- (void)postingWithPostModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postingWithTitle:(id)arg1 andContent:(id)arg2 groupId:(id)arg3 groupName:(id)arg4 images:(id)arg5 audioFilePath:(id)arg6 audioDuration:(long long)arg7 shareIndex:(long long)arg8 completion:(CDUnknownBlockType)arg9;
- (void)postingWithTitle:(id)arg1 andContent:(id)arg2 groupId:(id)arg3 groupName:(id)arg4 entityId:(id)arg5 entityType:(long long)arg6 shareIndex:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (id)init;
- (void)dealloc;

@end

