//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IMYCaptionView, IMYToolsChildbirthBagAddHeaderView, IMYToolsChildbirthBagAddVM, IMYToolsSearchView, NSString, UITableView;

@interface IMYToolsChildbirthBagAddVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    IMYToolsChildbirthBagAddVM *_vm;
    CDUnknownBlockType _selectLastType;
    UITableView *_mainTableView;
    IMYCaptionView *_captionView;
    IMYToolsSearchView *_searchView;
    IMYToolsChildbirthBagAddHeaderView *_headerView;
}

@property(retain, nonatomic) IMYToolsChildbirthBagAddHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IMYToolsSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(copy, nonatomic) CDUnknownBlockType selectLastType; // @synthesize selectLastType=_selectLastType;
@property(retain, nonatomic) IMYToolsChildbirthBagAddVM *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;
- (void)searchAddCustomGoods;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

