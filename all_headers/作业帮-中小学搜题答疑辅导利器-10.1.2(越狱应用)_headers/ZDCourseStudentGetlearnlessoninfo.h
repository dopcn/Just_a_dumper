//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString, ZDCourseStudentGetlearnlessoninfoScreenconfigItem;
@protocol Optional, ZDCourseStudentGetlearnlessoninfoListItem;

@interface ZDCourseStudentGetlearnlessoninfo : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    NSString *_studyTarget;
    NSString *_videoUrl;
    long long _isFinish;
    long long _courseId;
    NSString *_downloadVideo;
    NSString *_videoPlayKey;
    long long _videoExpireFlag;
    long long _videoExpire;
    NSArray<ZDCourseStudentGetlearnlessoninfoListItem> *_list;
    ZDCourseStudentGetlearnlessoninfoScreenconfigItem *_screenConfig;
    long long _lessonNum;
    long long _starNum;
    long long _isHomework;
    long long _downloadVideoByte;
    long long _lessonId;
    NSString *_lessonName;
    long long _isVideoEncrypt;
}

@property(nonatomic) long long isVideoEncrypt; // @synthesize isVideoEncrypt=_isVideoEncrypt;
@property(copy, nonatomic) NSString *lessonName; // @synthesize lessonName=_lessonName;
@property(nonatomic) long long lessonId; // @synthesize lessonId=_lessonId;
@property(nonatomic) long long downloadVideoByte; // @synthesize downloadVideoByte=_downloadVideoByte;
@property(nonatomic) long long isHomework; // @synthesize isHomework=_isHomework;
@property(nonatomic) long long starNum; // @synthesize starNum=_starNum;
@property(nonatomic) long long lessonNum; // @synthesize lessonNum=_lessonNum;
@property(retain, nonatomic) ZDCourseStudentGetlearnlessoninfoScreenconfigItem *screenConfig; // @synthesize screenConfig=_screenConfig;
@property(copy, nonatomic) NSArray<ZDCourseStudentGetlearnlessoninfoListItem> *list; // @synthesize list=_list;
@property(nonatomic) long long videoExpire; // @synthesize videoExpire=_videoExpire;
@property(nonatomic) long long videoExpireFlag; // @synthesize videoExpireFlag=_videoExpireFlag;
@property(copy, nonatomic) NSString *videoPlayKey; // @synthesize videoPlayKey=_videoPlayKey;
@property(copy, nonatomic) NSString *downloadVideo; // @synthesize downloadVideo=_downloadVideo;
@property(nonatomic) long long courseId; // @synthesize courseId=_courseId;
@property(nonatomic) long long isFinish; // @synthesize isFinish=_isFinish;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *studyTarget; // @synthesize studyTarget=_studyTarget;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

