//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBMyEBuyCommonVCtrler.h"

@class NSString, SNMBShareholderInfoRequest, UIButton, UIImageView, UILabel, UIView;

@interface SNMBAuthStatuViewController : SNMBMyEBuyCommonVCtrler
{
    NSString *_authStatu;
    UIView *_authStatuView;
    UILabel *_authStatuLabel;
    UIImageView *_iconImageView;
    UILabel *_authLabel;
    UILabel *_authSecondLabel;
    UILabel *_authInfoLabel;
    UIButton *_jumpButton;
    UIImageView *_statuImageView;
    SNMBShareholderInfoRequest *_shareholderInfoRequest;
}

@property(retain, nonatomic) SNMBShareholderInfoRequest *shareholderInfoRequest; // @synthesize shareholderInfoRequest=_shareholderInfoRequest;
@property(retain, nonatomic) UIImageView *statuImageView; // @synthesize statuImageView=_statuImageView;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UILabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) UILabel *authSecondLabel; // @synthesize authSecondLabel=_authSecondLabel;
@property(retain, nonatomic) UILabel *authLabel; // @synthesize authLabel=_authLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *authStatuLabel; // @synthesize authStatuLabel=_authStatuLabel;
@property(retain, nonatomic) UIView *authStatuView; // @synthesize authStatuView=_authStatuView;
@property(retain, nonatomic) NSString *authStatu; // @synthesize authStatu=_authStatu;
- (void).cxx_destruct;
- (void)jumpButtonClick:(id)arg1;
- (void)onBack:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

