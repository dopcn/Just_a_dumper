//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QZJPhotoSVideoflowUser;

@interface QZJPhotoRecommandVideoFlow : JceObjectV2
{
    long long jcev2_p_0_r_videoflow_type;
    QZJPhotoSVideoflowUser *jcev2_p_1_r_user;
    NSArray *jcev2_p_2_r_photolist__b0x9i_VOQZJPhotoPhoto;
    long long jcev2_p_3_r_reason;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_reason, setter=setJce_reason:) long long jcev2_p_3_r_reason; // @synthesize jcev2_p_3_r_reason;
@property(retain, nonatomic, getter=jce_photolist, setter=setJce_photolist:) NSArray *jcev2_p_2_r_photolist__b0x9i_VOQZJPhotoPhoto; // @synthesize jcev2_p_2_r_photolist__b0x9i_VOQZJPhotoPhoto;
@property(retain, nonatomic, getter=jce_user, setter=setJce_user:) QZJPhotoSVideoflowUser *jcev2_p_1_r_user; // @synthesize jcev2_p_1_r_user;
@property(nonatomic, getter=jce_videoflow_type, setter=setJce_videoflow_type:) long long jcev2_p_0_r_videoflow_type; // @synthesize jcev2_p_0_r_videoflow_type;
- (void).cxx_destruct;
- (id)init;

@end

