//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray;

@interface MttgetShelfOPBannerRsp : JceObjectV2
{
    int jcev2_p_0_r_iRet;
    NSArray *jcev2_p_1_r_vecShelfOPBanners__b0x9i_VOMttstShelfBanner;
    long long jcev2_p_2_o_eAdSlotID;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_eAdSlotID, setter=setJce_eAdSlotID:) long long jcev2_p_2_o_eAdSlotID; // @synthesize jcev2_p_2_o_eAdSlotID;
@property(retain, nonatomic, getter=jce_vecShelfOPBanners, setter=setJce_vecShelfOPBanners:) NSArray *jcev2_p_1_r_vecShelfOPBanners__b0x9i_VOMttstShelfBanner; // @synthesize jcev2_p_1_r_vecShelfOPBanners__b0x9i_VOMttstShelfBanner;
@property(nonatomic, getter=jce_iRet, setter=setJce_iRet:) int jcev2_p_0_r_iRet; // @synthesize jcev2_p_0_r_iRet;
- (void).cxx_destruct;
- (id)init;

@end

