//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface MileageInfoModel : CTBusinessBean
{
    _Bool _isShow;
    _Bool _isDeduct;
    int _deductMileage;
    int _deductMileageThreshold;
    NSString *_deductPrice;
}

@property(nonatomic) int deductMileageThreshold; // @synthesize deductMileageThreshold=_deductMileageThreshold;
@property(nonatomic) int deductMileage; // @synthesize deductMileage=_deductMileage;
@property(copy, nonatomic) NSString *deductPrice; // @synthesize deductPrice=_deductPrice;
@property(nonatomic) _Bool isDeduct; // @synthesize isDeduct=_isDeduct;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

