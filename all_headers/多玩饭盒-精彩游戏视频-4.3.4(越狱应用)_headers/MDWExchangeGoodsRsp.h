//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MDWExchangeGoodsRsp : JceObjectV2
{
    int jcev2_p_0_o_iRetCode;
    int jcev2_p_2_o_iAvailableTicket;
    NSString *jcev2_p_1_o_sMsg;
}

+ (id)jceType;
@property(nonatomic, getter=jce_iAvailableTicket, setter=setJce_iAvailableTicket:) int jcev2_p_2_o_iAvailableTicket; // @synthesize jcev2_p_2_o_iAvailableTicket;
@property(retain, nonatomic, getter=jce_sMsg, setter=setJce_sMsg:) NSString *jcev2_p_1_o_sMsg; // @synthesize jcev2_p_1_o_sMsg;
@property(nonatomic, getter=jce_iRetCode, setter=setJce_iRetCode:) int jcev2_p_0_o_iRetCode; // @synthesize jcev2_p_0_o_iRetCode;
- (void).cxx_destruct;
- (id)init;

@end

