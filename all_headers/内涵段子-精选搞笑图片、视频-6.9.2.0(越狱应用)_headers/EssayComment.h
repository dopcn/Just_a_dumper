//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EssayComment : NSObject
{
}

+ (id)sharedInstance;
- (void)postMessage:(id)arg1 groupID:(id)arg2 tag:(id)arg3 hasComment:(_Bool)arg4 replyToCommentID:(id)arg5 secondCommentID:(id)arg6 replyUserId:(id)arg7 imageUriListStr:(id)arg8 extraParamDic:(id)arg9 finishBlock:(CDUnknownBlockType)arg10;
- (void)postMessage:(id)arg1 groupID:(id)arg2 tag:(id)arg3 hasComment:(_Bool)arg4 replyToCommentID:(id)arg5 secondCommentID:(id)arg6 replyUserId:(id)arg7 finishBlock:(CDUnknownBlockType)arg8;
- (void)postMessageFinishedResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (_Bool)postMessage:(id)arg1 groupID:(id)arg2 platform:(id)arg3 tag:(id)arg4 isComment:(_Bool)arg5 replyToCommentID:(id)arg6 userInfo:(id)arg7;
- (_Bool)postMessage:(id)arg1 groupID:(id)arg2 tag:(id)arg3 hasComment:(_Bool)arg4 replyToCommentID:(id)arg5 userInfo:(id)arg6;
- (_Bool)postMessage:(id)arg1 groupID:(id)arg2 tag:(id)arg3 hasComment:(_Bool)arg4 userInfo:(id)arg5;

@end

