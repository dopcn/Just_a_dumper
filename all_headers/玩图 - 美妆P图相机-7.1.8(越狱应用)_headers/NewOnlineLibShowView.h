//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OnlineLibShowViewDelegate-Protocol.h"
#import "TTURLRequestDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TCustomProgressBar, TPopupModelActivityView, TResInfo, TTURLRequest, UIButton, UILabel, UITableView;
@protocol NewOnlineLibShowViewDelegate;

@interface NewOnlineLibShowView : UIView <TTURLRequestDelegate, UITableViewDataSource, UITableViewDelegate, OnlineLibShowViewDelegate>
{
    UITableView *table;
    UIView *whiteView;
    NSMutableArray *dataList;
    _Bool isRequested;
    _Bool isDownloadRequesting;
    TPopupModelActivityView *indicator;
    TCustomProgressBar *progressView;
    UIView *adContainer;
    TTURLRequest *_request;
    UIButton *cancelButton;
    UILabel *viewTitle;
    TResInfo *curInfo;
    _Bool _isWithAd;
    id <NewOnlineLibShowViewDelegate> _delegate;
    NSString *_resType;
}

@property(nonatomic) _Bool isWithAd; // @synthesize isWithAd=_isWithAd;
@property(retain, nonatomic) NSString *resType; // @synthesize resType=_resType;
@property(nonatomic) id <NewOnlineLibShowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellDownloadStart1:(id)arg1;
- (void)setIsShowIndicator:(_Bool)arg1;
- (void)showIndicator:(_Bool)arg1;
- (void)clearInfowithResID:(int)arg1;
- (void)clearInfowithName:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)showRequestFaileTips;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidCancelLoad:(id)arg1;
- (void)showRequestErrorTips;
- (void)hideRequestErrorTips;
- (void)requestOnline;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)getStringFromObject:(id)arg1;
- (id)parseResInfoFromDict:(id)arg1 existNames:(id)arg2;
- (id)parseListFromDic:(id)arg1;
- (id)unixTimeStamp;
- (void)setRequestFalse;
- (void)dismissView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)showFinishTips;
- (void)showFaileTips;
- (void)setPregressView:(_Bool)arg1;
- (void)hideAdView;
- (void)showAdView:(id)arg1;
- (void)dealloc;
- (void)setView;
- (id)initWithFrame:(struct CGRect)arg1 resType:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

