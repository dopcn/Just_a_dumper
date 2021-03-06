//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UCVideoRequestData : NSObject
{
    NSString *_request;
    NSString *_url;
    NSString *_uri;
    long long _srcType;
    NSString *_videoID;
    long long _srcID;
    long long _episodeID;
    long long _videoType;
    NSString *_title;
    NSString *_img;
    long long _playType;
    NSString *_param;
}

@property(retain, nonatomic) NSString *param; // @synthesize param=_param;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) long long episodeID; // @synthesize episodeID=_episodeID;
@property(nonatomic) long long srcID; // @synthesize srcID=_srcID;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) long long srcType; // @synthesize srcType=_srcType;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *request; // @synthesize request=_request;
- (void)dealloc;

@end

