//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QBIOSGetTestFlightPageReq : JceObjectV2
{
    int jcev2_p_3_o_nVersionNum;
    NSString *jcev2_p_0_o_sQua;
    NSString *jcev2_p_1_o_sQua2;
    NSString *jcev2_p_2_o_sGuid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=nVersionNum, setter=setNVersionNum:) int jcev2_p_3_o_nVersionNum; // @synthesize jcev2_p_3_o_nVersionNum;
@property(retain, nonatomic, getter=sGuid, setter=setSGuid:) NSString *jcev2_p_2_o_sGuid; // @synthesize jcev2_p_2_o_sGuid;
@property(retain, nonatomic, getter=sQua2, setter=setSQua2:) NSString *jcev2_p_1_o_sQua2; // @synthesize jcev2_p_1_o_sQua2;
@property(retain, nonatomic, getter=sQua, setter=setSQua:) NSString *jcev2_p_0_o_sQua; // @synthesize jcev2_p_0_o_sQua;
- (void).cxx_destruct;
- (id)init;

@end

