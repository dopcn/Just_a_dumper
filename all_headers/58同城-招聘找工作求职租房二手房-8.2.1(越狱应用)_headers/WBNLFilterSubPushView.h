//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIActivityIndicatorView, UITableView, WBNLCategoryItemDataModel, WBNLFilterDataSource;
@protocol WBNLHeaderViewProtocol;

@interface WBNLFilterSubPushView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_detailTableView;
    id <WBNLHeaderViewProtocol> _pushDelegate;
    WBNLFilterDataSource *_filterDataSource;
    WBNLCategoryItemDataModel *_parentModel;
    NSArray *_dataSource;
    UIActivityIndicatorView *_loadingProgressIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingProgressIndicator; // @synthesize loadingProgressIndicator=_loadingProgressIndicator;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak WBNLCategoryItemDataModel *parentModel; // @synthesize parentModel=_parentModel;
@property(nonatomic) __weak WBNLFilterDataSource *filterDataSource; // @synthesize filterDataSource=_filterDataSource;
@property(nonatomic) __weak id <WBNLHeaderViewProtocol> pushDelegate; // @synthesize pushDelegate=_pushDelegate;
@property(retain, nonatomic) UITableView *detailTableView; // @synthesize detailTableView=_detailTableView;
- (void).cxx_destruct;
- (void)changeFrameToRect:(struct CGRect)arg1 withHalfScreen:(_Bool)arg2;
- (void)clickButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setFooterViewForTable;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)paraseResponseString:(id)arg1;
- (void)getDataFailure:(id)arg1;
- (void)getDataSuccess:(id)arg1;
- (void)requestUrl:(id)arg1 withParam:(id)arg2;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)prepareTableViewWithUrl:(id)arg1 withParam:(id)arg2 halfScreen:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

