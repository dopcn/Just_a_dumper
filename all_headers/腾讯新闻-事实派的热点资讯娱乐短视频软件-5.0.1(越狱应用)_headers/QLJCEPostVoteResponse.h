//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEVoteData;

@interface QLJCEPostVoteResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    QLJCEVoteData *jcev2_p_1_o_voteData;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_voteData, setter=setJce_voteData:) QLJCEVoteData *jcev2_p_1_o_voteData; // @synthesize jcev2_p_1_o_voteData;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void)dealloc;
- (id)init;

@end

