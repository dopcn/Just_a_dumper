//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHUIFramework/AHViewController.h>

#import "AHBaseServiceDelegate-Protocol.h"
#import "AHStencilViewControllerDelegate-Protocol.h"
#import "AHStencilViewControllerLayoutDataSource-Protocol.h"
#import "CBDatePickerViewDelegate-Protocol.h"
#import "CBSliderPopViewDelegate-Protocol.h"
#import "CBYoungPreTagsViewDelegate-Protocol.h"

@class AHStencilViewController, CBUpdateBirthdayService, CBUpdateFollowAgeService, CBYoungPreGetService, CBYoungPrePostService, CBYoungPreUserInfoView, CBYoungPreferencesView, NSDateFormatter, NSString, UIButton, UITableView, UIView;

@interface CBYoungPreferencesController : AHViewController <AHBaseServiceDelegate, CBDatePickerViewDelegate, CBSliderPopViewDelegate, CBYoungPreTagsViewDelegate, AHStencilViewControllerDelegate, AHStencilViewControllerLayoutDataSource>
{
    _Bool _submiting;
    AHStencilViewController *_stencilVC;
    CBYoungPreUserInfoView *_userInfoView;
    CBYoungPreferencesView *_preferencesView;
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_mainView;
    UIButton *_completeButton;
    NSDateFormatter *_dateFormatter;
    CBYoungPreGetService *_service;
    CBYoungPrePostService *_postService;
    CBUpdateBirthdayService *_updateBirthdayService;
    CBUpdateFollowAgeService *_updateFollowAgeService;
    CDUnknownBlockType _completeHandler;
    NSString *_birthday;
    NSString *_followAge;
}

@property(nonatomic) _Bool submiting; // @synthesize submiting=_submiting;
@property(copy, nonatomic) NSString *followAge; // @synthesize followAge=_followAge;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
@property(retain, nonatomic) CBUpdateFollowAgeService *updateFollowAgeService; // @synthesize updateFollowAgeService=_updateFollowAgeService;
@property(retain, nonatomic) CBUpdateBirthdayService *updateBirthdayService; // @synthesize updateBirthdayService=_updateBirthdayService;
@property(retain, nonatomic) CBYoungPrePostService *postService; // @synthesize postService=_postService;
@property(retain, nonatomic) CBYoungPreGetService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CBYoungPreferencesView *preferencesView; // @synthesize preferencesView=_preferencesView;
@property(retain, nonatomic) CBYoungPreUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) AHStencilViewController *stencilVC; // @synthesize stencilVC=_stencilVC;
- (void).cxx_destruct;
- (void)postEventComplete;
- (void)postEventBegin;
- (int)backButtonTypeInViewController:(id)arg1;
- (unsigned long long)supportNavigationBackDirection;
- (_Bool)hasFooterBarInViewController:(id)arg1;
- (int)viewModeInViewContoller:(id)arg1;
- (id)clientViewInViewContoller:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)backButtonPressInViewController:(id)arg1;
- (void)reloadClickInAHLoadingView:(id)arg1;
- (void)tagsView:(id)arg1 clickItem:(id)arg2;
- (void)popView:(id)arg1 clickType:(long long)arg2 maxValue:(long long)arg3 minValue:(long long)arg4;
- (void)dateView:(id)arg1 clickWithType:(long long)arg2 date:(id)arg3;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 netServiceObj:(id)arg4;
- (void)netServiceFinished:(long long)arg1 netServiceObj:(id)arg2;
- (void)netServiceStarted:(long long)arg1 netServiceObj:(id)arg2;
- (void)completeButtonClick:(id)arg1;
- (void)didClickfollowAge;
- (void)didClickBirthday;
- (void)loadData;
- (void)hideSubmitLoadingView;
- (void)showSubmitLoadingView;
- (id)getBirthday;
- (void)refreshUserInfo;
- (void)showToastViewTip:(id)arg1;
- (void)setupEventHandle;
- (void)setupControl;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

