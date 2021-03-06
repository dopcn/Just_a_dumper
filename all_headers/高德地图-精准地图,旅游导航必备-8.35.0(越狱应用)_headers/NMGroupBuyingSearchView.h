//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LTMNaviBar_e1, NMShadowTableView, NSString, UIImageView;
@protocol NMGroupBuyingSearchViewDataSource, NMGroupBuyingSearchViewDelegate;

@interface NMGroupBuyingSearchView : LTMBaseView <UITableViewDataSource, UITableViewDelegate>
{
    LTMNaviBar_e1 *_navibar_e1;
    UIImageView *_backgroundView;
    NMShadowTableView *_historyTableView;
    _Bool _showCleanHistoryBtn;
    NSString *_lastInputString;
    _Bool _hasText;
    id <NMGroupBuyingSearchViewDelegate> _delegate;
    id <NMGroupBuyingSearchViewDataSource> _datasource;
}

@property(nonatomic) __weak id <NMGroupBuyingSearchViewDataSource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <NMGroupBuyingSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *lastInputString; // @synthesize lastInputString=_lastInputString;
- (void).cxx_destruct;
- (void)onNaviBarPathPoiButtonClicked;
- (void)onNaviBarVoiceButtonClicked;
- (void)onNaviBarSearchButtonClicked;
- (void)onNaviBarBackButtonClicked;
- (void)textAndVoiceField:(id)arg1 voiceInput:(id)arg2;
- (void)textAndVoiceFieldTextChanged:(id)arg1;
- (void)textAndVoiceFieldReturnKeyOnClicked:(id)arg1;
- (void)clearHistory;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)goBackView:(id)arg1;
- (void)getInputTips;
- (void)gotTableViewData:(id)arg1;
- (void)onVoiceBtnInvoke;
- (void)onSearchBtnInvoke;
- (void)removeNotifications;
- (void)addNotifications;
- (void)updateNMTheme;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)reloadNMData;
- (void)dealloc;
- (void)initUI;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

