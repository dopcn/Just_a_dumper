//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSString, YKFCommunityFandomCellPO, YKFCommunityFandomFansDetailPO, YKFCommunityFandomFansPO, YKFCommunityPostCountPO, YKFCommunityPostCursorPO, YKFCommunityPostJHWPO, YKFCommunityPostViewerPO, YKFCommunityPostVotePO, YKFCommunityYoukuVideoPO;
@protocol YKFCommunityFandomCellPO, YKFCommunityPostMixedContentPO, YKFCommunityPostTagPO, YKFCommunityPostTopicPO, YKFCommunityUserPO;

@interface YKFCommunityPostPO : YKFAPIModel
{
    _Bool _isAppraise;
    _Bool _isEssence;
    _Bool _isHot;
    _Bool _isStick;
    YKFCommunityPostCountPO *_count;
    YKFCommunityPostCursorPO *_cursor;
    NSString *_detailUrl;
    NSString *_deviceAgent;
    NSArray<YKFCommunityPostTagPO> *_displayTags;
    NSString *_exposeGuid;
    YKFCommunityFandomCellPO *_fandom;
    NSString *_feature;
    long long _gmtCreate;
    double _hot;
    YKFCommunityPostJHWPO *_jhw;
    long long _lastReplyTime;
    long long _materialId;
    NSArray<YKFCommunityPostMixedContentPO> *_mixedContents;
    NSString *_operatingPicUrl;
    long long _postId;
    NSString *_pvid;
    NSString *_recommendReason;
    NSArray<YKFCommunityFandomCellPO> *_relatedFandoms;
    NSString *_scm;
    NSString *_sharedUrl;
    NSArray<YKFCommunityPostTopicPO> *_showTopics;
    long long _sourceType;
    long long _status;
    NSArray<YKFCommunityPostTagPO> *_tags;
    NSString *_title;
    NSArray<YKFCommunityPostTopicPO> *_topics;
    long long _type;
    YKFCommunityFandomFansPO *_user;
    YKFCommunityFandomFansDetailPO *_userDetail;
    NSArray<YKFCommunityUserPO> *_userVOs;
    YKFCommunityYoukuVideoPO *_videoVO;
    YKFCommunityPostViewerPO *_viewer;
    YKFCommunityPostVotePO *_vote;
}

@property(retain, nonatomic) YKFCommunityPostVotePO *vote; // @synthesize vote=_vote;
@property(retain, nonatomic) YKFCommunityPostViewerPO *viewer; // @synthesize viewer=_viewer;
@property(retain, nonatomic) YKFCommunityYoukuVideoPO *videoVO; // @synthesize videoVO=_videoVO;
@property(retain, nonatomic) NSArray<YKFCommunityUserPO> *userVOs; // @synthesize userVOs=_userVOs;
@property(retain, nonatomic) YKFCommunityFandomFansDetailPO *userDetail; // @synthesize userDetail=_userDetail;
@property(retain, nonatomic) YKFCommunityFandomFansPO *user; // @synthesize user=_user;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray<YKFCommunityPostTopicPO> *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray<YKFCommunityPostTagPO> *tags; // @synthesize tags=_tags;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSArray<YKFCommunityPostTopicPO> *showTopics; // @synthesize showTopics=_showTopics;
@property(retain, nonatomic) NSString *sharedUrl; // @synthesize sharedUrl=_sharedUrl;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray<YKFCommunityFandomCellPO> *relatedFandoms; // @synthesize relatedFandoms=_relatedFandoms;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *operatingPicUrl; // @synthesize operatingPicUrl=_operatingPicUrl;
@property(retain, nonatomic) NSArray<YKFCommunityPostMixedContentPO> *mixedContents; // @synthesize mixedContents=_mixedContents;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(nonatomic) long long lastReplyTime; // @synthesize lastReplyTime=_lastReplyTime;
@property(retain, nonatomic) YKFCommunityPostJHWPO *jhw; // @synthesize jhw=_jhw;
@property(nonatomic) _Bool isStick; // @synthesize isStick=_isStick;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(nonatomic) _Bool isEssence; // @synthesize isEssence=_isEssence;
@property(nonatomic) _Bool isAppraise; // @synthesize isAppraise=_isAppraise;
@property(nonatomic) double hot; // @synthesize hot=_hot;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) YKFCommunityFandomCellPO *fandom; // @synthesize fandom=_fandom;
@property(retain, nonatomic) NSString *exposeGuid; // @synthesize exposeGuid=_exposeGuid;
@property(retain, nonatomic) NSArray<YKFCommunityPostTagPO> *displayTags; // @synthesize displayTags=_displayTags;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) YKFCommunityPostCursorPO *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) YKFCommunityPostCountPO *count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

