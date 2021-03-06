//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RPBBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ENSegmentedControl, NSArray, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface RPBIncomeViewController : RPBBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSDictionary *_result;
    NSArray *_currentArray;
    ENSegmentedControl *_segmentedControl;
    _Bool _requestSuccess;
    long long _selectType;
    UIView *_topBackView;
    UIView *_segmentBackView;
    UILabel *_incomeLabel;
    UITableView *_incomeTableView;
    NSMutableArray *_expandCache;
    long long _selectIndex;
    NSLayoutConstraint *_topConstraint;
}

+ (void)load;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *expandCache; // @synthesize expandCache=_expandCache;
@property(nonatomic) __weak UITableView *incomeTableView; // @synthesize incomeTableView=_incomeTableView;
@property(nonatomic) __weak UILabel *incomeLabel; // @synthesize incomeLabel=_incomeLabel;
@property(nonatomic) __weak UIView *segmentBackView; // @synthesize segmentBackView=_segmentBackView;
@property(nonatomic) __weak UIView *topBackView; // @synthesize topBackView=_topBackView;
@property(nonatomic) long long selectType; // @synthesize selectType=_selectType;
- (void).cxx_destruct;
- (void)reloadCellWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_updateFailView;
- (void)_updateUI;
- (void)segmentedControlChanged:(long long)arg1;
- (void)_accessServiceData;
- (void)_interfaceUpdate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

