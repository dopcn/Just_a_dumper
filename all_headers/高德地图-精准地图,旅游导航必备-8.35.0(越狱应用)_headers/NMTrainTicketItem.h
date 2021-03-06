//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NMTrainTicketItem : NSObject
{
    NSString *_amap_order_id;
    NSString *_action_url;
    NSString *_start_time;
    NSString *_start_station;
    NSString *_end_station;
    NSString *_train_num;
    long long _ticket_num;
    long long _status;
    NSString *_seat;
    NSString *_status_name;
}

@property(retain, nonatomic) NSString *status_name; // @synthesize status_name=_status_name;
@property(retain, nonatomic) NSString *seat; // @synthesize seat=_seat;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long ticket_num; // @synthesize ticket_num=_ticket_num;
@property(retain, nonatomic) NSString *train_num; // @synthesize train_num=_train_num;
@property(retain, nonatomic) NSString *end_station; // @synthesize end_station=_end_station;
@property(retain, nonatomic) NSString *start_station; // @synthesize start_station=_start_station;
@property(retain, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(retain, nonatomic) NSString *action_url; // @synthesize action_url=_action_url;
@property(retain, nonatomic) NSString *amap_order_id; // @synthesize amap_order_id=_amap_order_id;
- (void).cxx_destruct;

@end

