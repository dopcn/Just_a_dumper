//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEjceHttpRequest : JceObjectV2
{
    NSString *jcev2_p_0_r_strRequestID;
    NSString *jcev2_p_1_r_strRequest;
    NSString *jcev2_p_2_o_strHttpHead;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strHttpHead, setter=setJce_strHttpHead:) NSString *jcev2_p_2_o_strHttpHead; // @synthesize jcev2_p_2_o_strHttpHead;
@property(retain, nonatomic, getter=jce_strRequest, setter=setJce_strRequest:) NSString *jcev2_p_1_r_strRequest; // @synthesize jcev2_p_1_r_strRequest;
@property(retain, nonatomic, getter=jce_strRequestID, setter=setJce_strRequestID:) NSString *jcev2_p_0_r_strRequestID; // @synthesize jcev2_p_0_r_strRequestID;
- (void).cxx_destruct;
- (id)init;

@end

