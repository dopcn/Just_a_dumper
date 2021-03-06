//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SearchUtils, UITableView, UITextField, UIView;
@protocol YYGroupSearchDelegate;

@interface YYGroupSearchViewController : BaseViewController <UITextFieldDelegate>
{
    NSMutableDictionary *_imGroupInfoCache;
    NSTimer *_searchTimer;
    id <YYGroupSearchDelegate> _delegate;
    SearchUtils *_searchUtils;
    NSArray *_groupIdList;
    NSMutableArray *_searchResultList;
    UITableView *_tableView;
    UIView *_headerView;
    NSLayoutConstraint *_headerViewConstraintHeight;
    UITextField *_searchTextField;
    NSLayoutConstraint *_bottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak NSLayoutConstraint *headerViewConstraintHeight; // @synthesize headerViewConstraintHeight=_headerViewConstraintHeight;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *searchResultList; // @synthesize searchResultList=_searchResultList;
@property(retain, nonatomic) NSArray *groupIdList; // @synthesize groupIdList=_groupIdList;
@property(retain, nonatomic) SearchUtils *searchUtils; // @synthesize searchUtils=_searchUtils;
@property(nonatomic) __weak id <YYGroupSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardDidHideWithFrameBegin:(id)arg1 frameEnd:(id)arg2 animationDuration:(id)arg3 animationCurve:(id)arg4;
- (void)keyboardWillHideWithFrameBegin:(id)arg1 frameEnd:(id)arg2 animationDuration:(id)arg3 animationCurve:(id)arg4;
- (void)keyboardDidShowWithFrameBegin:(id)arg1 frameEnd:(id)arg2 animationDuration:(id)arg3 animationCurve:(long long)arg4;
- (void)keyboardWillShowWithFrameBegin:(id)arg1 frameEnd:(id)arg2 animationDuration:(id)arg3 animationCurve:(id)arg4;
- (long long)preferredStatusBarStyle;
- (_Bool)preferredNavigationBarHidden;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)cancelSearchBtnAction:(id)arg1;
- (void)textEditingChanged:(id)arg1;
- (void)onSearchTimeout;
- (void)searchWithKeyword:(id)arg1;
- (void)prepareForSearchWithCompletion:(CDUnknownBlockType)arg1;
- (void)groupCache:(id)arg1 cachedGroupInfoDidUpdated:(id)arg2 forGroupId:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

