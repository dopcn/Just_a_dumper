//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCalendarBaseModel.h"

@class NSArray, NSMutableArray, NSString;

@interface JDCalendarModel : JDCalendarBaseModel
{
    NSString *_code;
    NSString *_errmsg;
    NSArray *_tagList;
    NSArray *_activityList;
    NSArray *_remindList;
    NSArray *_activityRemindList;
    NSMutableArray *_filterActivityList;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSMutableArray *filterActivityList; // @synthesize filterActivityList=_filterActivityList;
@property(retain, nonatomic) NSArray *activityRemindList; // @synthesize activityRemindList=_activityRemindList;
@property(retain, nonatomic) NSArray *remindList; // @synthesize remindList=_remindList;
@property(retain, nonatomic) NSArray *activityList; // @synthesize activityList=_activityList;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *errmsg; // @synthesize errmsg=_errmsg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)p_filterActivityList;
- (void)p_sumTodayActivityListAndTodayRemindList;
- (void)keyValuesDidFinishConvertingToObject;

@end

