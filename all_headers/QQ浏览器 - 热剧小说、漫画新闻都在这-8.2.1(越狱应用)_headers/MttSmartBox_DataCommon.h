//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttSmartBox_AppData, MttSmartBox_Button, MttSmartBox_PhoneButton, NSArray, NSString;

@interface MttSmartBox_DataCommon : JceObjectV2
{
    int jcev2_p_0_o_iSmartBoxType;
    NSString *jcev2_p_1_o_sTitle;
    NSString *jcev2_p_2_o_sUrl;
    NSString *jcev2_p_3_o_sIconUrl;
    NSString *jcev2_p_4_o_sText1;
    NSString *jcev2_p_5_o_sText2;
    NSString *jcev2_p_6_o_sText3;
    NSString *jcev2_p_7_o_sTextState;
    NSArray *jcev2_p_8_o_labels__b0x9i_VOMttSmartBox_Label;
    MttSmartBox_Button *jcev2_p_9_o_button;
    MttSmartBox_PhoneButton *jcev2_p_10_o_phoneButton;
    MttSmartBox_AppData *jcev2_p_11_o_appData;
    NSString *jcev2_p_12_o_sAppend;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sAppend, setter=setSAppend:) NSString *jcev2_p_12_o_sAppend; // @synthesize jcev2_p_12_o_sAppend;
@property(retain, nonatomic, getter=appData, setter=setAppData:) MttSmartBox_AppData *jcev2_p_11_o_appData; // @synthesize jcev2_p_11_o_appData;
@property(retain, nonatomic, getter=phoneButton, setter=setPhoneButton:) MttSmartBox_PhoneButton *jcev2_p_10_o_phoneButton; // @synthesize jcev2_p_10_o_phoneButton;
@property(retain, nonatomic, getter=button, setter=setButton:) MttSmartBox_Button *jcev2_p_9_o_button; // @synthesize jcev2_p_9_o_button;
@property(retain, nonatomic, getter=labels, setter=setLabels:) NSArray *jcev2_p_8_o_labels__b0x9i_VOMttSmartBox_Label; // @synthesize jcev2_p_8_o_labels__b0x9i_VOMttSmartBox_Label;
@property(retain, nonatomic, getter=sTextState, setter=setSTextState:) NSString *jcev2_p_7_o_sTextState; // @synthesize jcev2_p_7_o_sTextState;
@property(retain, nonatomic, getter=sText3, setter=setSText3:) NSString *jcev2_p_6_o_sText3; // @synthesize jcev2_p_6_o_sText3;
@property(retain, nonatomic, getter=sText2, setter=setSText2:) NSString *jcev2_p_5_o_sText2; // @synthesize jcev2_p_5_o_sText2;
@property(retain, nonatomic, getter=sText1, setter=setSText1:) NSString *jcev2_p_4_o_sText1; // @synthesize jcev2_p_4_o_sText1;
@property(retain, nonatomic, getter=sIconUrl, setter=setSIconUrl:) NSString *jcev2_p_3_o_sIconUrl; // @synthesize jcev2_p_3_o_sIconUrl;
@property(retain, nonatomic, getter=sUrl, setter=setSUrl:) NSString *jcev2_p_2_o_sUrl; // @synthesize jcev2_p_2_o_sUrl;
@property(retain, nonatomic, getter=sTitle, setter=setSTitle:) NSString *jcev2_p_1_o_sTitle; // @synthesize jcev2_p_1_o_sTitle;
@property(nonatomic, getter=iSmartBoxType, setter=setISmartBoxType:) int jcev2_p_0_o_iSmartBoxType; // @synthesize jcev2_p_0_o_iSmartBoxType;
- (void).cxx_destruct;
- (id)init;

@end

