//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UILabel, WBOTCalendarDayNumberTool;

@interface WBOTRecordHomeHeadView : UITableViewHeaderFooterView
{
    NSString *_dateString;
    NSString *_weekString;
    UILabel *_dateLabel;
    UILabel *_weekLabel;
    WBOTCalendarDayNumberTool *_calendarDdayTool;
}

@property(retain, nonatomic) WBOTCalendarDayNumberTool *calendarDdayTool; // @synthesize calendarDdayTool=_calendarDdayTool;
@property(retain, nonatomic) UILabel *weekLabel; // @synthesize weekLabel=_weekLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(copy, nonatomic) NSString *weekString; // @synthesize weekString=_weekString;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;

@end

