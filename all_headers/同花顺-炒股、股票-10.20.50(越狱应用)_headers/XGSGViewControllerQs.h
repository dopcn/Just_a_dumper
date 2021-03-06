//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXTabbarController.h"

#import "HXBaseViewControllerProtocol-Protocol.h"

@class NSString, UIImageView;

@interface XGSGViewControllerQs : HXTabbarController <HXBaseViewControllerProtocol>
{
    UIImageView *_tipImageView;
    UIImageView *_cxTipImageView;
    long long _selectedTabIndex;
}

@property(nonatomic) long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(retain, nonatomic) UIImageView *cxTipImageView; // @synthesize cxTipImageView=_cxTipImageView;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
- (void).cxx_destruct;
- (void)showSGChaXunTipView:(_Bool)arg1;
- (void)segmentView:(id)arg1 selectedAtIndex:(long long)arg2;
- (id)segmentView:(id)arg1 titleViewAtIndex:(long long)arg2;
- (void)shenGouHelpBtnClicked;
- (id)navigationRightBtnItem;
- (id)navigationBarTitleView;
- (void)didReceiveMemoryWarning;
- (id)getViewControllers;
- (void)refreshViewController;
- (void)changeChaXunNeedRefresh;
- (_Bool)checkIsShenGouIng;
- (void)backAction;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

