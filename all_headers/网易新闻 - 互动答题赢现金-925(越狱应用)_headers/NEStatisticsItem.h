//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSString;
@protocol Optional;

@interface NEStatisticsItem : JSONModel
{
    int _action;
    NSString<Optional> *_url;
    NSString<Optional> *_type;
    NSDictionary<Optional> *_monitor_ext_param;
}

+ (void)sendStatisticsItems:(id)arg1 adInfoData:(id)arg2 tag:(id)arg3 timeInterval:(double)arg4;
+ (id)getAppendStringForYP:(id)arg1 adInfoData:(id)arg2 tag:(id)arg3 timestamp:(double)arg4;
+ (id)getStatisticParameterForYiTou:(id)arg1 adInfoData:(id)arg2 tag:(id)arg3 timeInterval:(double)arg4;
+ (id)getActionType:(id)arg1;
@property(copy, nonatomic) NSDictionary<Optional> *monitor_ext_param; // @synthesize monitor_ext_param=_monitor_ext_param;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

