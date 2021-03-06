//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class ANCTableViewSectionObject, NSArray, NSIndexPath, UIScrollView, UITableView, UIView;

@protocol ANCTableViewDelegate <UITableViewDelegate>

@optional
- (NSArray *)tableView:(UITableView *)arg1 editViewActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint)scroView:(UIScrollView *)arg1 isSettingContentOffset:(struct CGPoint)arg2;
- (UIView *)footerViewForSectionObject:(ANCTableViewSectionObject *)arg1 atSection:(long long)arg2;
- (UIView *)headerViewForSectionObject:(ANCTableViewSectionObject *)arg1 atSection:(long long)arg2;
- (double)footerViewHeightForSectionObject:(ANCTableViewSectionObject *)arg1 atSection:(long long)arg2;
- (double)headerViewHeightForSectionObject:(ANCTableViewSectionObject *)arg1 atSection:(long long)arg2;
- (void)didMoveObject:(id)arg1 atIndexPath:(NSIndexPath *)arg2 toObject:(id)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)didEditObject:(id)arg1 atIndexPath:(NSIndexPath *)arg2 editingStyle:(long long)arg3;
- (void)didSelectObject:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

