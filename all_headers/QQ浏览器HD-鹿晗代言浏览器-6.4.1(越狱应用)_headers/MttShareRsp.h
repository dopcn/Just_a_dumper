//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttShareRsp : JceObjectV2
{
    int jcev2_p_1_o_isShareUrl;
    NSString *jcev2_p_0_o_sUrl;
    NSString *jcev2_p_2_o_sTail;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_sTail, setter=setJce_sTail:) NSString *jcev2_p_2_o_sTail; // @synthesize jcev2_p_2_o_sTail;
@property(nonatomic, getter=jce_isShareUrl, setter=setJce_isShareUrl:) int jcev2_p_1_o_isShareUrl; // @synthesize jcev2_p_1_o_isShareUrl;
@property(retain, nonatomic, getter=jce_sUrl, setter=setJce_sUrl:) NSString *jcev2_p_0_o_sUrl; // @synthesize jcev2_p_0_o_sUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

