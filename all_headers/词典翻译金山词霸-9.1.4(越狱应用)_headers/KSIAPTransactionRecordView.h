//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSXibView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSSingleThinLabel, NSArray, NSString, UILabel, UITableView, UIView;

@interface KSIAPTransactionRecordView : KSXibView <UITableViewDelegate, UITableViewDataSource>
{
    UILabel *_titleLabel;
    KSSingleThinLabel *_separateLineLabel;
    UITableView *_tableView;
    NSArray *_cibamiTransactionRecordArray;
    UIView *_contentView;
}

@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSArray *cibamiTransactionRecordArray; // @synthesize cibamiTransactionRecordArray=_cibamiTransactionRecordArray;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak KSSingleThinLabel *separateLineLabel; // @synthesize separateLineLabel=_separateLineLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)cancelClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showInView:(id)arg1 cibamiTransactionRecordArray:(id)arg2;
- (void)orientationChange;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

