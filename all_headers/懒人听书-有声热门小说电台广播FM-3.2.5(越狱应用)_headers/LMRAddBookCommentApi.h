//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseRequest.h"

@class LMRAddBookCommentParser, NSString;

@interface LMRAddBookCommentApi : LMBaseRequest
{
    _Bool _isReply;
    long long _bookId;
    NSString *_commentContent;
    long long _commentStar;
    NSString *_nickName;
    long long _fatherId;
    long long _checkType;
}

@property(nonatomic) long long checkType; // @synthesize checkType=_checkType;
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(nonatomic) long long fatherId; // @synthesize fatherId=_fatherId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long commentStar; // @synthesize commentStar=_commentStar;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(nonatomic) long long bookId; // @synthesize bookId=_bookId;
- (void).cxx_destruct;
- (id)handleReturnStatusError:(id)arg1;
- (id)requestArgument;
- (id)requestUrl;
- (long long)requestMethod;
- (id)initWithRequestParams:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) LMRAddBookCommentParser *parser; // @dynamic parser;

@end

