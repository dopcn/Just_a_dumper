//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDWalletCardElementsViewModel.h"

@class BDWalletCardInfo, NSString;

@interface BDWalletCardCompletePayViewModel : BDWalletCardElementsViewModel
{
    NSString *_rediret_sp_succpage_remain_time;
    BDWalletCardInfo *_completePayCardInfo;
}

@property(retain, nonatomic) BDWalletCardInfo *completePayCardInfo; // @synthesize completePayCardInfo=_completePayCardInfo;
@property(copy, nonatomic) NSString *rediret_sp_succpage_remain_time; // @synthesize rediret_sp_succpage_remain_time=_rediret_sp_succpage_remain_time;
- (void).cxx_destruct;
- (void)unionCardElements:(id)arg1;
- (_Bool)needUnionCardElementsAfterCardInfo;
- (id)formBDWalletPayInfo;
- (_Bool)shouldDirectCompletePayIgnoreSMS;
- (void)reloadDataByPostOverdueInfo:(id)arg1;
- (void)doDirectCompletePayWithCardIfoName:(id)arg1 identify:(id)arg2 phone_number:(id)arg3 cvv2:(id)arg4 valid_date:(id)arg5 withFinishBlock:(CDUnknownBlockType)arg6;

@end

