//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class CommPushCommonMessage, NSString;

@interface CommPushServerMessage : JceObjectV2
{
    _Bool jcev2_p_2_o_bNeedAckNotify;
    _Bool jcev2_p_6_o_bResend;
    _Bool jcev2_p_7_o_bIsOfflinePush;
    int jcev2_p_4_o_iPriority;
    int jcev2_p_5_o_iLoginVerison;
    CommPushCommonMessage *jcev2_p_0_o_tPushCommonMessage;
    NSString *jcev2_p_1_o_sMessage;
    long long jcev2_p_3_o_lRecvYyuid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_bIsOfflinePush, setter=setJce_bIsOfflinePush:) _Bool jcev2_p_7_o_bIsOfflinePush; // @synthesize jcev2_p_7_o_bIsOfflinePush;
@property(nonatomic, getter=jce_bResend, setter=setJce_bResend:) _Bool jcev2_p_6_o_bResend; // @synthesize jcev2_p_6_o_bResend;
@property(nonatomic, getter=jce_iLoginVerison, setter=setJce_iLoginVerison:) int jcev2_p_5_o_iLoginVerison; // @synthesize jcev2_p_5_o_iLoginVerison;
@property(nonatomic, getter=jce_iPriority, setter=setJce_iPriority:) int jcev2_p_4_o_iPriority; // @synthesize jcev2_p_4_o_iPriority;
@property(nonatomic, getter=jce_lRecvYyuid, setter=setJce_lRecvYyuid:) long long jcev2_p_3_o_lRecvYyuid; // @synthesize jcev2_p_3_o_lRecvYyuid;
@property(nonatomic, getter=jce_bNeedAckNotify, setter=setJce_bNeedAckNotify:) _Bool jcev2_p_2_o_bNeedAckNotify; // @synthesize jcev2_p_2_o_bNeedAckNotify;
@property(retain, nonatomic, getter=jce_sMessage, setter=setJce_sMessage:) NSString *jcev2_p_1_o_sMessage; // @synthesize jcev2_p_1_o_sMessage;
@property(retain, nonatomic, getter=jce_tPushCommonMessage, setter=setJce_tPushCommonMessage:) CommPushCommonMessage *jcev2_p_0_o_tPushCommonMessage; // @synthesize jcev2_p_0_o_tPushCommonMessage;
- (void).cxx_destruct;
- (id)init;

@end

