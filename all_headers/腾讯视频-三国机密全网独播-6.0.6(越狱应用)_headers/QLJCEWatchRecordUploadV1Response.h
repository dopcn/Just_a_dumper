//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray;

@interface QLJCEWatchRecordUploadV1Response : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    long long jcev2_p_1_r_dataVersion;
    NSArray *jcev2_p_2_o_recordList__b0x9i_VOQLJCEWatchRecordV1;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_recordList, setter=setJce_recordList:) NSArray *jcev2_p_2_o_recordList__b0x9i_VOQLJCEWatchRecordV1; // @synthesize jcev2_p_2_o_recordList__b0x9i_VOQLJCEWatchRecordV1;
@property(nonatomic, getter=jce_dataVersion, setter=setJce_dataVersion:) long long jcev2_p_1_r_dataVersion; // @synthesize jcev2_p_1_r_dataVersion;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

