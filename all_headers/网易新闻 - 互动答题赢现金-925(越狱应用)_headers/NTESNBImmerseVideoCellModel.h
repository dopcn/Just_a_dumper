//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTESNBTrackerDisplayable-Protocol.h"

@class NSAttributedString, NSString;

@interface NTESNBImmerseVideoCellModel : NSObject <NTESNBTrackerDisplayable>
{
    _Bool _isVoted;
    _Bool _hasTopicInfo;
    _Bool _showBarriarButton;
    NSString *_topicId;
    NSString *_topicName;
    NSString *_topicIcon;
    NSString *_topicDesc;
    NSString *_topicEName;
    NSString *_topicCertificationImg;
    NSString *_docId;
    NSString *_vUrl;
    NSString *_videoId;
    NSString *_videoUrl;
    NSString *_videoSource;
    NSString *_boardId;
    NSString *_title;
    NSString *_digest;
    NSString *_coverImgUrl;
    NSString *_fixCoverImgUrl;
    long long _replyCount;
    long long _voteCount;
    NSString *_replyCountString;
    long long _playerSize;
    unsigned long long _videoType;
    NSAttributedString *_titleAttrib;
    NSString *_refreshId;
    NSString *_fromId;
    long long _sizeSD;
    double _duration;
    struct CGSize _videoSize;
}

@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long sizeSD; // @synthesize sizeSD=_sizeSD;
@property(copy, nonatomic) NSString *fromId; // @synthesize fromId=_fromId;
@property(copy, nonatomic) NSString *refreshId; // @synthesize refreshId=_refreshId;
@property(retain, nonatomic) NSAttributedString *titleAttrib; // @synthesize titleAttrib=_titleAttrib;
@property(nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) _Bool showBarriarButton; // @synthesize showBarriarButton=_showBarriarButton;
@property(nonatomic) _Bool hasTopicInfo; // @synthesize hasTopicInfo=_hasTopicInfo;
@property(nonatomic) long long playerSize; // @synthesize playerSize=_playerSize;
@property(copy, nonatomic) NSString *replyCountString; // @synthesize replyCountString=_replyCountString;
@property(nonatomic) _Bool isVoted; // @synthesize isVoted=_isVoted;
@property(nonatomic) long long voteCount; // @synthesize voteCount=_voteCount;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(copy, nonatomic) NSString *fixCoverImgUrl; // @synthesize fixCoverImgUrl=_fixCoverImgUrl;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *boardId; // @synthesize boardId=_boardId;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *vUrl; // @synthesize vUrl=_vUrl;
@property(copy, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(copy, nonatomic) NSString *topicCertificationImg; // @synthesize topicCertificationImg=_topicCertificationImg;
@property(copy, nonatomic) NSString *topicEName; // @synthesize topicEName=_topicEName;
@property(copy, nonatomic) NSString *topicDesc; // @synthesize topicDesc=_topicDesc;
@property(copy, nonatomic) NSString *topicIcon; // @synthesize topicIcon=_topicIcon;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (id)trackFromId;
- (id)trackFromArea;
- (id)trackID;
- (id)trackType;
- (id)refreshID;
- (id)initWithArticle:(id)arg1;
- (id)initWithData:(id)arg1;

@end

