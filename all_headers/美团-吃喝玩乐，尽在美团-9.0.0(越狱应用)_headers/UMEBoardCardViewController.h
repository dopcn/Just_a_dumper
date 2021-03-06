//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMEBaseViewController.h"

#import "LoadingViewDelegate-Protocol.h"
#import "PKAddPassesViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, UmeService;

@interface UMEBoardCardViewController : UMEBaseViewController <UIAlertViewDelegate, LoadingViewDelegate, PKAddPassesViewControllerDelegate>
{
    NSDictionary *_journeyData;
    NSString *_airCorp;
    UILabel *_startCity;
    UILabel *_endCity;
    UILabel *_startTime;
    UILabel *_flyNo;
    UILabel *_gate;
    UILabel *_seat;
    UIImageView *_code;
    UILabel *_airlineLabel;
    UILabel *_name;
    UILabel *_number;
    UILabel *_airlineName;
    UIImageView *_airlineLogo;
    UILabel *_promptLabel;
    UILabel *_flightDateLabel;
    UILabel *_seatClassLabel;
    UILabel *_ffpLabel;
    UmeService *_service;
    UIButton *_imageBtn;
    UIScrollView *_contentView;
    UIView *_bottomBackgroundView;
    NSString *_tktNo;
    NSString *_coupon;
}

@property(retain, nonatomic) NSDictionary *journeyData; // @synthesize journeyData=_journeyData;
@property(retain, nonatomic) NSString *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) NSString *tktNo; // @synthesize tktNo=_tktNo;
- (void).cxx_destruct;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidStartLoad:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)qrImageName:(id)arg1;
- (void)requestBoardingPass;
- (void)updateData;
- (id)ensureString:(id)arg1 nilString:(id)arg2;
- (void)initUI;
- (void)addTitleView;
- (void)addJourneyView;
- (void)addFlightDetailsView;
- (void)addPassButton;
- (void)addCodeView;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)boardcardDataSucceed:(id)arg1;
- (void)getPassSuccess:(id)arg1;
- (void)getPass;
- (void)showGuide;
- (void)buttonTouch;
- (void)backButtonClicked;
- (void)closeClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

