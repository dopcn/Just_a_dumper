//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MDWPlayerInfo : JceObjectV2
{
    unsigned int jcev2_p_3_o_uZDL;
    NSString *jcev2_p_0_o_sPlayerName;
    NSString *jcev2_p_1_o_sServerName;
    NSString *jcev2_p_2_o_sServerDisplayName;
    NSString *jcev2_p_4_o_sPlayerDetailUrl;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_sPlayerDetailUrl, setter=setJce_sPlayerDetailUrl:) NSString *jcev2_p_4_o_sPlayerDetailUrl; // @synthesize jcev2_p_4_o_sPlayerDetailUrl;
@property(nonatomic, getter=jce_uZDL, setter=setJce_uZDL:) unsigned int jcev2_p_3_o_uZDL; // @synthesize jcev2_p_3_o_uZDL;
@property(retain, nonatomic, getter=jce_sServerDisplayName, setter=setJce_sServerDisplayName:) NSString *jcev2_p_2_o_sServerDisplayName; // @synthesize jcev2_p_2_o_sServerDisplayName;
@property(retain, nonatomic, getter=jce_sServerName, setter=setJce_sServerName:) NSString *jcev2_p_1_o_sServerName; // @synthesize jcev2_p_1_o_sServerName;
@property(retain, nonatomic, getter=jce_sPlayerName, setter=setJce_sPlayerName:) NSString *jcev2_p_0_o_sPlayerName; // @synthesize jcev2_p_0_o_sPlayerName;
- (void).cxx_destruct;
- (id)init;

@end

