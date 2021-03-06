//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, TBCPBTopViewItem, TBCUserItem, TBRichTextVO;

@interface TBCPBCellItem : TBCBaseItem
{
    _Bool isFloorOwner;
    _Bool isDisPlayFloor;
    _Bool isFavoriate;
    _Bool currentUsrIsFloorOwner;
    _Bool _isCurrentUserAuthor;
    _Bool _needRefresh;
    _Bool _isFinePost;
    _Bool _isLivePost;
    int _topPostFlag;
    NSString *iPostID;
    NSString *iFloorNum;
    NSString *iTime;
    NSString *iReplayNum;
    TBRichTextVO *iRichTextVO;
    NSString *_uIdAuthor;
    TBCUserItem *_authorInfo;
    NSMutableArray *_contentArray;
    NSMutableArray *_replyFloorArray;
    NSMutableArray *_addPostList;
    NSString *_bimg_url;
    NSString *_bimg_format;
    TBCPBTopViewItem *_topViewItem;
    NSString *_postTitle;
    NSString *_forumPortrait;
    NSString *_forumTitle;
    NSString *_attentionNum;
    NSString *_forumOwnerType;
    NSNumber *_isNTitle;
    NSDictionary *_userInfoMap;
}

+ (struct UIEdgeInsets)getBubbleImgLeftAndBottomInset:(id)arg1 isUsingBubble:(_Bool)arg2;
@property(retain, nonatomic) NSDictionary *userInfoMap; // @synthesize userInfoMap=_userInfoMap;
@property(retain, nonatomic) NSNumber *isNTitle; // @synthesize isNTitle=_isNTitle;
@property(copy, nonatomic) NSString *forumOwnerType; // @synthesize forumOwnerType=_forumOwnerType;
@property(copy, nonatomic) NSString *attentionNum; // @synthesize attentionNum=_attentionNum;
@property(copy, nonatomic) NSString *forumTitle; // @synthesize forumTitle=_forumTitle;
@property(copy, nonatomic) NSString *forumPortrait; // @synthesize forumPortrait=_forumPortrait;
@property(copy, nonatomic) NSString *postTitle; // @synthesize postTitle=_postTitle;
@property(nonatomic) _Bool isLivePost; // @synthesize isLivePost=_isLivePost;
@property(nonatomic) _Bool isFinePost; // @synthesize isFinePost=_isFinePost;
@property(nonatomic) int topPostFlag; // @synthesize topPostFlag=_topPostFlag;
@property(retain, nonatomic) TBCPBTopViewItem *topViewItem; // @synthesize topViewItem=_topViewItem;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isCurrentUserAuthor; // @synthesize isCurrentUserAuthor=_isCurrentUserAuthor;
@property(copy, nonatomic) NSString *bimg_format; // @synthesize bimg_format=_bimg_format;
@property(copy, nonatomic) NSString *bimg_url; // @synthesize bimg_url=_bimg_url;
@property(retain, nonatomic) NSMutableArray *addPostList; // @synthesize addPostList=_addPostList;
@property(retain, nonatomic) NSMutableArray *replyFloorArray; // @synthesize replyFloorArray=_replyFloorArray;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) TBCUserItem *authorInfo; // @synthesize authorInfo=_authorInfo;
@property(retain, nonatomic) NSString *uIdAuthor; // @synthesize uIdAuthor=_uIdAuthor;
@property(nonatomic) _Bool currentUsrIsFloorOwner; // @synthesize currentUsrIsFloorOwner;
@property(nonatomic) _Bool isFavoriate; // @synthesize isFavoriate;
@property(nonatomic) _Bool isDisPlayFloor; // @synthesize isDisPlayFloor;
@property(nonatomic) _Bool isFloorOwner; // @synthesize isFloorOwner;
@property(retain, nonatomic) TBRichTextVO *iRichTextVO; // @synthesize iRichTextVO;
@property(copy, nonatomic) NSString *iReplayNum; // @synthesize iReplayNum;
@property(copy, nonatomic) NSString *iTime; // @synthesize iTime;
@property(copy, nonatomic) NSString *iFloorNum; // @synthesize iFloorNum;
@property(copy, nonatomic) NSString *iPostID; // @synthesize iPostID;
- (struct UIEdgeInsets)getBubbleImgLeftAndBottomInset;
- (int)getBubbleImgCommonWidth;
- (int)getBubbleImgMinHeight;
- (struct UIEdgeInsets)getBubbleImg;
- (_Bool)isHavingBubbleImg;
- (id)init;
- (void)dealloc;

@end

