//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NICellObject.h"

@class NSArray, NSNumber, NSString;

@interface CMPostDetailCellObject : NICellObject
{
    _Bool _isPraise;
    _Bool _isTop;
    _Bool _isImage;
    _Bool _isCream;
    _Bool _isNew;
    _Bool _isHot;
    _Bool _isCollect;
    _Bool _isVote;
    _Bool _isPiazza;
    _Bool _isModerator;
    _Bool _isActive;
    NSNumber *_topicId;
    NSString *_postContent;
    NSString *_topicTitle;
    NSString *_createTime;
    NSNumber *_snsId;
    NSString *_nickName;
    NSString *_faceImgUrl;
    NSNumber *_tagId;
    NSString *_tagName;
    NSNumber *_praiseCount;
    NSString *_identityNameString;
    NSString *_pendantIcon;
    NSArray *_imageList;
    double _height;
    NSArray *_friendList;
    NSString *_piazzaName;
    NSNumber *_piazzaId;
    NSNumber *_coterieId;
    NSString *_coterieName;
    NSArray *_topicList;
    NSString *_activeTitle;
    NSString *_address;
    NSNumber *_forumId;
}

@property(retain, nonatomic) NSNumber *forumId; // @synthesize forumId=_forumId;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSString *activeTitle; // @synthesize activeTitle=_activeTitle;
@property(retain, nonatomic) NSArray *topicList; // @synthesize topicList=_topicList;
@property(retain, nonatomic) NSString *coterieName; // @synthesize coterieName=_coterieName;
@property(retain, nonatomic) NSNumber *coterieId; // @synthesize coterieId=_coterieId;
@property(retain, nonatomic) NSNumber *piazzaId; // @synthesize piazzaId=_piazzaId;
@property(retain, nonatomic) NSString *piazzaName; // @synthesize piazzaName=_piazzaName;
@property(retain, nonatomic) NSArray *friendList; // @synthesize friendList=_friendList;
@property(nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(nonatomic) _Bool isPiazza; // @synthesize isPiazza=_isPiazza;
@property(nonatomic) _Bool isVote; // @synthesize isVote=_isVote;
@property(nonatomic) _Bool isCollect; // @synthesize isCollect=_isCollect;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool isCream; // @synthesize isCream=_isCream;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) _Bool isPraise; // @synthesize isPraise=_isPraise;
@property(retain, nonatomic) NSString *pendantIcon; // @synthesize pendantIcon=_pendantIcon;
@property(retain, nonatomic) NSString *identityNameString; // @synthesize identityNameString=_identityNameString;
@property(retain, nonatomic) NSNumber *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) NSNumber *tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) NSString *faceImgUrl; // @synthesize faceImgUrl=_faceImgUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *postContent; // @synthesize postContent=_postContent;
@property(retain, nonatomic) NSNumber *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (void)setPostDetailCellObjectWithPostDetailModel:(id)arg1 sourceType:(unsigned long long)arg2;
- (Class)cellClass;

@end

