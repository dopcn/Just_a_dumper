//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QNPViewLayoutDataSource-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, QNPNaquhuaItemData, QNPPaymentActivityPriceView, QNPPaymentMethodNaquhuaBottomUserTipView, QNPPaymentMethodUserInputView, QNPPaymentNaquhuaToast, QNPPaymentPriceView, UIScrollView;

@interface QNPInstalmentPickerView : UIView <UIGestureRecognizerDelegate, QNPViewLayoutDataSource>
{
    QNPNaquhuaItemData *_viewData;
    UIView *_backgroundView;
    UIView *_pickerView;
    UIView *_pickerHeaderView;
    UIScrollView *_pickerContentView;
    QNPPaymentMethodUserInputView *_pickerContenrtUserInputView;
    UIView *_pickerContentInstalmentViewSeperateLine;
    QNPPaymentActivityPriceView *_pickerContentActivityPriceView;
    QNPPaymentPriceView *_pickerContentPriceView;
    QNPPaymentMethodNaquhuaBottomUserTipView *_pickerContentBottomUserTipView;
    UIView *_pickerBottomView;
    QNPPaymentNaquhuaToast *_naquhuaToast;
}

@property(retain, nonatomic) QNPPaymentNaquhuaToast *naquhuaToast; // @synthesize naquhuaToast=_naquhuaToast;
@property(retain, nonatomic) UIView *pickerBottomView; // @synthesize pickerBottomView=_pickerBottomView;
@property(retain, nonatomic) QNPPaymentMethodNaquhuaBottomUserTipView *pickerContentBottomUserTipView; // @synthesize pickerContentBottomUserTipView=_pickerContentBottomUserTipView;
@property(retain, nonatomic) QNPPaymentPriceView *pickerContentPriceView; // @synthesize pickerContentPriceView=_pickerContentPriceView;
@property(retain, nonatomic) QNPPaymentActivityPriceView *pickerContentActivityPriceView; // @synthesize pickerContentActivityPriceView=_pickerContentActivityPriceView;
@property(retain, nonatomic) UIView *pickerContentInstalmentViewSeperateLine; // @synthesize pickerContentInstalmentViewSeperateLine=_pickerContentInstalmentViewSeperateLine;
@property(retain, nonatomic) QNPPaymentMethodUserInputView *pickerContenrtUserInputView; // @synthesize pickerContenrtUserInputView=_pickerContenrtUserInputView;
@property(retain, nonatomic) UIScrollView *pickerContentView; // @synthesize pickerContentView=_pickerContentView;
@property(retain, nonatomic) UIView *pickerHeaderView; // @synthesize pickerHeaderView=_pickerHeaderView;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) QNPNaquhuaItemData *viewData; // @synthesize viewData=_viewData;
- (void).cxx_destruct;
- (void)cancel;
- (void)confirm;
- (void)showAnimationSetting;
- (void)hideAnimationSetting;
- (void)popOutAnimationUpBottom;
- (void)popInAnimationBottomUp;
- (void)layoutSubviews;
- (void)mannualSetViewData:(id)arg1;
- (void)initUI;
- (id)initWithViewData:(id)arg1;
- (void)dealloc;
- (void)showInstalmentPickerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

