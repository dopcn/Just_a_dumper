//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBShareholderAuthenticateCommonCell.h"

@class SNMBEBuyVerifyCodeView, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface SNMBShareholderAuthenticateVerificationCell : SNMBShareholderAuthenticateCommonCell
{
    UITextField *_verifyCodeTextField;
    UILabel *_infoLabel;
    UIView *_verifyCodeView;
    UIButton *_btnRefresh;
    UIImageView *_refreshImageView;
    SNMBEBuyVerifyCodeView *_verifyCodeImageView;
}

@property(retain, nonatomic) SNMBEBuyVerifyCodeView *verifyCodeImageView; // @synthesize verifyCodeImageView=_verifyCodeImageView;
@property(retain, nonatomic) UIImageView *refreshImageView; // @synthesize refreshImageView=_refreshImageView;
@property(retain, nonatomic) UIButton *btnRefresh; // @synthesize btnRefresh=_btnRefresh;
@property(retain, nonatomic) UIView *verifyCodeView; // @synthesize verifyCodeView=_verifyCodeView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UITextField *verifyCodeTextField; // @synthesize verifyCodeTextField=_verifyCodeTextField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)refreshVerifyCode:(id)arg1;
- (void)updateWithData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

