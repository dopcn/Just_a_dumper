//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QZJfeed_info : JceObjectV2
{
    int jcev2_p_0_o_appid;
    int jcev2_p_1_o_typeId;
    unsigned int jcev2_p_2_o_time;
    unsigned int jcev2_p_3_o_opuin;
    unsigned int jcev2_p_6_o_has_pic;
    NSString *jcev2_p_4_o_strkey;
    NSString *jcev2_p_5_o_strcontent;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_has_pic, setter=setJce_has_pic:) unsigned int jcev2_p_6_o_has_pic; // @synthesize jcev2_p_6_o_has_pic;
@property(retain, nonatomic, getter=jce_strcontent, setter=setJce_strcontent:) NSString *jcev2_p_5_o_strcontent; // @synthesize jcev2_p_5_o_strcontent;
@property(retain, nonatomic, getter=jce_strkey, setter=setJce_strkey:) NSString *jcev2_p_4_o_strkey; // @synthesize jcev2_p_4_o_strkey;
@property(nonatomic, getter=jce_opuin, setter=setJce_opuin:) unsigned int jcev2_p_3_o_opuin; // @synthesize jcev2_p_3_o_opuin;
@property(nonatomic, getter=jce_time, setter=setJce_time:) unsigned int jcev2_p_2_o_time; // @synthesize jcev2_p_2_o_time;
@property(nonatomic, getter=jce_typeId, setter=setJce_typeId:) int jcev2_p_1_o_typeId; // @synthesize jcev2_p_1_o_typeId;
@property(nonatomic, getter=jce_appid, setter=setJce_appid:) int jcev2_p_0_o_appid; // @synthesize jcev2_p_0_o_appid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

