//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface MttAssistantGuideWordType : JceObjectV2
{
    NSString *jcev2_p_0_r_sTitle;
    NSString *jcev2_p_1_r_sIconUrl;
    NSString *jcev2_p_2_r_iLocalFlag;
    NSArray *jcev2_p_3_r_vecWord__b0x9i_VOMttAssistantGuideWord;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=vecWord, setter=setVecWord:) NSArray *jcev2_p_3_r_vecWord__b0x9i_VOMttAssistantGuideWord; // @synthesize jcev2_p_3_r_vecWord__b0x9i_VOMttAssistantGuideWord;
@property(retain, nonatomic, getter=iLocalFlag, setter=setILocalFlag:) NSString *jcev2_p_2_r_iLocalFlag; // @synthesize jcev2_p_2_r_iLocalFlag;
@property(retain, nonatomic, getter=sIconUrl, setter=setSIconUrl:) NSString *jcev2_p_1_r_sIconUrl; // @synthesize jcev2_p_1_r_sIconUrl;
@property(retain, nonatomic, getter=sTitle, setter=setSTitle:) NSString *jcev2_p_0_r_sTitle; // @synthesize jcev2_p_0_r_sTitle;
- (void).cxx_destruct;
- (id)init;

@end

