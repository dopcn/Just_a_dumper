//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEMCGetNewMsgInfoResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_2_o_msgCount;
    NSString *jcev2_p_1_r_version;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_msgCount, setter=setJce_msgCount:) int jcev2_p_2_o_msgCount; // @synthesize jcev2_p_2_o_msgCount;
@property(retain, nonatomic, getter=jce_version, setter=setJce_version:) NSString *jcev2_p_1_r_version; // @synthesize jcev2_p_1_r_version;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

