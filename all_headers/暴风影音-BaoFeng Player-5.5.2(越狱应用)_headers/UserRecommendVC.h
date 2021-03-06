//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KGRefreshFooter, NSMutableArray, NSString, UITableView, UIView;

@interface UserRecommendVC : CommonViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    int clickSuccessCount;
    UIView *v;
    _Bool _isRequesting;
    _Bool _isLoadFinished;
    _Bool _isRefresh;
    int _currentPage;
    NSString *_type;
    NSString *_from;
    CDUnknownBlockType _actionBlock;
    UITableView *_tbView;
    NSMutableArray *_dataSource;
    KGRefreshFooter *_refreshfooter;
}

@property(retain, nonatomic) KGRefreshFooter *refreshfooter; // @synthesize refreshfooter=_refreshfooter;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool isLoadFinished; // @synthesize isLoadFinished=_isLoadFinished;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tbView; // @synthesize tbView=_tbView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setActionCallBack:(unsigned long long)arg1 uiview:(id)arg2 obj:(id)arg3 key:(id)arg4 twoKey:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getUserFollow:(id)arg1 isFresh:(int)arg2;
- (void)getOwnFollow:(id)arg1 isFresh:(int)arg2;
- (void)reloadData;
- (void)clickNavEvent:(id)arg1;
- (void)reloadDataAction;
- (void)initUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)KGClosePlayerNotificatione;
- (void)viewDidLoad;
- (void)setCallBack:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

