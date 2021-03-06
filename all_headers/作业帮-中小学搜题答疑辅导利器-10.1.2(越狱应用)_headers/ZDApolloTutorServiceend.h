//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString, ZDApolloTutorServiceendTeacherItem;
@protocol Optional, ZDApolloTutorServiceendDatelistItem, ZDApolloTutorServiceendLectureslistItem;

@interface ZDApolloTutorServiceend : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _isAchievement;
    long long _busiType;
    NSArray<ZDApolloTutorServiceendDatelistItem> *_dateList;
    NSArray<ZDApolloTutorServiceendLectureslistItem> *_lecturesList;
    NSString *_detailFeUrl;
    long long _recommendType;
    NSString *_tips;
    ZDApolloTutorServiceendTeacherItem *_teacher;
    NSString *_fudaoTime;
}

@property(retain, nonatomic) NSString *fudaoTime; // @synthesize fudaoTime=_fudaoTime;
@property(retain, nonatomic) ZDApolloTutorServiceendTeacherItem *teacher; // @synthesize teacher=_teacher;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *detailFeUrl; // @synthesize detailFeUrl=_detailFeUrl;
@property(retain, nonatomic) NSArray<ZDApolloTutorServiceendLectureslistItem> *lecturesList; // @synthesize lecturesList=_lecturesList;
@property(retain, nonatomic) NSArray<ZDApolloTutorServiceendDatelistItem> *dateList; // @synthesize dateList=_dateList;
@property(nonatomic) long long busiType; // @synthesize busiType=_busiType;
@property(nonatomic) long long isAchievement; // @synthesize isAchievement=_isAchievement;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

