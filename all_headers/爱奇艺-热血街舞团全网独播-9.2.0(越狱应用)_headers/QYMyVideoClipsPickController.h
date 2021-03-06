//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "QYMyVideoClipsDataManagerDelegate-Protocol.h"

@class NSString, QYMyVideoClipsDataManager, QYMyVideoClipsPickMainView;

@interface QYMyVideoClipsPickController : QYCommonViewController <QYMyVideoClipsDataManagerDelegate>
{
    _Bool _isLoadingMore;
    QYMyVideoClipsPickMainView *_mainView;
    QYMyVideoClipsDataManager *_dataManager;
}

@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(retain, nonatomic) QYMyVideoClipsDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) QYMyVideoClipsPickMainView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)dataManagerDidLoadDataCanceled;
- (void)dataManagerDidLoadDataFailed;
- (void)dataManagerDidLoadData:(id)arg1 hasNext:(_Bool)arg2;
- (void)retryRequest;
- (void)loadDataWithPage:(long long)arg1;
- (void)loadOriData;
- (void)setSelectedModels:(id)arg1;
- (void)showInParentController:(id)arg1 withSelectedModels:(id)arg2;
- (void)routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)setupConstraints;
- (void)initSubviews;
- (void)setupSelf;
- (void)varsInit;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

