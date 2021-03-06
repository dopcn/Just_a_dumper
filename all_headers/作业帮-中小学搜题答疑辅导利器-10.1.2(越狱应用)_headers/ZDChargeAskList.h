//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString;
@protocol Optional, ZDChargeAskListCourselistItem, ZDChargeAskListServicelistItem;

@interface ZDChargeAskList : ZDApi
{
    _Bool _hasMore;
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _totalTime;
    NSArray<ZDChargeAskListServicelistItem> *_servicelist;
    long long _flowerCount;
    long long _showStudyReport;
    NSString *_topAskCountTip;
    long long _studyReportId;
    NSArray<ZDChargeAskListCourselistItem> *_courseList;
    NSString *_studyReportUrl;
    long long _totalService;
    NSString *_topFansTip;
    NSString *_topTip;
    long long _left;
}

@property(nonatomic) long long left; // @synthesize left=_left;
@property(retain, nonatomic) NSString *topTip; // @synthesize topTip=_topTip;
@property(retain, nonatomic) NSString *topFansTip; // @synthesize topFansTip=_topFansTip;
@property(nonatomic) long long totalService; // @synthesize totalService=_totalService;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *studyReportUrl; // @synthesize studyReportUrl=_studyReportUrl;
@property(retain, nonatomic) NSArray<ZDChargeAskListCourselistItem> *courseList; // @synthesize courseList=_courseList;
@property(nonatomic) long long studyReportId; // @synthesize studyReportId=_studyReportId;
@property(retain, nonatomic) NSString *topAskCountTip; // @synthesize topAskCountTip=_topAskCountTip;
@property(nonatomic) long long showStudyReport; // @synthesize showStudyReport=_showStudyReport;
@property(nonatomic) long long flowerCount; // @synthesize flowerCount=_flowerCount;
@property(retain, nonatomic) NSArray<ZDChargeAskListServicelistItem> *servicelist; // @synthesize servicelist=_servicelist;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

