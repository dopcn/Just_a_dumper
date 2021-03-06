//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MttMidasExternalControllerDelegate-Protocol.h"

@class MttMidasExternalController, NSString;
@protocol MttRechargeManagerDelegate;

@interface MttRechargeViewControllerManager : NSObject <MttMidasExternalControllerDelegate>
{
    long long _customTag;
    id <MttRechargeManagerDelegate> _rechargeDelegate;
    MttMidasExternalController *_midasExternalController;
}

+ (void)registeLiveMidas;
+ (void)registeCartoonMidas;
+ (void)registeNovelMidas;
+ (void)registerMidasPay:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) MttMidasExternalController *midasExternalController; // @synthesize midasExternalController=_midasExternalController;
@property(nonatomic) __weak id <MttRechargeManagerDelegate> rechargeDelegate; // @synthesize rechargeDelegate=_rechargeDelegate;
@property(nonatomic) long long customTag; // @synthesize customTag=_customTag;
- (void).cxx_destruct;
- (long long)userNeedChargeValue:(id)arg1;
- (void)midasChargeFailed:(id)arg1;
- (void)midasChargeCanceled:(id)arg1;
- (void)midasChargeSuccessed:(id)arg1;
- (void)presentMidasChargeController:(id)arg1;
- (void)showRechargeViewPopView:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

