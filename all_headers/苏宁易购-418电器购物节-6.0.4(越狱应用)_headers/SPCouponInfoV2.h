//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SPCouponInfoV2 : NSObject
{
    NSString *_activityName;
    NSString *_couponCode;
    NSString *_couponName;
    NSString *_discountAmount;
    NSString *_discountDes;
    NSString *_installmentPeriods;
    NSString *_couponTypeName;
}

@property(retain, nonatomic) NSString *couponTypeName; // @synthesize couponTypeName=_couponTypeName;
@property(retain, nonatomic) NSString *installmentPeriods; // @synthesize installmentPeriods=_installmentPeriods;
@property(retain, nonatomic) NSString *discountDes; // @synthesize discountDes=_discountDes;
@property(retain, nonatomic) NSString *discountAmount; // @synthesize discountAmount=_discountAmount;
@property(retain, nonatomic) NSString *couponName; // @synthesize couponName=_couponName;
@property(retain, nonatomic) NSString *couponCode; // @synthesize couponCode=_couponCode;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

