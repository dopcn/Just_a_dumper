//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray;

@interface MttCartoonComicGetPostHotCommentReq : JceObjectV2
{
    _Bool jcev2_p_3_o_bNeedNewComment;
    int jcev2_p_1_r_iReqCount;
    NSArray *jcev2_p_0_r_vPostId__b0x9i_VONSString;
    long long jcev2_p_2_o_eBusinessId;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=bNeedNewComment, setter=setBNeedNewComment:) _Bool jcev2_p_3_o_bNeedNewComment; // @synthesize jcev2_p_3_o_bNeedNewComment;
@property(nonatomic, getter=eBusinessId, setter=setEBusinessId:) long long jcev2_p_2_o_eBusinessId; // @synthesize jcev2_p_2_o_eBusinessId;
@property(nonatomic, getter=iReqCount, setter=setIReqCount:) int jcev2_p_1_r_iReqCount; // @synthesize jcev2_p_1_r_iReqCount;
@property(retain, nonatomic, getter=vPostId, setter=setVPostId:) NSArray *jcev2_p_0_r_vPostId__b0x9i_VONSString; // @synthesize jcev2_p_0_r_vPostId__b0x9i_VONSString;
- (void).cxx_destruct;
- (id)init;

@end

