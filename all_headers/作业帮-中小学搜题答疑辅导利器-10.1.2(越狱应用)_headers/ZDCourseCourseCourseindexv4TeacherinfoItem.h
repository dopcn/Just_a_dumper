//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString;
@protocol AllteacherlistItem, Optional;

@interface ZDCourseCourseCourseindexv4TeacherinfoItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _teacherNum;
    long long _courseNum;
    NSArray<AllteacherlistItem> *_allTeacherList;
    NSArray *_desc;
}

@property(copy, nonatomic) NSArray *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSArray<AllteacherlistItem> *allTeacherList; // @synthesize allTeacherList=_allTeacherList;
@property(nonatomic) long long courseNum; // @synthesize courseNum=_courseNum;
@property(nonatomic) long long teacherNum; // @synthesize teacherNum=_teacherNum;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

