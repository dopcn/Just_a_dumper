//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface UninstallInfo : JceObjectV2
{
    int jcev2_p_0_r_option;
    int jcev2_p_2_o_softtype;
    NSString *jcev2_p_1_r_uid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_softtype, setter=setJce_softtype:) int jcev2_p_2_o_softtype; // @synthesize jcev2_p_2_o_softtype;
@property(retain, nonatomic, getter=jce_uid, setter=setJce_uid:) NSString *jcev2_p_1_r_uid; // @synthesize jcev2_p_1_r_uid;
@property(nonatomic, getter=jce_option, setter=setJce_option:) int jcev2_p_0_r_option; // @synthesize jcev2_p_0_r_option;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

