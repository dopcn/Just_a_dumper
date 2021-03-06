//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AttributeTextDSProtocol-Protocol.h"
#import "SNSBaseFeedProtocol-Protocol.h"
#import "SNSPlayItemProtocol-Protocol.h"

@class NSArray, NSString, SNSVisibleSetting;
@protocol SNSFeedProtocol;

@protocol SNSFeedProtocol <SNSBaseFeedProtocol, AttributeTextDSProtocol, SNSPlayItemProtocol>
- (SNSVisibleSetting *)visibleSetting;
- (id <SNSFeedProtocol>)sourceFeed;
- (NSString *)nickname;
- (NSArray *)likes;
- (long long)isLikedByMe;
- (int)likeCount;
- (int)readCount;
- (int)shareCount;
- (NSArray *)comments;
- (void)setCommentCount:(int)arg1;
- (int)commentCount;
@end

