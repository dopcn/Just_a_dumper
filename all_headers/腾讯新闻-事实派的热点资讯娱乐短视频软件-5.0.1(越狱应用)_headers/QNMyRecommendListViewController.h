//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNRootViewController.h"

#import "CAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CAlertView, NSArray, NSIndexPath, NSMutableArray, NSString, QNBarButton, QNColorButton, QNMyRecommendManager, UITableView;

@interface QNMyRecommendListViewController : QNRootViewController <UITableViewDelegate, UITableViewDataSource, CAlertViewDelegate>
{
    _Bool _isNoPictureMode;
    _Bool _isTableEditMode;
    QNMyRecommendManager *_myRecommendManager;
    UITableView *_tableView;
    NSMutableArray *_contentList;
    NSArray *_listIndexs;
    NSMutableArray *_selectdRows;
    QNBarButton *_closeBarBtn;
    QNBarButton *_editBarBtn;
    QNColorButton *_toolBar;
    CAlertView *_alert;
    NSIndexPath *_lastSelectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) CAlertView *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) QNColorButton *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) QNBarButton *editBarBtn; // @synthesize editBarBtn=_editBarBtn;
@property(retain, nonatomic) QNBarButton *closeBarBtn; // @synthesize closeBarBtn=_closeBarBtn;
@property(retain, nonatomic) NSMutableArray *selectdRows; // @synthesize selectdRows=_selectdRows;
@property(nonatomic) _Bool isTableEditMode; // @synthesize isTableEditMode=_isTableEditMode;
@property(nonatomic) _Bool isNoPictureMode; // @synthesize isNoPictureMode=_isNoPictureMode;
@property(retain, nonatomic) NSArray *listIndexs; // @synthesize listIndexs=_listIndexs;
@property(retain, nonatomic) NSMutableArray *contentList; // @synthesize contentList=_contentList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QNMyRecommendManager *myRecommendManager; // @synthesize myRecommendManager=_myRecommendManager;
- (void).cxx_destruct;
- (void)hideBottomToolBar;
- (void)showBottomToolBar;
- (_Bool)qnNavigationController:(id)arg1 shouldInteractiveGestureRecognizerBegin:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)deleteSelectItems;
- (void)p_doRefreshListData;
- (void)p_getMore;
- (void)p_getListData:(_Bool)arg1;
- (void)p_checkTableViewLoadStatus;
- (void)p_hideHelpImage;
- (void)p_showHelpImage;
- (void)scroll2Top;
- (void)p_configTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onBack:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)p_checkEditBarButtonStatus;
- (void)configBarButtons;
- (void)do_viewWillDestroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

