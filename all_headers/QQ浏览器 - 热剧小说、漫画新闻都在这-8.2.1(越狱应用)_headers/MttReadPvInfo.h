//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttReadPvInfo : JceObjectV2
{
    int jcev2_p_0_r_iAppId;
    int jcev2_p_2_r_iSitePv;
    int jcev2_p_3_r_iArticlePv;
    NSString *jcev2_p_1_r_sChanId;
    NSString *jcev2_p_4_o_sChannelSource;
    NSString *jcev2_p_5_o_sChannelNo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sChannelNo, setter=setSChannelNo:) NSString *jcev2_p_5_o_sChannelNo; // @synthesize jcev2_p_5_o_sChannelNo;
@property(retain, nonatomic, getter=sChannelSource, setter=setSChannelSource:) NSString *jcev2_p_4_o_sChannelSource; // @synthesize jcev2_p_4_o_sChannelSource;
@property(nonatomic, getter=iArticlePv, setter=setIArticlePv:) int jcev2_p_3_r_iArticlePv; // @synthesize jcev2_p_3_r_iArticlePv;
@property(nonatomic, getter=iSitePv, setter=setISitePv:) int jcev2_p_2_r_iSitePv; // @synthesize jcev2_p_2_r_iSitePv;
@property(retain, nonatomic, getter=sChanId, setter=setSChanId:) NSString *jcev2_p_1_r_sChanId; // @synthesize jcev2_p_1_r_sChanId;
@property(nonatomic, getter=iAppId, setter=setIAppId:) int jcev2_p_0_r_iAppId; // @synthesize jcev2_p_0_r_iAppId;
- (void).cxx_destruct;
- (id)init;

@end

