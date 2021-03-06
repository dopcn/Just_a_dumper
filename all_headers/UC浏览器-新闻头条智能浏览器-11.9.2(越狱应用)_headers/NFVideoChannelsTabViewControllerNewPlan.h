//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFVideoChannelsTabViewController.h"

#import "NFVideoChannelsObserver-Protocol.h"

@class NSString, UILabel;

@interface NFVideoChannelsTabViewControllerNewPlan : NFVideoChannelsTabViewController <NFVideoChannelsObserver>
{
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didThemeChange;
- (void)onBackButtonClick:(id)arg1;
- (id)makeLeftButtonWithFrame:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (struct NSArray *)filterChannel:(struct NSArray *)arg1;
- (void)nfVideoChannel:(id)arg1 didChannelsUpdate:(struct NSArray *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

