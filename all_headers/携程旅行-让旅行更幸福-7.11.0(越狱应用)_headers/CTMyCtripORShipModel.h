//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTMyCtripORBaseModel.h"

@class NSArray, NSString;

@interface CTMyCtripORShipModel : CTMyCtripORBaseModel
{
    NSString *_OrderTitle;
    NSString *_DepartureTimeStr;
    NSString *_ArrivalTimeStr;
    NSString *_DepartureCity;
    NSString *_ArrivalCity;
    NSString *_DeparturePort;
    NSString *_ArrivalPort;
    NSString *_ShipName;
    NSString *_DateDescription;
    NSString *_TipType;
    NSArray *_OrderActions;
}

@property(retain, nonatomic) NSArray *OrderActions; // @synthesize OrderActions=_OrderActions;
@property(copy, nonatomic) NSString *TipType; // @synthesize TipType=_TipType;
@property(copy, nonatomic) NSString *DateDescription; // @synthesize DateDescription=_DateDescription;
@property(copy, nonatomic) NSString *ShipName; // @synthesize ShipName=_ShipName;
@property(copy, nonatomic) NSString *ArrivalPort; // @synthesize ArrivalPort=_ArrivalPort;
@property(copy, nonatomic) NSString *DeparturePort; // @synthesize DeparturePort=_DeparturePort;
@property(copy, nonatomic) NSString *ArrivalCity; // @synthesize ArrivalCity=_ArrivalCity;
@property(copy, nonatomic) NSString *DepartureCity; // @synthesize DepartureCity=_DepartureCity;
@property(copy, nonatomic) NSString *ArrivalTimeStr; // @synthesize ArrivalTimeStr=_ArrivalTimeStr;
@property(copy, nonatomic) NSString *DepartureTimeStr; // @synthesize DepartureTimeStr=_DepartureTimeStr;
@property(copy, nonatomic) NSString *OrderTitle; // @synthesize OrderTitle=_OrderTitle;
- (void).cxx_destruct;

@end

