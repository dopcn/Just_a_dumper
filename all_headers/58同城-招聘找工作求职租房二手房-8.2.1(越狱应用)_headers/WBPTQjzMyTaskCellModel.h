//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPTBaseCellModel.h"

@class NSString, WBPTQjzTimerCounter;

@interface WBPTQjzMyTaskCellModel : WBPTBaseCellModel
{
    NSString *_taskId;
    NSString *_orderId;
    NSString *_title;
    NSString *_price;
    NSString *_unit;
    NSString *_info;
    NSString *_remainCount;
    NSString *_status;
    NSString *_action;
    unsigned long long _orderStatus;
    WBPTQjzTimerCounter *_timer;
}

@property(retain, nonatomic) WBPTQjzTimerCounter *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long orderStatus; // @synthesize orderStatus=_orderStatus;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *remainCount; // @synthesize remainCount=_remainCount;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

