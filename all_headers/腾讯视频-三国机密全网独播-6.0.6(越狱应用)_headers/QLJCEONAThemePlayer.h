//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction, QLJCEVideoItemData;

@interface QLJCEONAThemePlayer : JceObjectV2
{
    int jcev2_p_2_o_topMarginRatio;
    int jcev2_p_3_o_heightToWidthRatio;
    int jcev2_p_6_o_styleID;
    QLJCEVideoItemData *jcev2_p_0_r_videoItemData;
    NSString *jcev2_p_1_r_bgImageUrl;
    NSString *jcev2_p_4_o_textColor;
    NSString *jcev2_p_5_o_bgColor;
    NSString *jcev2_p_7_o_vipBtnImageUrl;
    QLJCEAction *jcev2_p_8_o_vipAction;
    NSString *jcev2_p_9_o_priorityBtnImageUrl;
    QLJCEAction *jcev2_p_10_o_priorityAction;
    NSString *jcev2_p_11_o_isvipBtnImageUrl;
    QLJCEAction *jcev2_p_12_o_isvipAction;
    QLJCEAction *jcev2_p_13_o_bgImageAction;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_bgImageAction, setter=setJce_bgImageAction:) QLJCEAction *jcev2_p_13_o_bgImageAction; // @synthesize jcev2_p_13_o_bgImageAction;
@property(retain, nonatomic, getter=jce_isvipAction, setter=setJce_isvipAction:) QLJCEAction *jcev2_p_12_o_isvipAction; // @synthesize jcev2_p_12_o_isvipAction;
@property(retain, nonatomic, getter=jce_isvipBtnImageUrl, setter=setJce_isvipBtnImageUrl:) NSString *jcev2_p_11_o_isvipBtnImageUrl; // @synthesize jcev2_p_11_o_isvipBtnImageUrl;
@property(retain, nonatomic, getter=jce_priorityAction, setter=setJce_priorityAction:) QLJCEAction *jcev2_p_10_o_priorityAction; // @synthesize jcev2_p_10_o_priorityAction;
@property(retain, nonatomic, getter=jce_priorityBtnImageUrl, setter=setJce_priorityBtnImageUrl:) NSString *jcev2_p_9_o_priorityBtnImageUrl; // @synthesize jcev2_p_9_o_priorityBtnImageUrl;
@property(retain, nonatomic, getter=jce_vipAction, setter=setJce_vipAction:) QLJCEAction *jcev2_p_8_o_vipAction; // @synthesize jcev2_p_8_o_vipAction;
@property(retain, nonatomic, getter=jce_vipBtnImageUrl, setter=setJce_vipBtnImageUrl:) NSString *jcev2_p_7_o_vipBtnImageUrl; // @synthesize jcev2_p_7_o_vipBtnImageUrl;
@property(nonatomic, getter=jce_styleID, setter=setJce_styleID:) int jcev2_p_6_o_styleID; // @synthesize jcev2_p_6_o_styleID;
@property(retain, nonatomic, getter=jce_bgColor, setter=setJce_bgColor:) NSString *jcev2_p_5_o_bgColor; // @synthesize jcev2_p_5_o_bgColor;
@property(retain, nonatomic, getter=jce_textColor, setter=setJce_textColor:) NSString *jcev2_p_4_o_textColor; // @synthesize jcev2_p_4_o_textColor;
@property(nonatomic, getter=jce_heightToWidthRatio, setter=setJce_heightToWidthRatio:) int jcev2_p_3_o_heightToWidthRatio; // @synthesize jcev2_p_3_o_heightToWidthRatio;
@property(nonatomic, getter=jce_topMarginRatio, setter=setJce_topMarginRatio:) int jcev2_p_2_o_topMarginRatio; // @synthesize jcev2_p_2_o_topMarginRatio;
@property(retain, nonatomic, getter=jce_bgImageUrl, setter=setJce_bgImageUrl:) NSString *jcev2_p_1_r_bgImageUrl; // @synthesize jcev2_p_1_r_bgImageUrl;
@property(retain, nonatomic, getter=jce_videoItemData, setter=setJce_videoItemData:) QLJCEVideoItemData *jcev2_p_0_r_videoItemData; // @synthesize jcev2_p_0_r_videoItemData;
- (void).cxx_destruct;
- (id)init;

@end

