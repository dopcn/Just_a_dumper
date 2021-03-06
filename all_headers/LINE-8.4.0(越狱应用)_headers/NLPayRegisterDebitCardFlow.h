//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayChargeFlow.h"

#import "NLPayRegisterCreditCardViewControllerDelegate-Protocol.h"
#import "NLPayRegisterDebitCardGuideViewControllerDelegate-Protocol.h"

@class NSString;

@interface NLPayRegisterDebitCardFlow : NLPayChargeFlow <NLPayRegisterDebitCardGuideViewControllerDelegate, NLPayRegisterCreditCardViewControllerDelegate>
{
    _Bool _willMoveToRootViewControllerWhenFinished;
}

@property(nonatomic) _Bool willMoveToRootViewControllerWhenFinished; // @synthesize willMoveToRootViewControllerWhenFinished=_willMoveToRootViewControllerWhenFinished;
- (void)registerCreditCardController:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 cardNumber:(id)arg4 expirationMonth:(id)arg5 expirationYear:(id)arg6 securityCode:(id)arg7 cardName:(id)arg8 isPrimary:(_Bool)arg9;
- (void)registerDebitCardGuideViewControllerDidTapNextButton:(id)arg1;
- (void)handleTokenError:(id)arg1;
- (void)handleOperationCallbackEvent:(id)arg1;
- (void)pushCreditCardInputViewController;
- (void)pushRegisterDebitCardGuideViewController;
- (void)didFinish;
- (void)start:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

