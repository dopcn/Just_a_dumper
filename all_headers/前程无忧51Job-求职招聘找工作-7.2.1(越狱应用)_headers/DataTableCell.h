//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ListViewCellDelegate-Protocol.h"

@class DataItemDetail, ListView, ListViewData, NSIndexPath, NSString, UIColor;

@interface DataTableCell : UITableViewCell <ListViewCellDelegate>
{
    ListView *listView;
    NSIndexPath *indexPath;
    DataItemDetail *detail;
    ListViewData *listData;
    double lastTop;
    UIColor *_bgColor;
}

+ (double)heightForCell:(id)arg1 indexPath:(id)arg2;
+ (id)cellWithCellID:(id)arg1 listView:(id)arg2 indexPath:(id)arg3;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property __weak ListViewData *listData; // @synthesize listData;
@property(retain) DataItemDetail *detail; // @synthesize detail;
@property(retain) NSIndexPath *indexPath; // @synthesize indexPath;
@property __weak ListView *listView; // @synthesize listView;
- (void).cxx_destruct;
- (double)accessoryWidth;
- (void)initCellViewInherited;
- (void)bindCellData:(_Bool)arg1;
- (void)initCellView;
- (void)dealloc;
- (id)initWithCellID:(id)arg1 cellStyle:(long long)arg2 listView:(id)arg3 indexPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

