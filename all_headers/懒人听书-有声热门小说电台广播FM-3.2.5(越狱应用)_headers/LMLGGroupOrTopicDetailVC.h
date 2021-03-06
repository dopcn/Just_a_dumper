//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseVC.h"

#import "LMGroupOrTopicDetailVCTopSectionDelegate-Protocol.h"
#import "LMLGDetailContentBaseVCDelegate-Protocol.h"
#import "LMLGDetailTypeTabBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LMAllwaysTopPostVC, LMLGDetailHeaderSimpleView, LMLGDetailTypeTabBar, LMLGGroupDetailBottomCell, LMLGGroupDetailTopCell, LMLGGroupOrTopicDetailVCModel, LMLoadingWaitingView, LMMultiGestureTableView, LMNaviAlphaInteractiveView, LMTopicDetailTopSectionVC, MASConstraint, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView;

@interface LMLGGroupOrTopicDetailVC : LMBaseVC <LMGroupOrTopicDetailVCTopSectionDelegate, LMLGDetailContentBaseVCDelegate, LMLGDetailTypeTabBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _parrentTableScrollEnable;
    _Bool _descCellSpreadOut;
    LMLGGroupOrTopicDetailVCModel *_vcModel;
    UIImageView *_bgImageView;
    UIView *_blurEffectView;
    LMMultiGestureTableView *_containerTableView;
    LMLGDetailHeaderSimpleView *_topInfoView;
    LMNaviAlphaInteractiveView *_naviBar;
    LMAllwaysTopPostVC *_relateInfoVC;
    LMTopicDetailTopSectionVC *_topicInfoVC;
    UIButton *_shareBtn;
    UIButton *_navBackButton;
    UILabel *_titleLabel;
    MASConstraint *_shareBtnRightToSuperConstraint;
    MASConstraint *_shareBtnRightToSilblingConstraint;
    LMLGGroupDetailTopCell *_topCell;
    LMLGGroupDetailBottomCell *_bottomCell;
    LMLGDetailTypeTabBar *_tabBar;
    CDUnknownBlockType _headerRefreshBlock;
    NSMutableArray *_contentVCModels;
    long long _subviewType;
    LMLoadingWaitingView *_loadingView;
    UIView *_footerView;
    UIView *_guideViewContainer;
    UIImageView *_guideCoverBorder;
    UIImageView *_guidePostBorder;
    UIImageView *_guidePost;
    UIImageView *_guideTitle1;
    UIImageView *_guideTitle2;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool descCellSpreadOut; // @synthesize descCellSpreadOut=_descCellSpreadOut;
@property(retain, nonatomic) UIImageView *guideTitle2; // @synthesize guideTitle2=_guideTitle2;
@property(retain, nonatomic) UIImageView *guideTitle1; // @synthesize guideTitle1=_guideTitle1;
@property(retain, nonatomic) UIImageView *guidePost; // @synthesize guidePost=_guidePost;
@property(retain, nonatomic) UIImageView *guidePostBorder; // @synthesize guidePostBorder=_guidePostBorder;
@property(retain, nonatomic) UIImageView *guideCoverBorder; // @synthesize guideCoverBorder=_guideCoverBorder;
@property(retain, nonatomic) UIView *guideViewContainer; // @synthesize guideViewContainer=_guideViewContainer;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) LMLoadingWaitingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long subviewType; // @synthesize subviewType=_subviewType;
@property(retain, nonatomic) NSMutableArray *contentVCModels; // @synthesize contentVCModels=_contentVCModels;
@property(copy, nonatomic) CDUnknownBlockType headerRefreshBlock; // @synthesize headerRefreshBlock=_headerRefreshBlock;
@property(nonatomic) _Bool parrentTableScrollEnable; // @synthesize parrentTableScrollEnable=_parrentTableScrollEnable;
@property(nonatomic) __weak LMLGDetailTypeTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic) __weak LMLGGroupDetailBottomCell *bottomCell; // @synthesize bottomCell=_bottomCell;
@property(nonatomic) __weak LMLGGroupDetailTopCell *topCell; // @synthesize topCell=_topCell;
@property(retain, nonatomic) MASConstraint *shareBtnRightToSilblingConstraint; // @synthesize shareBtnRightToSilblingConstraint=_shareBtnRightToSilblingConstraint;
@property(retain, nonatomic) MASConstraint *shareBtnRightToSuperConstraint; // @synthesize shareBtnRightToSuperConstraint=_shareBtnRightToSuperConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *navBackButton; // @synthesize navBackButton=_navBackButton;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) LMTopicDetailTopSectionVC *topicInfoVC; // @synthesize topicInfoVC=_topicInfoVC;
@property(retain, nonatomic) LMAllwaysTopPostVC *relateInfoVC; // @synthesize relateInfoVC=_relateInfoVC;
@property(retain, nonatomic) LMNaviAlphaInteractiveView *naviBar; // @synthesize naviBar=_naviBar;
@property(retain, nonatomic) LMLGDetailHeaderSimpleView *topInfoView; // @synthesize topInfoView=_topInfoView;
@property(retain, nonatomic) LMMultiGestureTableView *containerTableView; // @synthesize containerTableView=_containerTableView;
@property(retain, nonatomic) UIView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) LMLGGroupOrTopicDetailVCModel *vcModel; // @synthesize vcModel=_vcModel;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (CDUnknownBlockType)playButtonTouchBlock;
- (id)childVCs;
- (id)footerViewWithShowType:(long long)arg1;
- (void)changeShareButtonPosition;
- (void)showOrHideFresherGuideView:(_Bool)arg1;
- (void)showFresherGuideView;
- (void)registerNotification;
- (_Bool)checkLogin;
- (void)setTableViewFooterWithType:(long long)arg1;
- (void)scrollTopBackgroundImageWithOffset:(struct CGPoint)arg1;
- (void)automaticShowOrHide:(_Bool)arg1;
- (void)updateRelateAndTopPosts;
- (void)updateHeadViewInfo;
- (void)changeNavBarAlphaWithContentOffset:(struct CGPoint)arg1;
- (void)configGuideViewConstraint;
- (void)configConstraints;
- (void)createChildViewControllers:(id)arg1;
- (void)createSubViews;
- (void)updateMaskViewLocation;
- (void)initAdConfigurationBeforeViewDidLoad;
- (void)onGuideViewTapGestureTouch:(id)arg1;
- (void)shareListenFriendGroup;
- (void)onGroupCoverTapGesture;
- (void)onJoinListenGroupButtonTouch;
- (void)onNaviBackButtonTouch:(id)arg1;
- (void)onClickMaskView:(id)arg1;
- (void)LGDetailTypeTabBar:(id)arg1 showTypeView:(_Bool)arg2;
- (void)tabBarSortButtonDidTouch:(id)arg1;
- (void)tabBar:(id)arg1 selectedIndexDidChange:(long long)arg2;
- (void)subScrollViewDidDecelerate:(id)arg1;
- (void)subScrollViewWillDecelerate:(id)arg1;
- (void)subScrollViewScrollTo:(_Bool)arg1;
- (void)scrollViewLeaveTop;
- (void)allwaysTopPostVCHeightDidChanged:(double)arg1;
- (void)didSelectedAllwaysTopPostVCCellWithEntity:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)postDeleteHandler:(id)arg1;
- (void)userChangeNoticeHandler:(id)arg1;
- (void)joinGroupHandler:(id)arg1;
- (void)quiteGroupHandler:(id)arg1;
- (void)postSetTopHandler:(id)arg1;
- (void)loadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVCModel:(id)arg1;
- (id)initWithGroupId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

