//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NMUser, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface NMEvent : NSObject
{
    NSMutableDictionary *_cellHeightDic;
    _Bool _liked;
    _Bool _withDetail;
    _Bool _isListening;
    _Bool _isHotEvent;
    _Bool _canHotEventBeDeleted;
    _Bool _skipParseActivityLink;
    _Bool _isStickied;
    int _likeCount;
    NSArray *_comments;
    long long _commentCount;
    long long _forwardCount;
    NSMutableArray *_likeUsers;
    long long _type;
    NSDate *_time;
    NMUser *_eventUser;
    NSDictionary *_jsonMeta;
    long long _ltime;
    unsigned long long _actionType;
    NSString *_contentName;
    NSString *_contentAuthor;
    NSString *_picUrl;
    NSString *_threadId;
    NSString *_eventId;
    NSString *_actID;
    NSString *_actName;
    NSString *_uuid;
    long long _showTime;
    NSString *_hotEventContent;
    unsigned long long _hotEventParticipantsCount;
    NSString *_recommendReason;
    NSString *_recommendAuthlogicString;
    NSArray *_sharedImages;
    double _heightForCell;
    NSString *_link;
}

+ (id)defaultImageForMainObject:(id)arg1 size:(struct CGSize)arg2;
+ (void)deleteEvent:(id)arg1 confirmAction:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
+ (_Bool)isEventOwner:(id)arg1 nickName:(id)arg2;
+ (id)eventWithRawDictionary:(id)arg1;
+ (Class)getEventClassByType:(long long)arg1;
+ (id)actIDForActLink:(id)arg1;
+ (id)actLinkForActID:(id)arg1;
+ (_Bool)isForwardEventType:(long long)arg1;
+ (_Bool)validType:(long long)arg1 originalType:(long long)arg2;
+ (_Bool)validType:(long long)arg1;
@property(nonatomic) _Bool isStickied; // @synthesize isStickied=_isStickied;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) _Bool skipParseActivityLink; // @synthesize skipParseActivityLink=_skipParseActivityLink;
@property(nonatomic) double heightForCell; // @synthesize heightForCell=_heightForCell;
@property(retain, nonatomic) NSArray *sharedImages; // @synthesize sharedImages=_sharedImages;
@property(retain, nonatomic) NSString *recommendAuthlogicString; // @synthesize recommendAuthlogicString=_recommendAuthlogicString;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) _Bool canHotEventBeDeleted; // @synthesize canHotEventBeDeleted=_canHotEventBeDeleted;
@property(nonatomic) unsigned long long hotEventParticipantsCount; // @synthesize hotEventParticipantsCount=_hotEventParticipantsCount;
@property(retain, nonatomic) NSString *hotEventContent; // @synthesize hotEventContent=_hotEventContent;
@property(nonatomic) _Bool isHotEvent; // @synthesize isHotEvent=_isHotEvent;
@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(readonly, nonatomic) long long showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *actName; // @synthesize actName=_actName;
@property(copy, nonatomic) NSString *actID; // @synthesize actID=_actID;
@property(nonatomic) _Bool withDetail; // @synthesize withDetail=_withDetail;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *contentAuthor; // @synthesize contentAuthor=_contentAuthor;
@property(retain, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) long long ltime; // @synthesize ltime=_ltime;
@property(retain, nonatomic) NSDictionary *jsonMeta; // @synthesize jsonMeta=_jsonMeta;
@property(retain, nonatomic) NMUser *eventUser; // @synthesize eventUser=_eventUser;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers=_likeUsers;
@property(nonatomic) long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
- (void).cxx_destruct;
- (id)originalEvent;
- (id)getLongShareWordForSharingOut;
- (id)getLongShareWord;
- (id)getShareWord;
- (id)getTypeDesc;
- (id)mainObjectName;
- (id)getMainObject;
- (id)BIJsonDictionaryWithActionType:(id)arg1 TopicID:(id)arg2 page:(id)arg3;
- (_Bool)isRecommendEvent;
- (_Bool)isForwardEvent;
- (_Bool)showDetail;
@property(readonly, nonatomic) _Bool showAuthor;
- (void)filterActivityNameForOldVersion;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *deletedRescourceDesc;
- (_Bool)isDeleteResource;
- (_Bool)isTranscodingEvent;
- (_Bool)isReadyEvent;
- (_Bool)isSendingEvent;
- (_Bool)isFailedEvent;
- (void)setHeight:(double)arg1 forCellWidth:(double)arg2;
- (double)heightForCellWidth:(double)arg1;
- (id)description;

@end

