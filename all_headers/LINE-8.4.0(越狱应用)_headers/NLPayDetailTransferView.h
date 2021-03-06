//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayDetailView.h"

@class LinePaymentTransactionInfo, UIView;

@interface NLPayDetailTransferView : NLPayDetailView
{
    LinePaymentTransactionInfo *_transactionInfo;
    UIView *_transferBottomInfoView;
}

@property(retain, nonatomic) UIView *transferBottomInfoView; // @synthesize transferBottomInfoView=_transferBottomInfoView;
@property(nonatomic) LinePaymentTransactionInfo *transactionInfo; // @synthesize transactionInfo=_transactionInfo;
- (void).cxx_destruct;
- (void)layoutBottomView;
- (id)bottomInfoView;
- (id)message;
- (id)moneyAmount;
- (id)messageMetadata;
- (id)profileImageId;
- (id)messageID;
- (id)bottomMessage;
- (id)topMessage;

@end

