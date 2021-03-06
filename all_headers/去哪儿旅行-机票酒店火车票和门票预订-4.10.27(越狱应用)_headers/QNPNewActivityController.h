//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QNPActivityTip, QNPBankCardLJ, QNPBusinessLineLJ, QNPLargeAmountPay, QNPLjTypeOneActivity, QNPLjTypeTwoActivity, QNPNaquhuaActivity, QNPRedPacketAntiCheat;

@interface QNPNewActivityController : NSObject
{
    QNPLjTypeOneActivity *_ljTypeOne;
    QNPLjTypeTwoActivity *_ljTypeTwo;
    QNPRedPacketAntiCheat *_redPacketAntiCheat;
    QNPBankCardLJ *_channelBankCardLJ;
    QNPBusinessLineLJ *_businessLj;
    QNPLargeAmountPay *_largeAmountPay;
    QNPNaquhuaActivity *_naquhuaActivity;
    QNPActivityTip *_activity;
}

@property(retain, nonatomic) QNPActivityTip *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) QNPNaquhuaActivity *naquhuaActivity; // @synthesize naquhuaActivity=_naquhuaActivity;
@property(retain, nonatomic) QNPLargeAmountPay *largeAmountPay; // @synthesize largeAmountPay=_largeAmountPay;
@property(retain, nonatomic) QNPBusinessLineLJ *businessLj; // @synthesize businessLj=_businessLj;
@property(retain, nonatomic) QNPBankCardLJ *channelBankCardLJ; // @synthesize channelBankCardLJ=_channelBankCardLJ;
@property(retain, nonatomic) QNPRedPacketAntiCheat *redPacketAntiCheat; // @synthesize redPacketAntiCheat=_redPacketAntiCheat;
@property(retain, nonatomic) QNPLjTypeTwoActivity *ljTypeTwo; // @synthesize ljTypeTwo=_ljTypeTwo;
@property(retain, nonatomic) QNPLjTypeOneActivity *ljTypeOne; // @synthesize ljTypeOne=_ljTypeOne;
- (void).cxx_destruct;
- (void)setFirstDefault;
- (void)parseActivityWithPayInfo:(id)arg1;

@end

