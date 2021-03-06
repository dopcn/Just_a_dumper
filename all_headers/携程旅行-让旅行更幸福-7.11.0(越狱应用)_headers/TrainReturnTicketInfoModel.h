//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface TrainReturnTicketInfoModel : CTBusinessBean
{
    _Bool returnButtonDisplay;
    NSString *cannotReason;
    NSString *tips;
    NSString *returnFailTips;
    NSString *feePercentage;
    PriceType *lowestFee;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) PriceType *lowestFee; // @synthesize lowestFee;
@property(copy, nonatomic) NSString *feePercentage; // @synthesize feePercentage;
@property(copy, nonatomic) NSString *returnFailTips; // @synthesize returnFailTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips;
@property(copy, nonatomic) NSString *cannotReason; // @synthesize cannotReason;
@property(nonatomic) _Bool returnButtonDisplay; // @synthesize returnButtonDisplay;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

