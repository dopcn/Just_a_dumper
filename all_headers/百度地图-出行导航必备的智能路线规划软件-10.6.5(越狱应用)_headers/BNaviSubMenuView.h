//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNaviBaseView.h"

#import "BNaviSubMenuSubItemViewDelegate-Protocol.h"

@class BNChangeDefaultLabel, BNTimeTarget, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol BNaviSubMenuViewDelegate;

@interface BNaviSubMenuView : BNaviBaseView <BNaviSubMenuSubItemViewDelegate>
{
    UIView *containerView;
    UIImageView *titleIcon;
    BNChangeDefaultLabel *changeStrategyLabel;
    NSMutableArray *subItemArray;
    NSMutableArray *lineArray;
    UILabel *titleLabel;
    UIButton *changeDefaultButton;
    BNTimeTarget *_autoDismissTimer;
    int _oldType;
    long long _menuType;
    long long _menuPage;
    id <BNaviSubMenuViewDelegate> _subMenuDelegate;
    NSArray *_avalibleArrays;
    CDUnknownBlockType _clickedBlock;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(retain, nonatomic) NSArray *avalibleArrays; // @synthesize avalibleArrays=_avalibleArrays;
@property(nonatomic) id <BNaviSubMenuViewDelegate> subMenuDelegate; // @synthesize subMenuDelegate=_subMenuDelegate;
@property(nonatomic) int oldType; // @synthesize oldType=_oldType;
@property(nonatomic) long long menuPage; // @synthesize menuPage=_menuPage;
@property(nonatomic) long long menuType; // @synthesize menuType=_menuType;
- (void).cxx_destruct;
- (void)showInterveneView;
- (void)onShowVoicePanel;
- (void)registerViaductViewShowNotification;
- (void)registerExpandRoadViewShowNotification;
- (void)timerCallBack;
- (void)refreshTimer;
- (void)stopTimer;
- (void)willMoveToSuperview:(id)arg1;
- (void)subMenuSubItemViewClickedWithIndex:(long long)arg1 andTitle:(id)arg2;
- (void)subMenuSubItemViewClickedDefaultButton:(int)arg1;
- (void)prepareViewForTheme:(int)arg1;
- (void)didBackgroundViewClicked;
- (void)showSubMenuView;
- (void)doClose;
- (void)restoreCurrentStrategy;
- (id)naviViewBottomSearchInfo;
- (id)naviViewBottomRouteInfo;
- (id)imageNameOfMenuTag:(unsigned long long)arg1;
- (void)setFrameAndImage;
- (void)layoutSubviews;
- (void)changeStrategy;
- (void)constructUIwithType:(long long)arg1 AndPage:(long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

