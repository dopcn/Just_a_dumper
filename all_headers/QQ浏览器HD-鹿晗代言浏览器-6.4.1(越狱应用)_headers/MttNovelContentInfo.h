//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttAnchor, NSString;

@interface MttNovelContentInfo : JceObjectV2
{
    NSString *jcev2_p_0_r_strBookId;
    MttAnchor *jcev2_p_1_r_stAnchor;
    NSString *jcev2_p_2_r_strSerialUrl;
    NSString *jcev2_p_4_r_strSerialContent;
    NSString *jcev2_p_5_r_strContentUniqID;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strContentUniqID, setter=setJce_strContentUniqID:) NSString *jcev2_p_5_r_strContentUniqID; // @synthesize jcev2_p_5_r_strContentUniqID;
@property(retain, nonatomic, getter=jce_strSerialContent, setter=setJce_strSerialContent:) NSString *jcev2_p_4_r_strSerialContent; // @synthesize jcev2_p_4_r_strSerialContent;
@property(retain, nonatomic, getter=jce_strSerialUrl, setter=setJce_strSerialUrl:) NSString *jcev2_p_2_r_strSerialUrl; // @synthesize jcev2_p_2_r_strSerialUrl;
@property(retain, nonatomic, getter=jce_stAnchor, setter=setJce_stAnchor:) MttAnchor *jcev2_p_1_r_stAnchor; // @synthesize jcev2_p_1_r_stAnchor;
@property(retain, nonatomic, getter=jce_strBookId, setter=setJce_strBookId:) NSString *jcev2_p_0_r_strBookId; // @synthesize jcev2_p_0_r_strBookId;
- (void).cxx_destruct;
- (id)init;

@end

