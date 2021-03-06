//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCalendarBaseCellModel.h"

@class NSArray, NSDictionary, NSString;

@interface JDCalendarActivityCellModel : JDCalendarBaseCellModel
{
    _Bool _isRemind;
    NSString *_pos;
    NSString *_title;
    NSString *_startDate;
    NSString *_startTime;
    NSString *_img;
    NSString *_url;
    NSDictionary *_jump;
    NSString *_jumpStr;
    NSString *_dayleft;
    NSString *_todayActivityId;
    NSString *_descriptionStr;
    NSArray *_tags;
    unsigned long long _activityStatus;
    NSString *_activityStatusStr;
    struct CGSize _titleLabelSize;
}

+ (id)replacedKeyFromPropertyName;
+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *activityStatusStr; // @synthesize activityStatusStr=_activityStatusStr;
@property(nonatomic) unsigned long long activityStatus; // @synthesize activityStatus=_activityStatus;
@property(nonatomic) struct CGSize titleLabelSize; // @synthesize titleLabelSize=_titleLabelSize;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(nonatomic) _Bool isRemind; // @synthesize isRemind=_isRemind;
@property(copy, nonatomic) NSString *todayActivityId; // @synthesize todayActivityId=_todayActivityId;
@property(copy, nonatomic) NSString *dayleft; // @synthesize dayleft=_dayleft;
@property(copy, nonatomic) NSString *jumpStr; // @synthesize jumpStr=_jumpStr;
@property(copy, nonatomic) NSDictionary *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pos; // @synthesize pos=_pos;
- (void).cxx_destruct;

@end

