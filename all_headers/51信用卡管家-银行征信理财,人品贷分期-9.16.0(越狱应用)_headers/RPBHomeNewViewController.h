//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RPBBaseViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ENSegmentedControl, NSDictionary, NSString, RPBInvestPlazaViewController, UIBarButtonItem, UIButton, UIColor, UIImage, UIScrollView, UIView;

@interface RPBHomeNewViewController : RPBBaseViewController <UIScrollViewDelegate, CAAnimationDelegate>
{
    _Bool _isCreditManager;
    CDUnknownBlockType _menuSelectedBlock;
    RPBBaseViewController *_homeViewController;
    RPBInvestPlazaViewController *_investPlazaViewController;
    UIColor *_mainColor;
    UIImage *_shadowImage;
    UIButton *_homeButton;
    UIButton *_plazaButton;
    UIView *_lineView;
    UIScrollView *_scrollView;
    NSDictionary *_menuData;
    long long _state;
    UIBarButtonItem *_rightButtonItem;
    ENSegmentedControl *_segmentControl;
    UIView *_redPointView;
}

@property(retain, nonatomic) UIView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) ENSegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIBarButtonItem *rightButtonItem; // @synthesize rightButtonItem=_rightButtonItem;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *menuData; // @synthesize menuData=_menuData;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *plazaButton; // @synthesize plazaButton=_plazaButton;
@property(retain, nonatomic) UIButton *homeButton; // @synthesize homeButton=_homeButton;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(nonatomic) _Bool isCreditManager; // @synthesize isCreditManager=_isCreditManager;
@property(retain, nonatomic) RPBInvestPlazaViewController *investPlazaViewController; // @synthesize investPlazaViewController=_investPlazaViewController;
@property(retain, nonatomic) RPBBaseViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(copy, nonatomic) CDUnknownBlockType menuSelectedBlock; // @synthesize menuSelectedBlock=_menuSelectedBlock;
- (void).cxx_destruct;
- (_Bool)isRedPointShowed;
- (void)hideRedPoint;
- (void)showRedPoint;
- (void)animationDidStart:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)myBankCards:(id)arg1;
- (void)routerHandler:(id)arg1;
- (void)_selectSegmentedAtIndex:(long long)arg1;
- (void)rightBarButtonClicked:(id)arg1 event:(id)arg2;
- (void)_colorNavigationBar;
- (id)createNavigationTitleItem;
- (void)_updateButtonItem;
- (void)setupNavItems;
- (void)_updateVC;
- (void)_loadSubVC;
- (void)accessServiceData:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

