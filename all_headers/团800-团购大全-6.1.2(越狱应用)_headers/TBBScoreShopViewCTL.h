//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBTableViewCTL.h"

#import "TBBWirelessServiceDelegate-Protocol.h"

@class TBBScoreLotterActivityVo, TBBWirelessService, TBScoreApi, UIButton, UILabel;

@interface TBBScoreShopViewCTL : TBBTableViewCTL <TBBWirelessServiceDelegate>
{
    BOOL _isExchageMode;
    TBBWirelessService *_wirelessService;
    TBScoreApi *_scoreService;
    TBBScoreLotterActivityVo *_cachedActivityVo;
    UIButton *_exchangeModeBtn;
    UIButton *_rewardModeBtn;
    UILabel *_scoreLabel;
    int _pagTag;
}

@property(nonatomic) int pagTag; // @synthesize pagTag=_pagTag;
@property(nonatomic) __weak UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) __weak UIButton *rewardModeBtn; // @synthesize rewardModeBtn=_rewardModeBtn;
@property(nonatomic) __weak UIButton *exchangeModeBtn; // @synthesize exchangeModeBtn=_exchangeModeBtn;
@property(retain, nonatomic) TBBScoreLotterActivityVo *cachedActivityVo; // @synthesize cachedActivityVo=_cachedActivityVo;
@property BOOL isExchageMode; // @synthesize isExchageMode=_isExchageMode;
@property(retain, nonatomic) TBScoreApi *scoreService; // @synthesize scoreService=_scoreService;
@property(retain) TBBWirelessService *wirelessService; // @synthesize wirelessService=_wirelessService;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)getScoreLotteryActivityFinish:(id)arg1;
- (void)getPointMallProductFinish:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)rewardModeClicked:(id)arg1;
- (void)exchangeModeClicked:(id)arg1;
- (void)loadItems;
- (void)getScoreAccountFinish:(id)arg1;
- (void)getScoreAccount;
- (void)cancelLogin;
- (void)forwardToAfterLogin;
- (void)resetPagTag;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

