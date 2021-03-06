//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class ColorTextModel, NSNumber, NSString;

@interface ViewType16Model : ViewTypeBaseModel
{
    NSString *_thumburl;
    NSString *_title;
    NSString *_person_count;
    NSString *_fans_count;
    NSString *_cps;
    NSString *_jump;
    NSString *_renum;
    NSNumber *_zb_type;
    NSNumber *_start_time;
    NSNumber *_end_time;
    NSNumber *_remain_time;
    NSString *_user_id;
    NSString *_desc;
    NSString *_start_day;
    ColorTextModel *_icon_lower_left;
    ColorTextModel *_icon_lower_right;
    ColorTextModel *_icon_upper_right;
    NSString *_h5_url;
    NSString *_live_id;
}

@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
@property(copy, nonatomic) NSString *h5_url; // @synthesize h5_url=_h5_url;
@property(retain, nonatomic) ColorTextModel *icon_upper_right; // @synthesize icon_upper_right=_icon_upper_right;
@property(retain, nonatomic) ColorTextModel *icon_lower_right; // @synthesize icon_lower_right=_icon_lower_right;
@property(retain, nonatomic) ColorTextModel *icon_lower_left; // @synthesize icon_lower_left=_icon_lower_left;
@property(copy, nonatomic) NSString *start_day; // @synthesize start_day=_start_day;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *remain_time; // @synthesize remain_time=_remain_time;
@property(retain, nonatomic) NSNumber *end_time; // @synthesize end_time=_end_time;
@property(retain, nonatomic) NSNumber *start_time; // @synthesize start_time=_start_time;
@property(retain, nonatomic) NSNumber *zb_type; // @synthesize zb_type=_zb_type;
@property(copy, nonatomic) NSString *renum; // @synthesize renum=_renum;
@property(copy, nonatomic) NSString *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *cps; // @synthesize cps=_cps;
@property(copy, nonatomic) NSString *fans_count; // @synthesize fans_count=_fans_count;
@property(copy, nonatomic) NSString *person_count; // @synthesize person_count=_person_count;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *thumburl; // @synthesize thumburl=_thumburl;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end

