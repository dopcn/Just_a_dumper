//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RefreshViewController.h"

#import "ScoreExchangeCellDelegate-Protocol.h"
#import "WCCBannerViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, RegistrationLotteryViewController, UILabel, UIView, WCCBannerView;

@interface ScoreExchangeViewController : RefreshViewController <WCCBannerViewDelegate, ScoreExchangeCellDelegate>
{
    NSDictionary *dictAward;
    NSMutableArray *muArrayData;
    RegistrationLotteryViewController *m_VCRegistrationLotteryViewController;
    UIView *m_tableViewHeader;
    UIView *m_viewHeader;
    WCCBannerView *_wccBannerView;
    UILabel *_labelMessage;
}

@property(retain, nonatomic) UILabel *labelMessage; // @synthesize labelMessage=_labelMessage;
@property(retain, nonatomic) WCCBannerView *wccBannerView; // @synthesize wccBannerView=_wccBannerView;
- (void).cxx_destruct;
- (void)getScoreAction:(id)arg1;
- (void)productTouched:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)bannerView:(id)arg1 clickedWithBannerModel:(id)arg2;
- (void)bannerView:(id)arg1 clickedWithID:(id)arg2 Title:(id)arg3 URL:(id)arg4 andMode:(long long)arg5;
- (void)bannerView:(id)arg1 showBannerInContainer:(_Bool)arg2;
- (void)updateTableHeaderViewWithAdvs:(id)arg1;
- (void)loadMoreData;
- (void)configExchange;
- (void)configTableViewHeader;
- (void)showLabel;
- (void)showViewHeader;
- (void)onGainPoint;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

