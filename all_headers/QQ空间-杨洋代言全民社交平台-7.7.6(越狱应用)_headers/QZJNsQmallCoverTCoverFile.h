//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QZJNsQmallCoverTCoverFile : JceObjectV2
{
    int _jcev2_p_0_r_iItemId;
    int _jcev2_p_1_r_iSize;
    int _jcev2_p_5_o_iMetaOrder;
    NSString *_jcev2_p_2_r_strMd5;
    NSString *_jcev2_p_3_r_type;
    NSString *_jcev2_p_4_o_strDimension;
}

+ (id)jceType;
@property(nonatomic, getter=jce_iMetaOrder, setter=setJce_iMetaOrder:) int jcev2_p_5_o_iMetaOrder; // @synthesize jcev2_p_5_o_iMetaOrder=_jcev2_p_5_o_iMetaOrder;
@property(retain, nonatomic, getter=jce_strDimension, setter=setJce_strDimension:) NSString *jcev2_p_4_o_strDimension; // @synthesize jcev2_p_4_o_strDimension=_jcev2_p_4_o_strDimension;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_3_r_type; // @synthesize jcev2_p_3_r_type=_jcev2_p_3_r_type;
@property(retain, nonatomic, getter=jce_strMd5, setter=setJce_strMd5:) NSString *jcev2_p_2_r_strMd5; // @synthesize jcev2_p_2_r_strMd5=_jcev2_p_2_r_strMd5;
@property(nonatomic, getter=jce_iSize, setter=setJce_iSize:) int jcev2_p_1_r_iSize; // @synthesize jcev2_p_1_r_iSize=_jcev2_p_1_r_iSize;
@property(nonatomic, getter=jce_iItemId, setter=setJce_iItemId:) int jcev2_p_0_r_iItemId; // @synthesize jcev2_p_0_r_iItemId=_jcev2_p_0_r_iItemId;
- (void).cxx_destruct;
- (id)init;

@end

