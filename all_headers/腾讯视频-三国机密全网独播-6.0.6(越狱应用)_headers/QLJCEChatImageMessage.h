//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEChatImageMessage : JceObjectV2
{
    int jcev2_p_1_r_width;
    int jcev2_p_2_r_height;
    NSString *jcev2_p_0_r_picUrl;
    NSString *jcev2_p_3_o_thumbUrl;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_thumbUrl, setter=setJce_thumbUrl:) NSString *jcev2_p_3_o_thumbUrl; // @synthesize jcev2_p_3_o_thumbUrl;
@property(nonatomic, getter=jce_height, setter=setJce_height:) int jcev2_p_2_r_height; // @synthesize jcev2_p_2_r_height;
@property(nonatomic, getter=jce_width, setter=setJce_width:) int jcev2_p_1_r_width; // @synthesize jcev2_p_1_r_width;
@property(retain, nonatomic, getter=jce_picUrl, setter=setJce_picUrl:) NSString *jcev2_p_0_r_picUrl; // @synthesize jcev2_p_0_r_picUrl;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSString *jhj_localPath; // @dynamic jhj_localPath;

@end

