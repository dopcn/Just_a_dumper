//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class NSArray, NSNumber, NSString;

@interface MTVouchersList : MTBModel
{
    NSNumber *_success;
    NSString *_msg;
    NSNumber *_status;
    NSNumber *_totalCount;
    NSNumber *_pageCount;
    NSArray *_voucherList;
}

+ (id)mtdOptional_getArrayTypePropertiesMappingDic;
@property(copy, nonatomic) NSArray *voucherList; // @synthesize voucherList=_voucherList;
@property(retain, nonatomic) NSNumber *pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

