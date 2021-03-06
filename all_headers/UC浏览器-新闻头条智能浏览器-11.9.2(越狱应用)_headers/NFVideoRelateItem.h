//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NFVideoRelateItem : NSObject
{
    NSString *_videoId;
    NSString *_videoUrl;
    double _duration;
    NSString *_title;
    long long _lineState;
    NSString *_aid;
    NSString *_pageURL;
    NSString *_imageURL;
    NSString *_shareURL;
    NSString *_itemType;
    NSString *_channelId;
    NSString *_recoId;
    NSString *_wmID;
    NSString *_openAward;
    NSString *_action;
    NSString *_awardUrl;
}

@property(copy, nonatomic) NSString *awardUrl; // @synthesize awardUrl=_awardUrl;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *openAward; // @synthesize openAward=_openAward;
@property(copy, nonatomic) NSString *wmID; // @synthesize wmID=_wmID;
@property(copy, nonatomic) NSString *recoId; // @synthesize recoId=_recoId;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) long long lineState; // @synthesize lineState=_lineState;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void)dealloc;

@end

