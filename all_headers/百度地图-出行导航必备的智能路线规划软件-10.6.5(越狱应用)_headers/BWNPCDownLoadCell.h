//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "BWNaviNPCChooseViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol BWNPCDownLoadCellDelegate;

@interface BWNPCDownLoadCell : UITableViewCell <BWNaviNPCChooseViewDelegate>
{
    UILabel *_titleLb;
    UILabel *_detailLb;
    UIImageView *_arrowImageView;
    UIButton *_viewAllButton;
    UIView *_bottomLine;
    UIScrollView *_npcSelectContainer;
    NSMutableArray *_chooseViewArray;
    NSMutableArray *_chooseLabelArray;
    NSArray *_dataArrary;
    id <BWNPCDownLoadCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <BWNPCDownLoadCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)onPressViewAll;
- (void)onClick:(id)arg1;
- (void)layoutSubviews;
- (void)resetScrollViewOffset;
- (void)updateProgress:(double)arg1 withResource:(id)arg2;
- (void)setData:(id)arg1;
- (id)titleColorForResource:(id)arg1;
- (void)removeCacheSubView;
- (void)showMore:(_Bool)arg1;
- (void)uiInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

