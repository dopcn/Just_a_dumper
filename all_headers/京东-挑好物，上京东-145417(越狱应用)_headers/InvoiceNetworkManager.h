//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSArray, NewInVoiceModel;

@interface InvoiceNetworkManager : NSObject
{
    _Bool _isSolidCard;
    _Bool _isPresale;
    JDStoreNetwork *_invoiceDao;
    JDStoreNetwork *_useRuleNetwork;
    NSArray *_invoiceNotice;
    NewInVoiceModel *_invoiceModel;
}

@property(retain, nonatomic) NewInVoiceModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) NSArray *invoiceNotice; // @synthesize invoiceNotice=_invoiceNotice;
@property(retain, nonatomic) JDStoreNetwork *useRuleNetwork; // @synthesize useRuleNetwork=_useRuleNetwork;
@property(retain, nonatomic) JDStoreNetwork *invoiceDao; // @synthesize invoiceDao=_invoiceDao;
@property(nonatomic) _Bool isPresale; // @synthesize isPresale=_isPresale;
@property(nonatomic) _Bool isSolidCard; // @synthesize isSolidCard=_isSolidCard;
- (void).cxx_destruct;
- (void)firstSubmitVatWithOrderInfoModel:(id)arg1;
- (void)requestInvoiceInfoWithModel:(id)arg1 didFinish:(CDUnknownBlockType)arg2 didCancel:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

