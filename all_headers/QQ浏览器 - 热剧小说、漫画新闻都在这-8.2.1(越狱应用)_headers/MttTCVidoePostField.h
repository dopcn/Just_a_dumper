//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttTCVideoInfo, NSString;

@interface MttTCVidoePostField : JceObjectV2
{
    NSString *jcev2_p_0_o_title;
    NSString *jcev2_p_1_o_content;
    MttTCVideoInfo *jcev2_p_2_o_videoInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=videoInfo, setter=setVideoInfo:) MttTCVideoInfo *jcev2_p_2_o_videoInfo; // @synthesize jcev2_p_2_o_videoInfo;
@property(retain, nonatomic, getter=content, setter=setContent:) NSString *jcev2_p_1_o_content; // @synthesize jcev2_p_1_o_content;
@property(retain, nonatomic, getter=title, setter=setTitle:) NSString *jcev2_p_0_o_title; // @synthesize jcev2_p_0_o_title;
- (void).cxx_destruct;
- (id)init;

@end

