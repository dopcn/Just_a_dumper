//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface TrainSeatVendorTypeV3Model : CTBusinessBean
{
    int vendorID;
    NSString *showMessage;
    NSString *showLable;
    int showStyle;
    NSString *appendProductIDs;
    NSString *defaultProductIDs;
    int selectType;
}

@property(nonatomic) int selectType; // @synthesize selectType;
@property(copy, nonatomic) NSString *defaultProductIDs; // @synthesize defaultProductIDs;
@property(copy, nonatomic) NSString *appendProductIDs; // @synthesize appendProductIDs;
@property(nonatomic) int showStyle; // @synthesize showStyle;
@property(copy, nonatomic) NSString *showLable; // @synthesize showLable;
@property(copy, nonatomic) NSString *showMessage; // @synthesize showMessage;
@property(nonatomic) int vendorID; // @synthesize vendorID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;
@property(nonatomic) _Bool isShowPrice;
@property(retain, nonatomic) PriceType *ticketPrice;
@property(nonatomic) _Bool isOpenAppendProduct;
@property(retain, nonatomic) NSMutableArray *appendProductModels;

@end

