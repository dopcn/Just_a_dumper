//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNPPaymentBottomUserTipView.h"

@class QNPNaquhuaInactiveUserAgreementView, QNPPaymentMethodNaquhuaUserInputViewData;

@interface QNPPaymentMethodNaquhuaBottomUserTipView : QNPPaymentBottomUserTipView
{
    QNPPaymentMethodNaquhuaUserInputViewData *_viewData;
    QNPNaquhuaInactiveUserAgreementView *_agreementView;
}

@property(retain, nonatomic) QNPNaquhuaInactiveUserAgreementView *agreementView; // @synthesize agreementView=_agreementView;
@property(retain, nonatomic) QNPPaymentMethodNaquhuaUserInputViewData *viewData; // @synthesize viewData=_viewData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)mannualSetViewData:(id)arg1;
- (void)initUI;

@end

