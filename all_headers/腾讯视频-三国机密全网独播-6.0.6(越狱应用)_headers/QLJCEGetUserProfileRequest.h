//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEGetUserProfileRequest : JceObjectV2
{
    int jcev2_p_0_r_iVersion;
    NSArray *jcev2_p_1_o_vecFields__b0x9i_VONSString;
    NSString *jcev2_p_2_o_strExt;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strExt, setter=setJce_strExt:) NSString *jcev2_p_2_o_strExt; // @synthesize jcev2_p_2_o_strExt;
@property(retain, nonatomic, getter=jce_vecFields, setter=setJce_vecFields:) NSArray *jcev2_p_1_o_vecFields__b0x9i_VONSString; // @synthesize jcev2_p_1_o_vecFields__b0x9i_VONSString;
@property(nonatomic, getter=jce_iVersion, setter=setJce_iVersion:) int jcev2_p_0_r_iVersion; // @synthesize jcev2_p_0_r_iVersion;
- (void).cxx_destruct;
- (id)init;

@end

