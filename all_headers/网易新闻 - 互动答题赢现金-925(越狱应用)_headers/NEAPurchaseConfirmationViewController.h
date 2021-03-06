//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NEABaseViewController.h"

@class LOTAnimationView, NEAColumnInfoModel, NEAPaidColumnImageView, UIButton, UIImageView, UILabel, UIViewController;

@interface NEAPurchaseConfirmationViewController : NEABaseViewController
{
    NEAPaidColumnImageView *_columnImageView;
    UILabel *_columnTitleLabel;
    UILabel *_priceLabel;
    UIImageView *_priceImageView;
    UILabel *_balancePromptLabel;
    UIButton *_buyButton;
    UILabel *_balanceLabel;
    UILabel *_explainLabel;
    NEAColumnInfoModel *_columnInfoModel;
    UIViewController *_fromViewController;
    LOTAnimationView *_animView;
}

+ (void)presentPurchaseConfirmationByController:(id)arg1 columnInfoModel:(id)arg2;
@property(retain, nonatomic) LOTAnimationView *animView; // @synthesize animView=_animView;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) NEAColumnInfoModel *columnInfoModel; // @synthesize columnInfoModel=_columnInfoModel;
@property(retain, nonatomic) UILabel *explainLabel; // @synthesize explainLabel=_explainLabel;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *balancePromptLabel; // @synthesize balancePromptLabel=_balancePromptLabel;
@property(retain, nonatomic) UIImageView *priceImageView; // @synthesize priceImageView=_priceImageView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *columnTitleLabel; // @synthesize columnTitleLabel=_columnTitleLabel;
@property(retain, nonatomic) NEAPaidColumnImageView *columnImageView; // @synthesize columnImageView=_columnImageView;
- (void).cxx_destruct;
- (void)nea_applyThemeProperty;
- (void)backAction;
- (void)setupSubviews;
- (void)updateUIForBalance:(long long)arg1;
- (void)onBuyAction:(id)arg1;
- (void)netForBalance;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithColumnInfoModel:(id)arg1 fromViewController:(id)arg2;

@end

