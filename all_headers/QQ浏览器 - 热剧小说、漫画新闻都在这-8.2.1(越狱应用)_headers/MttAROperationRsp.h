//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttAROperationInfo, NSString;

@interface MttAROperationRsp : JceObjectV2
{
    int jcev2_p_0_o_iRetOperation;
    MttAROperationInfo *jcev2_p_1_o_stAROperationInfo;
    NSString *jcev2_p_2_o_sDownActionMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sDownActionMd5, setter=setSDownActionMd5:) NSString *jcev2_p_2_o_sDownActionMd5; // @synthesize jcev2_p_2_o_sDownActionMd5;
@property(retain, nonatomic, getter=stAROperationInfo, setter=setStAROperationInfo:) MttAROperationInfo *jcev2_p_1_o_stAROperationInfo; // @synthesize jcev2_p_1_o_stAROperationInfo;
@property(nonatomic, getter=iRetOperation, setter=setIRetOperation:) int jcev2_p_0_o_iRetOperation; // @synthesize jcev2_p_0_o_iRetOperation;
- (void).cxx_destruct;
- (id)init;

@end

