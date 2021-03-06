//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString;
@protocol Optional, ZDApolloApiSerialcourseCourselistItem, ZDApolloApiSerialcourseGradelistItem, ZDApolloApiSerialcourseLabellistItem, ZDApolloApiSerialcourseTeacherlistItem, ZDApolloApiSerialcourseTimelistItem;

@interface ZDApolloApiSerialcourse : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _listCourseId;
    NSArray<ZDApolloApiSerialcourseTeacherlistItem> *_teacherList;
    NSArray<ZDApolloApiSerialcourseTimelistItem> *_timeList;
    NSArray<ZDApolloApiSerialcourseCourselistItem> *_courseList;
    NSArray<ZDApolloApiSerialcourseLabellistItem> *_labelList;
    NSArray<ZDApolloApiSerialcourseGradelistItem> *_gradeList;
    long long _listGradeId;
}

@property(nonatomic) long long listGradeId; // @synthesize listGradeId=_listGradeId;
@property(retain, nonatomic) NSArray<ZDApolloApiSerialcourseGradelistItem> *gradeList; // @synthesize gradeList=_gradeList;
@property(retain, nonatomic) NSArray<ZDApolloApiSerialcourseLabellistItem> *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) NSArray<ZDApolloApiSerialcourseCourselistItem> *courseList; // @synthesize courseList=_courseList;
@property(retain, nonatomic) NSArray<ZDApolloApiSerialcourseTimelistItem> *timeList; // @synthesize timeList=_timeList;
@property(retain, nonatomic) NSArray<ZDApolloApiSerialcourseTeacherlistItem> *teacherList; // @synthesize teacherList=_teacherList;
@property(nonatomic) long long listCourseId; // @synthesize listCourseId=_listCourseId;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

