//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "TWTRVersionedCacheable-Protocol.h"

@class NSArray, NSDate, NSString, NSURL, TWTRTweetMediaEntity, TWTRTweetRepository, TWTRUser;

@interface TWTRTweet : NSObject <TWTRVersionedCacheable, NSCoding>
{
    _Bool _isFavorited;
    _Bool _isRetweeted;
    _Bool _isRetweet;
    NSString *_tweetID;
    NSDate *_createdAt;
    NSString *_text;
    TWTRUser *_author;
    long long _favoriteCount;
    long long _retweetCount;
    NSString *_inReplyToTweetID;
    NSString *_inReplyToUserID;
    NSString *_inReplyToScreenName;
    NSURL *_permalink;
    NSString *_retweetID;
    TWTRTweet *_retweetedTweet;
    TWTRTweetRepository *_tweetRepo;
    NSArray *_hashtags;
    NSArray *_media;
    NSArray *_urls;
    NSArray *_userMentions;
    TWTRTweetMediaEntity *_mediaEntity;
}

+ (id)versionedCacheKeyWithID:(id)arg1 perspective:(id)arg2;
+ (long long)version;
+ (id)tweetsWithJSONArray:(id)arg1;
@property(retain, nonatomic) TWTRTweetMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(copy, nonatomic) NSArray *userMentions; // @synthesize userMentions=_userMentions;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(copy, nonatomic) NSArray *hashtags; // @synthesize hashtags=_hashtags;
@property(retain, nonatomic) TWTRTweetRepository *tweetRepo; // @synthesize tweetRepo=_tweetRepo;
@property(nonatomic) _Bool isRetweet; // @synthesize isRetweet=_isRetweet;
@property(retain, nonatomic) TWTRTweet *retweetedTweet; // @synthesize retweetedTweet=_retweetedTweet;
@property(copy, nonatomic) NSString *retweetID; // @synthesize retweetID=_retweetID;
@property(nonatomic) _Bool isRetweeted; // @synthesize isRetweeted=_isRetweeted;
@property(nonatomic) _Bool isFavorited; // @synthesize isFavorited=_isFavorited;
@property(copy, nonatomic) NSURL *permalink; // @synthesize permalink=_permalink;
@property(copy, nonatomic) NSString *inReplyToScreenName; // @synthesize inReplyToScreenName=_inReplyToScreenName;
@property(copy, nonatomic) NSString *inReplyToUserID; // @synthesize inReplyToUserID=_inReplyToUserID;
@property(copy, nonatomic) NSString *inReplyToTweetID; // @synthesize inReplyToTweetID=_inReplyToTweetID;
@property(nonatomic) long long retweetCount; // @synthesize retweetCount=_retweetCount;
@property(nonatomic) long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(retain, nonatomic) TWTRUser *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *tweetID; // @synthesize tweetID=_tweetID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)hasMedia;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPropertiesFromDict:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

