//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TemplateTableViewCell.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LHSafeMutableArray, LiveFoldFooterView, LiveTemplateData, NSString, UITableView;

@interface LiveEventCell : TemplateTableViewCell <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isFold;
    UITableView *_tableView;
    CDUnknownBlockType _mCellBlock;
    LiveTemplateData *_liveTempData;
    LHSafeMutableArray *_activityArray;
    LiveFoldFooterView *_footerView;
}

@property(retain, nonatomic) LiveFoldFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) LHSafeMutableArray *activityArray; // @synthesize activityArray=_activityArray;
@property(nonatomic) __weak LiveTemplateData *liveTempData; // @synthesize liveTempData=_liveTempData;
@property(copy, nonatomic) CDUnknownBlockType mCellBlock; // @synthesize mCellBlock=_mCellBlock;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)followAction:(id)arg1;
- (_Bool)artistIsFollowed:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupLiveTemplate:(id)arg1;
- (void)cellFold:(CDUnknownBlockType)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

