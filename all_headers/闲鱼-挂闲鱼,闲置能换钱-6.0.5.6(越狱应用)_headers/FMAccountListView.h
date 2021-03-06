//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMBaseScrollView.h"

@class FMAccountTabView, FMImageView, FMListViewDO, NSString, UILabel, UIView;

@interface FMAccountListView : FMBaseScrollView
{
    NSString *_shareTitle;
    FMListViewDO *_viewDO;
    unsigned long long _accountType;
    FMAccountTabView *_tabView;
    UIView *_myRecycleView;
    FMImageView *_myRecycleIconImageView;
    UILabel *_myRecycleTitleLabel;
    UILabel *_myRecycleInfoLabel;
    UIView *_shareView;
}

@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) UILabel *myRecycleInfoLabel; // @synthesize myRecycleInfoLabel=_myRecycleInfoLabel;
@property(retain, nonatomic) UILabel *myRecycleTitleLabel; // @synthesize myRecycleTitleLabel=_myRecycleTitleLabel;
@property(retain, nonatomic) FMImageView *myRecycleIconImageView; // @synthesize myRecycleIconImageView=_myRecycleIconImageView;
@property(retain, nonatomic) UIView *myRecycleView; // @synthesize myRecycleView=_myRecycleView;
@property(retain, nonatomic) FMAccountTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) FMListViewDO *viewDO; // @synthesize viewDO=_viewDO;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
- (void).cxx_destruct;
- (void)editButtonTapped:(id)arg1;
- (void)settingButtonTapped:(id)arg1;
- (void)setSelected:(unsigned long long)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 homeCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 orderCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)bindViewDO;
- (void)shareTapped;
- (void)updateTableHeaderView;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 withViewDO:(id)arg2;

@end

