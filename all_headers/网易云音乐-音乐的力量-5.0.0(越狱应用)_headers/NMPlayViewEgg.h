//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface NMPlayViewEgg : NSObject
{
    _Bool _isLandscape;
    NSString *_eggId;
    NSArray *_songIds;
    NSURL *_videoURL;
    NSURL *_imageURL;
    NSURL *_blurImageURL;
    NSString *_replayButtonTitle;
    long long _videoSize;
    long long _onlineTime;
    long long _offlineTime;
    unsigned long long _numberOfTouches;
    NSString *_logTargetValue;
    long long _playEndAction;
    NSString *_shareButtonTitle;
    NSString *_shareMainTitle;
    NSString *_shareSubTitle;
    NSString *_shareContent;
    NSString *_shareResourceCoverUrl;
    NSString *_shareResourceId;
    long long _shareResourceType;
    NSString *_playEndWebUrl;
}

@property(retain, nonatomic) NSString *playEndWebUrl; // @synthesize playEndWebUrl=_playEndWebUrl;
@property(nonatomic) long long shareResourceType; // @synthesize shareResourceType=_shareResourceType;
@property(retain, nonatomic) NSString *shareResourceId; // @synthesize shareResourceId=_shareResourceId;
@property(retain, nonatomic) NSString *shareResourceCoverUrl; // @synthesize shareResourceCoverUrl=_shareResourceCoverUrl;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *shareSubTitle; // @synthesize shareSubTitle=_shareSubTitle;
@property(retain, nonatomic) NSString *shareMainTitle; // @synthesize shareMainTitle=_shareMainTitle;
@property(retain, nonatomic) NSString *shareButtonTitle; // @synthesize shareButtonTitle=_shareButtonTitle;
@property(nonatomic) long long playEndAction; // @synthesize playEndAction=_playEndAction;
@property(retain, nonatomic) NSString *logTargetValue; // @synthesize logTargetValue=_logTargetValue;
@property(nonatomic) unsigned long long numberOfTouches; // @synthesize numberOfTouches=_numberOfTouches;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) long long offlineTime; // @synthesize offlineTime=_offlineTime;
@property(nonatomic) long long onlineTime; // @synthesize onlineTime=_onlineTime;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSString *replayButtonTitle; // @synthesize replayButtonTitle=_replayButtonTitle;
@property(retain, nonatomic) NSURL *blurImageURL; // @synthesize blurImageURL=_blurImageURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSArray *songIds; // @synthesize songIds=_songIds;
@property(retain, nonatomic) NSString *eggId; // @synthesize eggId=_eggId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

