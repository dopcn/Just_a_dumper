//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface MttAssistantGuideEggResp : JceObjectV2
{
    long long jcev2_p_0_r_status;
    NSArray *jcev2_p_1_r_vecEgg__b0x9i_VOMttAssistantGuideEgg;
    NSString *jcev2_p_2_r_sVersion;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sVersion, setter=setSVersion:) NSString *jcev2_p_2_r_sVersion; // @synthesize jcev2_p_2_r_sVersion;
@property(retain, nonatomic, getter=vecEgg, setter=setVecEgg:) NSArray *jcev2_p_1_r_vecEgg__b0x9i_VOMttAssistantGuideEgg; // @synthesize jcev2_p_1_r_vecEgg__b0x9i_VOMttAssistantGuideEgg;
@property(nonatomic, getter=status, setter=setStatus:) long long jcev2_p_0_r_status; // @synthesize jcev2_p_0_r_status;
- (void).cxx_destruct;
- (id)init;

@end

