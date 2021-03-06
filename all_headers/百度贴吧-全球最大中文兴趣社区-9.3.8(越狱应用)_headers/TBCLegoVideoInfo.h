//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCLegoBaseContentItem.h"

@class NSString;

@interface TBCLegoVideoInfo : TBCLegoBaseContentItem
{
    _Bool _showProgress;
    NSString *_videoMD5;
    NSString *_videoURL;
    NSString *_videoDuration;
    NSString *_videoWidth;
    NSString *_videoHeight;
    NSString *_thumbURL;
    NSString *_thumbWidth;
    NSString *_thumbHeight;
    NSString *_videoLength;
    NSString *_playCount;
    NSString *_fullScreen;
    NSString *_resumeTime;
}

@property(copy, nonatomic) NSString *resumeTime; // @synthesize resumeTime=_resumeTime;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(copy, nonatomic) NSString *fullScreen; // @synthesize fullScreen=_fullScreen;
@property(copy, nonatomic) NSString *playCount; // @synthesize playCount=_playCount;
@property(copy, nonatomic) NSString *videoLength; // @synthesize videoLength=_videoLength;
@property(copy, nonatomic) NSString *thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(copy, nonatomic) NSString *thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(copy, nonatomic) NSString *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(copy, nonatomic) NSString *videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *videoMD5; // @synthesize videoMD5=_videoMD5;
- (void).cxx_destruct;
- (id)initWithJsonData:(id)arg1;

@end

