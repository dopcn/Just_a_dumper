//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZCMPublishBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField, UIView, ZCMPublishAddressDataModel;

@interface ZCMPublishAddressCompanyViewController : ZCMPublishBaseViewController <UITextFieldDelegate>
{
    CDUnknownBlockType _block;
    UILabel *_descriptionLabel;
    UIView *_descriptionView;
    UILabel *_companyAddressTitleLabel;
    UITextField *_companyAddressTextField;
    UIButton *_gotoServiceButton;
    UIView *_containerView;
    ZCMPublishAddressDataModel *_addrModel;
}

@property(retain, nonatomic) ZCMPublishAddressDataModel *addrModel; // @synthesize addrModel=_addrModel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *gotoServiceButton; // @synthesize gotoServiceButton=_gotoServiceButton;
@property(retain, nonatomic) UITextField *companyAddressTextField; // @synthesize companyAddressTextField=_companyAddressTextField;
@property(retain, nonatomic) UILabel *companyAddressTitleLabel; // @synthesize companyAddressTitleLabel=_companyAddressTitleLabel;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)showFailMessage:(id)arg1;
- (void)setup;
- (void)gotoServiceClickAddress;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)requestSaveAddress;
- (void)finishWorkPlaceWithDetailModel:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

