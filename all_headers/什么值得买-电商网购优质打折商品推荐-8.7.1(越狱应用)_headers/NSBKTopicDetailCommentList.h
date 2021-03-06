//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, TTTAttributedLabel, UIFont;

@interface NSBKTopicDetailCommentList : NSObject <NSCoding, NSCopying>
{
    NSString *_proCollectCount;
    NSString *_isJinghua;
    NSString *_proPrice;
    NSString *_disadvantageContent;
    NSString *_smzdmUserId;
    NSString *_proRecommendCount;
    NSString *_customSupport;
    NSString *_proId;
    NSString *_reviewNum;
    NSString *_supportNum;
    NSString *_reasonContent;
    NSString *_customSort;
    NSString *_proPic;
    NSString *_useTime;
    NSArray *_commentPicList;
    NSString *_commentListIdentifier;
    NSString *_proScore;
    NSString *_proCommentCount;
    NSString *_commentPicCount;
    NSString *_topicId;
    NSString *_isProCreator;
    NSString *_treadNum;
    NSString *_advantageContent;
    NSString *_userCreateId;
    NSString *_customTread;
    NSString *_publishDate;
    NSString *_isDelete;
    NSString *_proName;
    NSString *_summaryContent;
    NSString *_updateDate;
    NSString *_userName;
    NSString *_userPic;
    NSString *_hashId;
    NSArray *_buyList;
    NSString *_article_brand;
    NSArray *_category_names;
    double _cellWidth;
    UIFont *_font1;
    UIFont *_font2;
    TTTAttributedLabel *_attributedLabel;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) TTTAttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property(retain, nonatomic) UIFont *font2; // @synthesize font2=_font2;
@property(retain, nonatomic) UIFont *font1; // @synthesize font1=_font1;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) NSArray *category_names; // @synthesize category_names=_category_names;
@property(retain, nonatomic) NSString *article_brand; // @synthesize article_brand=_article_brand;
@property(retain, nonatomic) NSArray *buyList; // @synthesize buyList=_buyList;
@property(retain, nonatomic) NSString *hashId; // @synthesize hashId=_hashId;
@property(retain, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSString *summaryContent; // @synthesize summaryContent=_summaryContent;
@property(retain, nonatomic) NSString *proName; // @synthesize proName=_proName;
@property(retain, nonatomic) NSString *isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) NSString *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSString *customTread; // @synthesize customTread=_customTread;
@property(retain, nonatomic) NSString *userCreateId; // @synthesize userCreateId=_userCreateId;
@property(retain, nonatomic) NSString *advantageContent; // @synthesize advantageContent=_advantageContent;
@property(retain, nonatomic) NSString *treadNum; // @synthesize treadNum=_treadNum;
@property(retain, nonatomic) NSString *isProCreator; // @synthesize isProCreator=_isProCreator;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *commentPicCount; // @synthesize commentPicCount=_commentPicCount;
@property(retain, nonatomic) NSString *proCommentCount; // @synthesize proCommentCount=_proCommentCount;
@property(retain, nonatomic) NSString *proScore; // @synthesize proScore=_proScore;
@property(retain, nonatomic) NSString *commentListIdentifier; // @synthesize commentListIdentifier=_commentListIdentifier;
@property(retain, nonatomic) NSArray *commentPicList; // @synthesize commentPicList=_commentPicList;
@property(retain, nonatomic) NSString *useTime; // @synthesize useTime=_useTime;
@property(retain, nonatomic) NSString *proPic; // @synthesize proPic=_proPic;
@property(retain, nonatomic) NSString *customSort; // @synthesize customSort=_customSort;
@property(retain, nonatomic) NSString *reasonContent; // @synthesize reasonContent=_reasonContent;
@property(retain, nonatomic) NSString *supportNum; // @synthesize supportNum=_supportNum;
@property(retain, nonatomic) NSString *reviewNum; // @synthesize reviewNum=_reviewNum;
@property(retain, nonatomic) NSString *proId; // @synthesize proId=_proId;
@property(retain, nonatomic) NSString *customSupport; // @synthesize customSupport=_customSupport;
@property(retain, nonatomic) NSString *proRecommendCount; // @synthesize proRecommendCount=_proRecommendCount;
@property(retain, nonatomic) NSString *smzdmUserId; // @synthesize smzdmUserId=_smzdmUserId;
@property(retain, nonatomic) NSString *disadvantageContent; // @synthesize disadvantageContent=_disadvantageContent;
@property(retain, nonatomic) NSString *proPrice; // @synthesize proPrice=_proPrice;
@property(retain, nonatomic) NSString *isJinghua; // @synthesize isJinghua=_isJinghua;
@property(retain, nonatomic) NSString *proCollectCount; // @synthesize proCollectCount=_proCollectCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *fontContent;
@property(readonly, nonatomic) UIFont *fontDescription;
@property(readonly, nonatomic) double height;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

