//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QQPimJCESoftwareInfo : JceObjectV2
{
    BOOL jcev2_p_5_o_is_install;
    _Bool jcev2_p_9_o_isRecentRunning;
    int jcev2_p_4_r_software_versioncode;
    NSString *jcev2_p_0_r_software_uid;
    NSString *jcev2_p_1_r_software_verify;
    NSString *jcev2_p_2_r_software_version;
    NSString *jcev2_p_3_r_software_name;
    long long jcev2_p_6_o_software_size;
    NSString *jcev2_p_7_o_productName;
    NSString *jcev2_p_8_o_fmd5;
    NSString *jcev2_p_10_o_ext;
    NSString *jcev2_p_11_o_businessStream;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_businessStream, setter=setJce_businessStream:) NSString *jcev2_p_11_o_businessStream; // @synthesize jcev2_p_11_o_businessStream;
@property(retain, nonatomic, getter=jce_ext, setter=setJce_ext:) NSString *jcev2_p_10_o_ext; // @synthesize jcev2_p_10_o_ext;
@property(nonatomic, getter=jce_isRecentRunning, setter=setJce_isRecentRunning:) _Bool jcev2_p_9_o_isRecentRunning; // @synthesize jcev2_p_9_o_isRecentRunning;
@property(retain, nonatomic, getter=jce_fmd5, setter=setJce_fmd5:) NSString *jcev2_p_8_o_fmd5; // @synthesize jcev2_p_8_o_fmd5;
@property(retain, nonatomic, getter=jce_productName, setter=setJce_productName:) NSString *jcev2_p_7_o_productName; // @synthesize jcev2_p_7_o_productName;
@property(nonatomic, getter=jce_software_size, setter=setJce_software_size:) long long jcev2_p_6_o_software_size; // @synthesize jcev2_p_6_o_software_size;
@property(nonatomic, getter=jce_is_install, setter=setJce_is_install:) BOOL jcev2_p_5_o_is_install; // @synthesize jcev2_p_5_o_is_install;
@property(nonatomic, getter=jce_software_versioncode, setter=setJce_software_versioncode:) int jcev2_p_4_r_software_versioncode; // @synthesize jcev2_p_4_r_software_versioncode;
@property(retain, nonatomic, getter=jce_software_name, setter=setJce_software_name:) NSString *jcev2_p_3_r_software_name; // @synthesize jcev2_p_3_r_software_name;
@property(retain, nonatomic, getter=jce_software_version, setter=setJce_software_version:) NSString *jcev2_p_2_r_software_version; // @synthesize jcev2_p_2_r_software_version;
@property(retain, nonatomic, getter=jce_software_verify, setter=setJce_software_verify:) NSString *jcev2_p_1_r_software_verify; // @synthesize jcev2_p_1_r_software_verify;
@property(retain, nonatomic, getter=jce_software_uid, setter=setJce_software_uid:) NSString *jcev2_p_0_r_software_uid; // @synthesize jcev2_p_0_r_software_uid;
- (void).cxx_destruct;
- (id)init;

@end

