//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseModel.h"

@class NSArray, NSString;

@interface CTTourDetailCommissionInfo : CTTourBaseModel
{
    NSString *_ProductId;
    NSString *_Commission;
    NSString *_CommissionRate;
    NSString *_MaxValue;
    NSArray *_CommissionList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain) NSArray *CommissionList; // @synthesize CommissionList=_CommissionList;
@property(retain) NSString *MaxValue; // @synthesize MaxValue=_MaxValue;
@property(retain) NSString *CommissionRate; // @synthesize CommissionRate=_CommissionRate;
@property(retain) NSString *Commission; // @synthesize Commission=_Commission;
@property(retain) NSString *ProductId; // @synthesize ProductId=_ProductId;
- (void).cxx_destruct;

@end

