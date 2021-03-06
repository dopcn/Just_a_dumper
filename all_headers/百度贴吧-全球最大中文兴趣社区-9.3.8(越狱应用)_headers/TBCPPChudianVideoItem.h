//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCIMBaseMessageItem.h"

@class NSString;

@interface TBCPPChudianVideoItem : TBCIMBaseMessageItem
{
    NSString *_videoID;
    NSString *_videoUrl;
    NSString *_duration;
    NSString *_videoWidth;
    NSString *_videoHeight;
    NSString *_videoSize;
    NSString *_thumbnailUrl;
    NSString *_thumbnailWidth;
    NSString *_thumbnailHeight;
    NSString *_playCount;
}

@property(copy, nonatomic) NSString *playCount; // @synthesize playCount=_playCount;
@property(copy, nonatomic) NSString *thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property(copy, nonatomic) NSString *thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(copy, nonatomic) NSString *videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(copy, nonatomic) NSString *videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (id)init;
- (void)dealloc;

@end

