//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MDWUserId, NSString;

@interface MDWBindPhoneReq : JceObjectV2
{
    int jcev2_p_2_o_iOpType;
    MDWUserId *jcev2_p_0_o_tId;
    long long jcev2_p_1_o_lPhoneNum;
    NSString *jcev2_p_3_o_sCodes;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_sCodes, setter=setJce_sCodes:) NSString *jcev2_p_3_o_sCodes; // @synthesize jcev2_p_3_o_sCodes;
@property(nonatomic, getter=jce_iOpType, setter=setJce_iOpType:) int jcev2_p_2_o_iOpType; // @synthesize jcev2_p_2_o_iOpType;
@property(nonatomic, getter=jce_lPhoneNum, setter=setJce_lPhoneNum:) long long jcev2_p_1_o_lPhoneNum; // @synthesize jcev2_p_1_o_lPhoneNum;
@property(retain, nonatomic, getter=jce_tId, setter=setJce_tId:) MDWUserId *jcev2_p_0_o_tId; // @synthesize jcev2_p_0_o_tId;
- (void).cxx_destruct;
- (id)init;

@end

