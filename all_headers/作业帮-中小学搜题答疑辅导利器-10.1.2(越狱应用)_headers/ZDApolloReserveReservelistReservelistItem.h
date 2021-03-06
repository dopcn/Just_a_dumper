//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSString;
@protocol Optional;

@interface ZDApolloReserveReservelistReservelistItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    NSString *_teacherName;
    NSString *_grade;
    NSString *_course;
    long long _rate;
    NSString *_lectureTitle;
    NSString *_statusText;
    long long _fanAmount;
    long long _isCancelAlarm;
    long long _status;
    long long _teachNum;
    NSString *_teacherDetailUrl;
    NSString *_bucketId;
    NSString *_reserveId;
    NSString *_detailFeUrl;
    NSString *_studyReportUrl;
    long long _startTime;
    NSString *_statusIconLeft;
    NSString *_statusTextLeft;
    NSString *_avatar;
    long long _cancelFlag;
    NSString *_teacherId;
    long long _endTime;
}

@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *teacherId; // @synthesize teacherId=_teacherId;
@property(nonatomic) long long cancelFlag; // @synthesize cancelFlag=_cancelFlag;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *statusTextLeft; // @synthesize statusTextLeft=_statusTextLeft;
@property(retain, nonatomic) NSString *statusIconLeft; // @synthesize statusIconLeft=_statusIconLeft;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *studyReportUrl; // @synthesize studyReportUrl=_studyReportUrl;
@property(retain, nonatomic) NSString *detailFeUrl; // @synthesize detailFeUrl=_detailFeUrl;
@property(retain, nonatomic) NSString *reserveId; // @synthesize reserveId=_reserveId;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *teacherDetailUrl; // @synthesize teacherDetailUrl=_teacherDetailUrl;
@property(nonatomic) long long teachNum; // @synthesize teachNum=_teachNum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long isCancelAlarm; // @synthesize isCancelAlarm=_isCancelAlarm;
@property(nonatomic) long long fanAmount; // @synthesize fanAmount=_fanAmount;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain, nonatomic) NSString *lectureTitle; // @synthesize lectureTitle=_lectureTitle;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *course; // @synthesize course=_course;
@property(retain, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(retain, nonatomic) NSString *teacherName; // @synthesize teacherName=_teacherName;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

