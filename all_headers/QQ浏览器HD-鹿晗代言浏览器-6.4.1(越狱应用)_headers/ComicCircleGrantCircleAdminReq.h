//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class ComicCircleUserSession, NSArray, NSString;

@interface ComicCircleGrantCircleAdminReq : JceObjectV2
{
    ComicCircleUserSession *jcev2_p_0_r_stOwner;
    NSString *jcev2_p_1_r_sCircleId;
    NSArray *jcev2_p_2_r_vAdminUser__b0x9i_VOComicCircleUserAccount;
    long long jcev2_p_3_r_eOperate;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_eOperate, setter=setJce_eOperate:) long long jcev2_p_3_r_eOperate; // @synthesize jcev2_p_3_r_eOperate;
@property(retain, nonatomic, getter=jce_vAdminUser, setter=setJce_vAdminUser:) NSArray *jcev2_p_2_r_vAdminUser__b0x9i_VOComicCircleUserAccount; // @synthesize jcev2_p_2_r_vAdminUser__b0x9i_VOComicCircleUserAccount;
@property(retain, nonatomic, getter=jce_sCircleId, setter=setJce_sCircleId:) NSString *jcev2_p_1_r_sCircleId; // @synthesize jcev2_p_1_r_sCircleId;
@property(retain, nonatomic, getter=jce_stOwner, setter=setJce_stOwner:) ComicCircleUserSession *jcev2_p_0_r_stOwner; // @synthesize jcev2_p_0_r_stOwner;
- (void).cxx_destruct;
- (id)init;

@end

