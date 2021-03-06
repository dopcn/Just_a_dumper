//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NVModelBaseTAArrivedTime, NVModelBaseTAOrderActionEntity, RACCommand;

@interface TAOrderStatusActionViewModel : NSObject
{
    NVModelBaseTAOrderActionEntity *_entity;
    RACCommand *_confirmingOrderRequestCommand;
    RACCommand *_maxArrivedTimeRequestCommand;
    RACCommand *_buttonOperationCommand;
    RACCommand *_reviewOrderCommand;
    RACCommand *_payOrderCommand;
    RACCommand *_confirmOrderCommand;
    RACCommand *_submitCancelOrderCommand;
    RACCommand *_cancelOrderCommand;
    NVModelBaseTAArrivedTime *_arrivedTime;
    long long _speed;
}

@property(nonatomic) long long speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NVModelBaseTAArrivedTime *arrivedTime; // @synthesize arrivedTime=_arrivedTime;
@property(retain, nonatomic) RACCommand *cancelOrderCommand; // @synthesize cancelOrderCommand=_cancelOrderCommand;
@property(retain, nonatomic) RACCommand *submitCancelOrderCommand; // @synthesize submitCancelOrderCommand=_submitCancelOrderCommand;
@property(retain, nonatomic) RACCommand *confirmOrderCommand; // @synthesize confirmOrderCommand=_confirmOrderCommand;
@property(retain, nonatomic) RACCommand *payOrderCommand; // @synthesize payOrderCommand=_payOrderCommand;
@property(retain, nonatomic) RACCommand *reviewOrderCommand; // @synthesize reviewOrderCommand=_reviewOrderCommand;
@property(retain, nonatomic) RACCommand *buttonOperationCommand; // @synthesize buttonOperationCommand=_buttonOperationCommand;
@property(retain, nonatomic) RACCommand *maxArrivedTimeRequestCommand; // @synthesize maxArrivedTimeRequestCommand=_maxArrivedTimeRequestCommand;
@property(retain, nonatomic) RACCommand *confirmingOrderRequestCommand; // @synthesize confirmingOrderRequestCommand=_confirmingOrderRequestCommand;
@property(retain, nonatomic) NVModelBaseTAOrderActionEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)cancelOrderParameters;
- (id)maxArrivedTimeParameters;
- (id)confirmingOrderParameters;
- (void)p_initialize;
- (id)init;

@end

