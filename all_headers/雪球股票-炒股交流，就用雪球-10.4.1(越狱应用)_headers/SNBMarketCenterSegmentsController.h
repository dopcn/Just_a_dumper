//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBSegmentsController.h"

#import "SNBTabBarSelectedVCRefreshProtocol-Protocol.h"

@class NSArray, NSString, UIImageView, UIView;

@interface SNBMarketCenterSegmentsController : SNBSegmentsController <SNBTabBarSelectedVCRefreshProtocol>
{
    UIView *_titleView;
    UIImageView *_segmentBgImageView;
    NSArray *_segmentViewControllers;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *segmentViewControllers; // @synthesize segmentViewControllers=_segmentViewControllers;
@property(retain, nonatomic) UIImageView *segmentBgImageView; // @synthesize segmentBgImageView=_segmentBgImageView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)tabBarTapped;
- (void)_snb_configureNavButtons;
- (void)_snb_updateUISegmentedControl;
- (void)_snb_configureSegmentControl;
- (void)setSelectedViewControllerIndex:(long long)arg1;
- (void)updateTheme:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

