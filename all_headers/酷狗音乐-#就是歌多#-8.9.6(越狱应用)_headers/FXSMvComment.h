//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

#import "FXMsgCellDataProtocol-Protocol.h"

@class NSString;

@interface FXSMvComment : FXBaseJSONModel <FXMsgCellDataProtocol>
{
    double _contentHeight;
    long long _commentId;
    NSString *_content;
    long long _userId;
    long long _kugouId;
    NSString *_nickName;
    NSString *_userLogo;
    long long _replyCommentId;
    long long _replyUserId;
    NSString *_replyContent;
    NSString *_replyNickName;
    long long _supportNum;
    double _commentTime;
}

@property(nonatomic) double commentTime; // @synthesize commentTime=_commentTime;
@property(nonatomic) long long supportNum; // @synthesize supportNum=_supportNum;
@property(retain, nonatomic) NSString *replyNickName; // @synthesize replyNickName=_replyNickName;
@property(retain, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(nonatomic) long long replyUserId; // @synthesize replyUserId=_replyUserId;
@property(nonatomic) long long replyCommentId; // @synthesize replyCommentId=_replyCommentId;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
@property(nonatomic) double contentHeight;
- (id)init;

@end

