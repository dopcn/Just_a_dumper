//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

#import "NMNaviDialectDataSource-Protocol.h"
#import "NMNaviDialectDelegate-Protocol.h"
#import "NMNaviSetupCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NMNaviDialectSelectView, NMShadowTableView, NSArray, NSString, UIImageView;
@protocol NMNaviSetupDataSource, NMNaviSetupDelegate;

@interface NMNaviSetupView : LTMBaseView <UITableViewDataSource, UITableViewDelegate, NMNaviSetupCellDelegate, NMNaviDialectDelegate, NMNaviDialectDataSource>
{
    NSArray *_tableItemArray;
    NMShadowTableView *_tableView;
    UIImageView *_backgroundView;
    NMNaviDialectSelectView *_dialectSelectView;
    id <NMNaviSetupDelegate> _delegate;
    id <NMNaviSetupDataSource> _dataSource;
}

@property(nonatomic) __weak id <NMNaviSetupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NMNaviSetupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)getNaviDialectSelected;
- (id)getNaviDialectList;
- (void)naviDialectDismiss;
- (void)naviDialectSelected:(id)arg1;
- (void)naviSetupCell:(id)arg1 button:(long long)arg2 selected:(_Bool)arg3;
- (void)animationWithOriginX:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)reloadDialectData;
- (void)reloadNMData;
- (void)updateNMTheme;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)goBackToSetupView:(id)arg1;
- (void)updateNaviBar:(id)arg1;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

