//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiveBaseViewController.h"

#import "LCShopingCartViewModelDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LCShopingCartViewModel, LiveCourseNoCourseView, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView, UIViewController;

@interface LCShopingCartViewController : LiveBaseViewController <UITableViewDelegate, LCShopingCartViewModelDelegate>
{
    UIViewController *_parentVC;
    NSString *_classFrom;
    UIView *_topTip;
    UILabel *_labTip;
    UIImageView *_arrowImg;
    UITableView *_list;
    UIView *_footView;
    UIView *_bottomBar;
    UIButton *_butAllSelect;
    UILabel *_labPrice;
    UILabel *_discountPrice;
    UIButton *_butPay;
    NSMutableArray *_dataArray;
    LCShopingCartViewModel *_viewModel;
    LiveCourseNoCourseView *_noCourseView;
}

@property(retain, nonatomic) LiveCourseNoCourseView *noCourseView; // @synthesize noCourseView=_noCourseView;
@property(retain, nonatomic) LCShopingCartViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIButton *butPay; // @synthesize butPay=_butPay;
@property(retain, nonatomic) UILabel *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(retain, nonatomic) UILabel *labPrice; // @synthesize labPrice=_labPrice;
@property(retain, nonatomic) UIButton *butAllSelect; // @synthesize butAllSelect=_butAllSelect;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UITableView *list; // @synthesize list=_list;
@property(retain, nonatomic) UIImageView *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(retain, nonatomic) UILabel *labTip; // @synthesize labTip=_labTip;
@property(retain, nonatomic) UIView *topTip; // @synthesize topTip=_topTip;
@property(retain, nonatomic) NSString *classFrom; // @synthesize classFrom=_classFrom;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)topTipTapGesture:(id)arg1;
- (void)updateUI;
- (void)onSelectItemUpdateSelf:(_Bool)arg1;
- (void)onDeleteCourseWithReLoadData:(_Bool)arg1 Error:(id)arg2;
- (void)onTapGestureCourseCartWithItem:(id)arg1 subItemIndex:(long long)arg2;
- (void)onClickTeacherAvatarWithItem:(id)arg1;
- (void)onEnterStopSaleCountdown;
- (void)goOrderPayPage;
- (void)onButtonClick:(id)arg1;
- (id)getDictWithCourseId:(long long)arg1 from:(id)arg2;
- (void)loadData;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

