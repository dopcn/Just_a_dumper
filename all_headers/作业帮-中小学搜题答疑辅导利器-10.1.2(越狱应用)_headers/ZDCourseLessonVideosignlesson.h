//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString, ZDCourseLessonVideosignlessonScreenconfigItem;
@protocol Optional, ZDCourseLessonVideosignlessonSignlistItem;

@interface ZDCourseLessonVideosignlesson : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    NSString *_status;
    long long _lessonVideoEncode;
    NSString *_courseName;
    NSString *_videoPlayKey;
    NSString *_novideotoast;
    NSString *_downloadVideo;
    long long _videoExpireFlag;
    long long _videoExpire;
    long long _videoPlayStatus;
    NSArray<ZDCourseLessonVideosignlessonSignlistItem> *_signlist;
    ZDCourseLessonVideosignlessonScreenconfigItem *_screenConfig;
    long long _lessonId;
    NSString *_lessonName;
    NSString *_lessonVideo;
}

@property(copy, nonatomic) NSString *lessonVideo; // @synthesize lessonVideo=_lessonVideo;
@property(copy, nonatomic) NSString *lessonName; // @synthesize lessonName=_lessonName;
@property(nonatomic) long long lessonId; // @synthesize lessonId=_lessonId;
@property(retain, nonatomic) ZDCourseLessonVideosignlessonScreenconfigItem *screenConfig; // @synthesize screenConfig=_screenConfig;
@property(copy, nonatomic) NSArray<ZDCourseLessonVideosignlessonSignlistItem> *signlist; // @synthesize signlist=_signlist;
@property(nonatomic) long long videoPlayStatus; // @synthesize videoPlayStatus=_videoPlayStatus;
@property(nonatomic) long long videoExpire; // @synthesize videoExpire=_videoExpire;
@property(nonatomic) long long videoExpireFlag; // @synthesize videoExpireFlag=_videoExpireFlag;
@property(copy, nonatomic) NSString *downloadVideo; // @synthesize downloadVideo=_downloadVideo;
@property(copy, nonatomic) NSString *novideotoast; // @synthesize novideotoast=_novideotoast;
@property(copy, nonatomic) NSString *videoPlayKey; // @synthesize videoPlayKey=_videoPlayKey;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(nonatomic) long long lessonVideoEncode; // @synthesize lessonVideoEncode=_lessonVideoEncode;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

