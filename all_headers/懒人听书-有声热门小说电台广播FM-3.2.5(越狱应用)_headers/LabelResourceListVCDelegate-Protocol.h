//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LMLabelResourceListVC, UITableView;

@protocol LabelResourceListVCDelegate <NSObject>
- (long long)labelIdForLMLabelResourceListVC:(LMLabelResourceListVC *)arg1;
- (void)viewController:(LMLabelResourceListVC *)arg1 refreshDataType:(unsigned long long)arg2;
- (void)viewController:(LMLabelResourceListVC *)arg1 attentionStatus:(_Bool)arg2;
- (void)viewController:(LMLabelResourceListVC *)arg1 selectedItem:(id)arg2;
- (void)viewController:(LMLabelResourceListVC *)arg1 scrollForOtherTable:(UITableView *)arg2;
- (void)viewController:(LMLabelResourceListVC *)arg1 scrollTable:(UITableView *)arg2;
@end

