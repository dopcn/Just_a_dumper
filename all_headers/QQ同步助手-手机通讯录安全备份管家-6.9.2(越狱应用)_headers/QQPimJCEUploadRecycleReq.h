//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QQPimCommonJCEMobileInfo;

@interface QQPimJCEUploadRecycleReq : JceObjectV2
{
    QQPimCommonJCEMobileInfo *jcev2_p_0_r_mobileInfo;
    long long jcev2_p_1_r_scene;
    NSArray *jcev2_p_2_r_vcard__b0x9i_VOQQPimJCEContItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vcard, setter=setJce_vcard:) NSArray *jcev2_p_2_r_vcard__b0x9i_VOQQPimJCEContItem; // @synthesize jcev2_p_2_r_vcard__b0x9i_VOQQPimJCEContItem;
@property(nonatomic, getter=jce_scene, setter=setJce_scene:) long long jcev2_p_1_r_scene; // @synthesize jcev2_p_1_r_scene;
@property(retain, nonatomic, getter=jce_mobileInfo, setter=setJce_mobileInfo:) QQPimCommonJCEMobileInfo *jcev2_p_0_r_mobileInfo; // @synthesize jcev2_p_0_r_mobileInfo;
- (void).cxx_destruct;
- (id)init;

@end

