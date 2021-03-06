//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduWalletScanBaseViewController.h"

#import "BaiduWalletBankCardDetectionPopViewDelegate-Protocol.h"
#import "BaiduWallet_BankDetectionControllerDelegate-Protocol.h"

@class BaiduWalletBankCardDetectionCenterView, BankcardAdaptor, NSString, UIImage;
@protocol BaiduWallet_BankDetectionControllerDelegate;

@interface BaiduWallet_BankDetectionController : BaiduWalletScanBaseViewController <BaiduWalletBankCardDetectionPopViewDelegate, BaiduWallet_BankDetectionControllerDelegate>
{
    id <BaiduWallet_BankDetectionControllerDelegate> _delegate;
    BankcardAdaptor *_bankcardObj;
    NSString *_bankcardText;
    UIImage *_bankcardImage;
    BaiduWalletBankCardDetectionCenterView *_centerView;
}

@property(retain, nonatomic) BaiduWalletBankCardDetectionCenterView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIImage *bankcardImage; // @synthesize bankcardImage=_bankcardImage;
@property(retain, nonatomic) NSString *bankcardText; // @synthesize bankcardText=_bankcardText;
@property(retain) BankcardAdaptor *bankcardObj; // @synthesize bankcardObj=_bankcardObj;
@property(nonatomic) __weak id <BaiduWallet_BankDetectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getTitleText;
- (struct CGRect)getClipedFrame;
- (void)inputButtonClicked:(id)arg1;
- (void)addMaskViews;
- (void)initUI;
- (void)exitBankDetectionVC:(id)arg1;
- (void)goBack:(id)arg1;
- (void)confirmPopView:(id)arg1;
- (void)cancelPopView;
- (void)clearValues;
- (void)identifyInfoFromImage:(id)arg1;
- (_Bool)abandonFrame;
- (void)releaseThirdPartyLib;
- (void)setUpThirdPartyLib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

