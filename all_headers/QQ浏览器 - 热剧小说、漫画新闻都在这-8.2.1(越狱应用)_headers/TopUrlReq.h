//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, NSString;

@interface TopUrlReq : JceObjectV2
{
    int jcev2_p_0_r_iUrlUpdateTime;
    NSString *jcev2_p_1_o_sQua;
    NSData *jcev2_p_2_o_sGUID;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSData *jcev2_p_2_o_sGUID; // @synthesize jcev2_p_2_o_sGUID;
@property(retain, nonatomic, getter=sQua, setter=setSQua:) NSString *jcev2_p_1_o_sQua; // @synthesize jcev2_p_1_o_sQua;
@property(nonatomic, getter=iUrlUpdateTime, setter=setIUrlUpdateTime:) int jcev2_p_0_r_iUrlUpdateTime; // @synthesize jcev2_p_0_r_iUrlUpdateTime;
- (void).cxx_destruct;
- (id)init;

@end

