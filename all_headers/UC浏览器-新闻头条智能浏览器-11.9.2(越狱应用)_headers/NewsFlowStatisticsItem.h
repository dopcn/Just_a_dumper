//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface NewsFlowStatisticsItem : NSObject <NSCoding>
{
    _Bool _isWeMedia;
    _Bool _wmCorePVHasUpload;
    _Bool _isCommentPage;
    long long _ac;
    NSString *_tm;
    NSString *_aid;
    NSString *_recoid;
    long long _itemType;
    NSString *_duration;
    NSString *_subAid;
    NSString *_content;
    NSString *_channel;
    long long _followState;
    long long _urlSource;
    long long _contentType;
    NSString *_referHost;
}

+ (id)itemWithActionType:(long long)arg1;
@property(nonatomic) _Bool isCommentPage; // @synthesize isCommentPage=_isCommentPage;
@property(copy, nonatomic) NSString *referHost; // @synthesize referHost=_referHost;
@property(nonatomic) _Bool wmCorePVHasUpload; // @synthesize wmCorePVHasUpload=_wmCorePVHasUpload;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long urlSource; // @synthesize urlSource=_urlSource;
@property(nonatomic) long long followState; // @synthesize followState=_followState;
@property(nonatomic) _Bool isWeMedia; // @synthesize isWeMedia=_isWeMedia;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *subAid; // @synthesize subAid=_subAid;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *recoid; // @synthesize recoid=_recoid;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(readonly, copy, nonatomic) NSString *tm; // @synthesize tm=_tm;
@property(nonatomic) long long ac; // @synthesize ac=_ac;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)updateTM;
- (void)dealloc;
- (id)initWithActionType:(long long)arg1;
- (id)init;

@end

