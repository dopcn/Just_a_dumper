//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHNetworkingFramework/AHBaseService.h>

@class LiveShowReplyCommentModel;

@interface LiveShowSendReplyCommentService : AHBaseService
{
    LiveShowReplyCommentModel *_replyCommentModel;
}

@property(retain, nonatomic) LiveShowReplyCommentModel *replyCommentModel; // @synthesize replyCommentModel=_replyCommentModel;
- (void).cxx_destruct;
- (_Bool)parseJSON:(id)arg1;
- (void)sendComment:(id)arg1 objId:(id)arg2 andTargetReplyId:(id)arg3;
- (id)init;

@end

