//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSDictionary, NSString;

@interface MttReportVideoFeedbackReq : JceObjectV2
{
    NSString *jcev2_p_0_r_sGuid;
    NSString *jcev2_p_1_r_sVideoId;
    NSDictionary *jcev2_p_2_r_mFeedbackId__b0x9i_M09ONSStringONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=mFeedbackId, setter=setMFeedbackId:) NSDictionary *jcev2_p_2_r_mFeedbackId__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_2_r_mFeedbackId__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=sVideoId, setter=setSVideoId:) NSString *jcev2_p_1_r_sVideoId; // @synthesize jcev2_p_1_r_sVideoId;
@property(retain, nonatomic, getter=sGuid, setter=setSGuid:) NSString *jcev2_p_0_r_sGuid; // @synthesize jcev2_p_0_r_sGuid;
- (void).cxx_destruct;
- (id)init;

@end

