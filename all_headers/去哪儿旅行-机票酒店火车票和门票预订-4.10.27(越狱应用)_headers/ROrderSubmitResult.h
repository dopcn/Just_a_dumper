//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchNetResult.h"

@class NSArray, NSNumber, NSString, ROrderInfo;

@interface ROrderSubmitResult : SearchNetResult
{
    NSNumber *_autoSelect;
    NSString *_cityCode;
    NSNumber *_count;
    NSArray *_vendorList__Array__RXCarTypeTaxiVendor;
    NSArray *_lastVendorList__Array__RXCarTypeTaxiVendor;
    NSNumber *_showType;
    NSNumber *_driverCount;
    NSNumber *_pullInterval;
    NSNumber *_showRecommendMeet;
    NSNumber *_bookType;
    ROrderInfo *_order;
    NSString *_warmHint;
    NSNumber *_countDown;
}

@property(retain, nonatomic) NSNumber *countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) NSString *warmHint; // @synthesize warmHint=_warmHint;
@property(readonly, nonatomic, getter=orderInfo) ROrderInfo *order; // @synthesize order=_order;
@property(readonly, nonatomic, getter=bookType) NSNumber *bookType; // @synthesize bookType=_bookType;
@property(readonly, nonatomic, getter=showRecommendMeet) NSNumber *showRecommendMeet; // @synthesize showRecommendMeet=_showRecommendMeet;
@property(readonly, nonatomic, getter=pullInterval) NSNumber *pullInterval; // @synthesize pullInterval=_pullInterval;
@property(readonly, nonatomic, getter=driverCount) NSNumber *driverCount; // @synthesize driverCount=_driverCount;
@property(readonly, nonatomic, getter=showType) NSNumber *showType; // @synthesize showType=_showType;
@property(retain, nonatomic, getter=lastVendorList, setter=setLastVendorList:) NSArray *lastVendorList__Array__RXCarTypeTaxiVendor; // @synthesize lastVendorList__Array__RXCarTypeTaxiVendor=_lastVendorList__Array__RXCarTypeTaxiVendor;
@property(retain, nonatomic, getter=vendorList, setter=setVendorList:) NSArray *vendorList__Array__RXCarTypeTaxiVendor; // @synthesize vendorList__Array__RXCarTypeTaxiVendor=_vendorList__Array__RXCarTypeTaxiVendor;
@property(readonly, nonatomic, getter=vendorCount) NSNumber *count; // @synthesize count=_count;
@property(readonly, nonatomic, getter=cityCode) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(readonly, nonatomic, getter=isAutoSelect) NSNumber *autoSelect; // @synthesize autoSelect=_autoSelect;
- (void).cxx_destruct;
- (id)getServiceIconInfo:(id)arg1;
- (id)mainIconsToShow;
- (void)setVendorCount:(id)arg1;
- (void)setArrayVendors:(id)arg1;
- (void)setCityCode:(id)arg1;

@end

