//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRefreshTableViewController.h>

#import "AHBaseServiceDelegate-Protocol.h"
#import "AHLoadingViewDelegate-Protocol.h"
#import "AHNetworkTableProtocol-Protocol.h"
#import "CCCompCarSeriseSpecViewControllerDataSource-Protocol.h"
#import "CCCompCarSeriseSpecViewControllerDelegate-Protocol.h"
#import "ChildViewControllerProtocol-Protocol.h"

@class AHLoadingView, NSMutableArray, NSString, UINavigationController;
@protocol CCCompSelectFavouriteListDelegate;

@interface CCCompSelectFavouriteListViewController : AHRefreshTableViewController <AHBaseServiceDelegate, ChildViewControllerProtocol, AHNetworkTableProtocol, AHLoadingViewDelegate, CCCompCarSeriseSpecViewControllerDelegate, CCCompCarSeriseSpecViewControllerDataSource>
{
    _Bool _isShowGray;
    int _dataType;
    AHLoadingView *loadingView;
    id <CCCompSelectFavouriteListDelegate> _delegate;
    NSString *_controllerTitle;
    UINavigationController *_parentNavigationController;
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) _Bool isShowGray; // @synthesize isShowGray=_isShowGray;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) UINavigationController *parentNavigationController; // @synthesize parentNavigationController=_parentNavigationController;
@property(copy, nonatomic) NSString *controllerTitle; // @synthesize controllerTitle=_controllerTitle;
@property(nonatomic) __weak id <CCCompSelectFavouriteListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AHLoadingView *loadingView; // @synthesize loadingView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)seriesOrSpecModelIsExistInDB:(long long)arg1;
- (void)handleUserChooseSpecWithModel:(id)arg1;
- (void)handleUserChooseSeriesWithModel:(id)arg1;
- (void)childViewWillDisAppearInScrollNavigtionViewController:(id)arg1;
- (void)childViewWillAppearInScrollNavigtionViewController:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (id)willReloadData:(id)arg1 category:(long long)arg2;
- (void)seriseViewController:(id)arg1 didSelectSeriseCellAtIndexPaht:(id)arg2;
- (_Bool)isLastViewController:(id)arg1 didSelectSeriseCellAtIndexPath:(id)arg2;
- (id)emptyDataWithMessage:(id)arg1 category:(long long)arg2;
- (void)clickCancelBtnForSeriseSpecViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)postPVBegin;
- (void)initTableView;
- (Class)getClassNameWithType:(int)arg1;
- (void)getDataWithType:(int)arg1;
- (void)initEmptyView;
- (void)initData;
- (void)viewWillBegin;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isLoadCache;
@property(nonatomic) _Bool isLoadNewData;
@property(nonatomic) _Bool isLoadView;
@property(readonly) Class superclass;

@end

