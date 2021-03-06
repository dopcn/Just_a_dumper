//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol ShortCommentListItem;

@interface ShortCommentListItem : JSONModel
{
    _Bool _isParise;
    _Bool _isTop;
    NSString *_commentId;
    NSString *_content;
    NSString *_commentAvatar;
    NSString *_commentBy;
    NSString *_date;
    NSString *_from;
    NSNumber *_replyCount;
    NSNumber *_upCount;
    NSArray<ShortCommentListItem> *_replyList;
}

@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) _Bool isParise; // @synthesize isParise=_isParise;
@property(retain, nonatomic) NSArray<ShortCommentListItem> *replyList; // @synthesize replyList=_replyList;
@property(retain, nonatomic) NSNumber *upCount; // @synthesize upCount=_upCount;
@property(retain, nonatomic) NSNumber *replyCount; // @synthesize replyCount=_replyCount;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *commentBy; // @synthesize commentBy=_commentBy;
@property(retain, nonatomic) NSString *commentAvatar; // @synthesize commentAvatar=_commentAvatar;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end

