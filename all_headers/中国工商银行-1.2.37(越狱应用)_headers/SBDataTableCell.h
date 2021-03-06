//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SBTableViewCellDelegate-Protocol.h"

@class DataItemDetail, NSIndexPath, NSString, SBTableData, SBTableView, UILabel;

@interface SBDataTableCell : UITableViewCell <SBTableViewCellDelegate>
{
    SBTableView *_table;
    NSIndexPath *_indexPath;
    DataItemDetail *_cellDetail;
    SBTableData *_tableData;
    UILabel *_displayLabel;
}

+ (id)cellID:(id)arg1;
+ (id)createCell:(id)arg1;
@property(retain, nonatomic) UILabel *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(retain, nonatomic) SBTableData *tableData; // @synthesize tableData=_tableData;
@property(retain, nonatomic) DataItemDetail *cellDetail; // @synthesize cellDetail=_cellDetail;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) SBTableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (void)bindCellData;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

