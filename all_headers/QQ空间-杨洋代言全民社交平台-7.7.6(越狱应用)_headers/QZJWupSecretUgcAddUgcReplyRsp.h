//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QZJWupSecretUgcUgcReply;

@interface QZJWupSecretUgcAddUgcReplyRsp : JceObjectV2
{
    int _jcev2_p_2_o_feedsattr;
    QZJWupSecretUgcUgcReply *_jcev2_p_0_o_reply;
    NSString *_jcev2_p_1_o_err_msg;
}

+ (id)jceType;
@property(nonatomic, getter=jce_feedsattr, setter=setJce_feedsattr:) int jcev2_p_2_o_feedsattr; // @synthesize jcev2_p_2_o_feedsattr=_jcev2_p_2_o_feedsattr;
@property(retain, nonatomic, getter=jce_err_msg, setter=setJce_err_msg:) NSString *jcev2_p_1_o_err_msg; // @synthesize jcev2_p_1_o_err_msg=_jcev2_p_1_o_err_msg;
@property(retain, nonatomic, getter=jce_reply, setter=setJce_reply:) QZJWupSecretUgcUgcReply *jcev2_p_0_o_reply; // @synthesize jcev2_p_0_o_reply=_jcev2_p_0_o_reply;
- (void).cxx_destruct;
- (id)init;

@end

