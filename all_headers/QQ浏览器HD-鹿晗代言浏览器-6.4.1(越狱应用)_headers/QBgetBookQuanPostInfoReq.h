//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QBgetBookQuanPostInfoReq : JceObjectV2
{
    _Bool jcev2_p_3_o_bRetQuanInfo;
    _Bool jcev2_p_4_o_bEnableChapComment;
    NSString *jcev2_p_0_r_strBookId;
    NSArray *jcev2_p_2_o_vecPostId__b0x9i_VONSNumber;
    NSString *jcev2_p_5_o_strCircleId;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strCircleId, setter=setJce_strCircleId:) NSString *jcev2_p_5_o_strCircleId; // @synthesize jcev2_p_5_o_strCircleId;
@property(nonatomic, getter=jce_bEnableChapComment, setter=setJce_bEnableChapComment:) _Bool jcev2_p_4_o_bEnableChapComment; // @synthesize jcev2_p_4_o_bEnableChapComment;
@property(nonatomic, getter=jce_bRetQuanInfo, setter=setJce_bRetQuanInfo:) _Bool jcev2_p_3_o_bRetQuanInfo; // @synthesize jcev2_p_3_o_bRetQuanInfo;
@property(retain, nonatomic, getter=jce_vecPostId, setter=setJce_vecPostId:) NSArray *jcev2_p_2_o_vecPostId__b0x9i_VONSNumber; // @synthesize jcev2_p_2_o_vecPostId__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=jce_strBookId, setter=setJce_strBookId:) NSString *jcev2_p_0_r_strBookId; // @synthesize jcev2_p_0_r_strBookId;
- (void).cxx_destruct;
- (id)init;

@end

