//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEDeleteChatSessionRequest : JceObjectV2
{
    int jcev2_p_1_r_sessionType;
    int jcev2_p_3_o_reqType;
    NSString *jcev2_p_0_r_sessionId;
    NSString *jcev2_p_2_r_msgId;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_reqType, setter=setJce_reqType:) int jcev2_p_3_o_reqType; // @synthesize jcev2_p_3_o_reqType;
@property(retain, nonatomic, getter=jce_msgId, setter=setJce_msgId:) NSString *jcev2_p_2_r_msgId; // @synthesize jcev2_p_2_r_msgId;
@property(nonatomic, getter=jce_sessionType, setter=setJce_sessionType:) int jcev2_p_1_r_sessionType; // @synthesize jcev2_p_1_r_sessionType;
@property(retain, nonatomic, getter=jce_sessionId, setter=setJce_sessionId:) NSString *jcev2_p_0_r_sessionId; // @synthesize jcev2_p_0_r_sessionId;
- (void).cxx_destruct;
- (id)init;

@end

