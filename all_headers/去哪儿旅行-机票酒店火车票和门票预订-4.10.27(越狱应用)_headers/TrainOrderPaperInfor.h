//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, TrainNumberObject;

@interface TrainOrderPaperInfor : NSObject
{
    NSString *_name;
    NSString *_phone;
    NSString *_streetAddress;
    NSString *_expressName;
    NSString *_expressNum;
    NSString *_expressLinkUrl;
    NSNumber *_isTicketToStation;
    NSString *_ticketToStationPhone;
    TrainNumberObject *_paperPhoneObj;
}

@property(retain, nonatomic) TrainNumberObject *paperPhoneObj; // @synthesize paperPhoneObj=_paperPhoneObj;
@property(copy, nonatomic) NSString *ticketToStationPhone; // @synthesize ticketToStationPhone=_ticketToStationPhone;
@property(retain, nonatomic) NSNumber *isTicketToStation; // @synthesize isTicketToStation=_isTicketToStation;
@property(copy, nonatomic) NSString *expressLinkUrl; // @synthesize expressLinkUrl=_expressLinkUrl;
@property(copy, nonatomic) NSString *expressNum; // @synthesize expressNum=_expressNum;
@property(copy, nonatomic) NSString *expressName; // @synthesize expressName=_expressName;
@property(copy, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

