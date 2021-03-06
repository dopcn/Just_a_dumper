//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSIndexPath, NSString, RACCommand;

@interface TTQTopicBaseViewModel : TTQViewModel
{
    _Bool _showTableHeader;
    _Bool _canReply;
    _Bool _is_ask;
    long long _topic_id;
    long long _orderByFilter;
    long long _gotoID;
    long long _gotoFloor;
    NSString *_source;
    long long _commentFilter;
    NSIndexPath *_selectedReplyIndex;
    RACCommand *_reportCommand;
    RACCommand *_replyCommand;
    RACCommand *_usefulCommand;
    long long _referenced_id;
    long long _forum_id;
    unsigned long long _topicUserID;
    NSString *_inputDefaultText;
}

@property(retain, nonatomic) NSString *inputDefaultText; // @synthesize inputDefaultText=_inputDefaultText;
@property(nonatomic) _Bool is_ask; // @synthesize is_ask=_is_ask;
@property(nonatomic) unsigned long long topicUserID; // @synthesize topicUserID=_topicUserID;
@property(nonatomic) _Bool canReply; // @synthesize canReply=_canReply;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(nonatomic) long long referenced_id; // @synthesize referenced_id=_referenced_id;
@property(retain, nonatomic) RACCommand *usefulCommand; // @synthesize usefulCommand=_usefulCommand;
@property(retain, nonatomic) RACCommand *replyCommand; // @synthesize replyCommand=_replyCommand;
@property(retain, nonatomic) RACCommand *reportCommand; // @synthesize reportCommand=_reportCommand;
@property(retain, nonatomic) NSIndexPath *selectedReplyIndex; // @synthesize selectedReplyIndex=_selectedReplyIndex;
@property(nonatomic) long long commentFilter; // @synthesize commentFilter=_commentFilter;
@property(nonatomic) _Bool showTableHeader; // @synthesize showTableHeader=_showTableHeader;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long gotoFloor; // @synthesize gotoFloor=_gotoFloor;
@property(nonatomic) long long gotoID; // @synthesize gotoID=_gotoID;
@property(nonatomic) long long orderByFilter; // @synthesize orderByFilter=_orderByFilter;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
- (void).cxx_destruct;
- (id)deleteCommentWithID:(long long)arg1;
- (void)joinForum;
- (void)reportAction:(id)arg1;

@end

