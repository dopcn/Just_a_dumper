//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MDWGoodsDetail : JceObjectV2
{
    int jcev2_p_0_o_iGoodsId;
    int jcev2_p_2_o_iCost;
    int jcev2_p_4_o_iGoodsType;
    int jcev2_p_7_o_iGetQCoins;
    int jcev2_p_8_o_iTelCarrier;
    int jcev2_p_9_o_iUseQQOrTel;
    NSString *jcev2_p_1_o_sName;
    NSString *jcev2_p_3_o_sDesc;
    NSString *jcev2_p_5_o_sIconUrl;
    NSString *jcev2_p_6_o_sCost;
    NSString *jcev2_p_10_o_sCostRMB;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_sCostRMB, setter=setJce_sCostRMB:) NSString *jcev2_p_10_o_sCostRMB; // @synthesize jcev2_p_10_o_sCostRMB;
@property(nonatomic, getter=jce_iUseQQOrTel, setter=setJce_iUseQQOrTel:) int jcev2_p_9_o_iUseQQOrTel; // @synthesize jcev2_p_9_o_iUseQQOrTel;
@property(nonatomic, getter=jce_iTelCarrier, setter=setJce_iTelCarrier:) int jcev2_p_8_o_iTelCarrier; // @synthesize jcev2_p_8_o_iTelCarrier;
@property(nonatomic, getter=jce_iGetQCoins, setter=setJce_iGetQCoins:) int jcev2_p_7_o_iGetQCoins; // @synthesize jcev2_p_7_o_iGetQCoins;
@property(retain, nonatomic, getter=jce_sCost, setter=setJce_sCost:) NSString *jcev2_p_6_o_sCost; // @synthesize jcev2_p_6_o_sCost;
@property(retain, nonatomic, getter=jce_sIconUrl, setter=setJce_sIconUrl:) NSString *jcev2_p_5_o_sIconUrl; // @synthesize jcev2_p_5_o_sIconUrl;
@property(nonatomic, getter=jce_iGoodsType, setter=setJce_iGoodsType:) int jcev2_p_4_o_iGoodsType; // @synthesize jcev2_p_4_o_iGoodsType;
@property(retain, nonatomic, getter=jce_sDesc, setter=setJce_sDesc:) NSString *jcev2_p_3_o_sDesc; // @synthesize jcev2_p_3_o_sDesc;
@property(nonatomic, getter=jce_iCost, setter=setJce_iCost:) int jcev2_p_2_o_iCost; // @synthesize jcev2_p_2_o_iCost;
@property(retain, nonatomic, getter=jce_sName, setter=setJce_sName:) NSString *jcev2_p_1_o_sName; // @synthesize jcev2_p_1_o_sName;
@property(nonatomic, getter=jce_iGoodsId, setter=setJce_iGoodsId:) int jcev2_p_0_o_iGoodsId; // @synthesize jcev2_p_0_o_iGoodsId;
- (void).cxx_destruct;
- (id)init;

@end

