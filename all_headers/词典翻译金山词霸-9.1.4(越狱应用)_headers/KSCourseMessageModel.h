//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary;
@protocol KSCourseActivityListModel><Optional, Optional;

@interface KSCourseMessageModel : JSONModel
{
    long long _status;
    NSDictionary<Optional> *_data;
    NSArray<KSCourseActivityListModel><Optional> *_activityList;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<KSCourseActivityListModel><Optional> *activityList; // @synthesize activityList=_activityList;
@property(retain, nonatomic) NSDictionary<Optional> *data; // @synthesize data=_data;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

