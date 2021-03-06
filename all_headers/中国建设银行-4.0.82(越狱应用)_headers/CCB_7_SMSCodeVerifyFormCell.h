//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CCBButton, CCBLabel, CCBTextField, NSString, NSTimer;

@interface CCB_7_SMSCodeVerifyFormCell : CCBFormCell
{
    NSString *_smsCode;
    CCBTextField *_smsCodeTextField;
    CCBLabel *_tipsLable;
    CCBButton *_getSMSCodeButton;
    NSTimer *_timer;
    long long _countDown;
    NSString *_buttonTitle;
}

+ (double)cellHeightForFormItem:(id)arg1 contentWidth:(double)arg2;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CCBButton *getSMSCodeButton; // @synthesize getSMSCodeButton=_getSMSCodeButton;
@property(retain, nonatomic) CCBLabel *tipsLable; // @synthesize tipsLable=_tipsLable;
@property(retain, nonatomic) CCBTextField *smsCodeTextField; // @synthesize smsCodeTextField=_smsCodeTextField;
@property(readonly, copy, nonatomic) NSString *smsCode; // @synthesize smsCode=_smsCode;
- (void).cxx_destruct;
- (void)timerFireMethod;
- (void)didClickGetSMSCodeButton;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)setFormItem:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

