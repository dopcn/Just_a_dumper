//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface SNBMyTradeProfitView : UIView
{
    _Bool _isProfitCenterLayout;
    CDUnknownBlockType _didClickTipsButton;
    UILabel *_assetTitleLabel;
    UILabel *_assetLabel;
    UILabel *_profitTitleLabel;
    UILabel *_profitLabel;
    UIButton *_balanceTipsButton;
}

@property(retain, nonatomic) UIButton *balanceTipsButton; // @synthesize balanceTipsButton=_balanceTipsButton;
@property(retain, nonatomic) UILabel *profitLabel; // @synthesize profitLabel=_profitLabel;
@property(retain, nonatomic) UILabel *profitTitleLabel; // @synthesize profitTitleLabel=_profitTitleLabel;
@property(retain, nonatomic) UILabel *assetLabel; // @synthesize assetLabel=_assetLabel;
@property(retain, nonatomic) UILabel *assetTitleLabel; // @synthesize assetTitleLabel=_assetTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickTipsButton; // @synthesize didClickTipsButton=_didClickTipsButton;
@property(nonatomic) _Bool isProfitCenterLayout; // @synthesize isProfitCenterLayout=_isProfitCenterLayout;
- (void).cxx_destruct;
- (void)_snb_configureAction;
- (void)updateConstraints;
- (void)_snb_configureSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

