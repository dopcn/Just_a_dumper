//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QNPPayAgreementTipItem;

@interface QNPPayAgreementTipInfo : NSObject
{
    QNPPayAgreementTipItem *_bindCardTip;
    QNPPayAgreementTipItem *_fastPaymentTip;
}

@property(retain, nonatomic) QNPPayAgreementTipItem *fastPaymentTip; // @synthesize fastPaymentTip=_fastPaymentTip;
@property(retain, nonatomic) QNPPayAgreementTipItem *bindCardTip; // @synthesize bindCardTip=_bindCardTip;
- (void).cxx_destruct;

@end

