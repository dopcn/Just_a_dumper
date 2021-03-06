//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPViewController.h"

@class QYPPPubModel, QYPPPubStageLinesViewController, QYPPTabBarController;

@interface QYPPPubLinesAndMusicVC : QYPPViewController
{
    CDUnknownBlockType _didSelectEnterMaterialCollection;
    QYPPTabBarController *_tabBarController;
    QYPPPubStageLinesViewController *_linesMaterialVC;
    QYPPPubStageLinesViewController *_musicMaterialVC;
    long long _currentTabType;
    long long _defaultTabType;
    QYPPPubModel *_pubModel;
}

@property(retain, nonatomic) QYPPPubModel *pubModel; // @synthesize pubModel=_pubModel;
@property(nonatomic) long long defaultTabType; // @synthesize defaultTabType=_defaultTabType;
@property(nonatomic) long long currentTabType; // @synthesize currentTabType=_currentTabType;
@property(retain, nonatomic) QYPPPubStageLinesViewController *musicMaterialVC; // @synthesize musicMaterialVC=_musicMaterialVC;
@property(retain, nonatomic) QYPPPubStageLinesViewController *linesMaterialVC; // @synthesize linesMaterialVC=_linesMaterialVC;
@property(retain, nonatomic) QYPPTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(copy, nonatomic) CDUnknownBlockType didSelectEnterMaterialCollection; // @synthesize didSelectEnterMaterialCollection=_didSelectEnterMaterialCollection;
- (void).cxx_destruct;
- (void)go2Shot;
- (void)directShot;
- (void)qypp_navBackAction;
- (long long)indexForTabType:(long long)arg1 inViewControllers:(id)arg2;
- (void)setCurrentTab:(long long)arg1;
- (id)subViewControllerWithParam:(id)arg1;
- (id)subViewControllers;
- (void)createTabBarController;
- (void)setupNavigationBar;
- (void)viewDidLoad;
- (id)initWithPubModel:(id)arg1;
- (id)initWithDefaultTabType:(long long)arg1 andPubModel:(id)arg2;

@end

