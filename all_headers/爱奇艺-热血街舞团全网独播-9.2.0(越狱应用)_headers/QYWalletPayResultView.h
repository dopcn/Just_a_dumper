//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol QYWalletPayResultViewProtocol;

@interface QYWalletPayResultView : UIView
{
    id <QYWalletPayResultViewProtocol> _delegate;
    UIImageView *_resultIconImageView;
    UILabel *_resultTextLabel;
    UILabel *_timeLimitTipLabel;
    UILabel *_vendorNameTipLabel;
    UILabel *_vendorNameLabel;
    UILabel *_vendorPriceTipLabel;
    UILabel *_vendorPriceLabel;
    UIButton *_doneButton;
    UIView *_vendorBackgroundView;
}

@property(retain, nonatomic) UIView *vendorBackgroundView; // @synthesize vendorBackgroundView=_vendorBackgroundView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *vendorPriceLabel; // @synthesize vendorPriceLabel=_vendorPriceLabel;
@property(retain, nonatomic) UILabel *vendorPriceTipLabel; // @synthesize vendorPriceTipLabel=_vendorPriceTipLabel;
@property(retain, nonatomic) UILabel *vendorNameLabel; // @synthesize vendorNameLabel=_vendorNameLabel;
@property(retain, nonatomic) UILabel *vendorNameTipLabel; // @synthesize vendorNameTipLabel=_vendorNameTipLabel;
@property(retain, nonatomic) UILabel *timeLimitTipLabel; // @synthesize timeLimitTipLabel=_timeLimitTipLabel;
@property(retain, nonatomic) UILabel *resultTextLabel; // @synthesize resultTextLabel=_resultTextLabel;
@property(retain, nonatomic) UIImageView *resultIconImageView; // @synthesize resultIconImageView=_resultIconImageView;
@property(nonatomic) __weak id <QYWalletPayResultViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)doneButtonClick:(id)arg1;
- (void)drawBorder;
- (id)initWithFrame:(struct CGRect)arg1 sceneType:(long long)arg2 passData:(id)arg3;
- (void)dealloc;

@end

