//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface TrainTransferFilterInfoModel : CTBusinessBean
{
    NSString *transferStation;
    NSString *transferType;
    _Bool hasTicket;
    int minTransferMinutes;
    int maxTransferMinutes;
    NSMutableArray *departureTrainTimePeriodList;
    NSMutableArray *arrivalTrainTimePeriodList;
    _Bool transferInSameStation;
    NSString *trainType;
    NSString *sortType;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSString *sortType; // @synthesize sortType;
@property(copy, nonatomic) NSString *trainType; // @synthesize trainType;
@property(nonatomic) _Bool transferInSameStation; // @synthesize transferInSameStation;
@property(retain, nonatomic) NSMutableArray *arrivalTrainTimePeriodList; // @synthesize arrivalTrainTimePeriodList;
@property(retain, nonatomic) NSMutableArray *departureTrainTimePeriodList; // @synthesize departureTrainTimePeriodList;
@property(nonatomic) int maxTransferMinutes; // @synthesize maxTransferMinutes;
@property(nonatomic) int minTransferMinutes; // @synthesize minTransferMinutes;
@property(nonatomic) _Bool hasTicket; // @synthesize hasTicket;
@property(copy, nonatomic) NSString *transferType; // @synthesize transferType;
@property(copy, nonatomic) NSString *transferStation; // @synthesize transferStation;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

