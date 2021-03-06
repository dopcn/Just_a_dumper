//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADBannerViewDelegate-Protocol.h"

@class GADBannerView, NSString, UIButton, UIImageView;

@interface AdmobInterstitialADView : UIView <GADBannerViewDelegate>
{
    _Bool _isReady;
    UIButton *_blurView;
    GADBannerView *_interstitialADView;
    UIImageView *_borderView;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIImageView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) GADBannerView *interstitialADView; // @synthesize interstitialADView=_interstitialADView;
@property(retain, nonatomic) UIButton *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void).cxx_destruct;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)dealloc;
- (id)initForRootViewController:(id)arg1 adUnitID:(id)arg2;
- (void)dismiss;
- (void)present;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

