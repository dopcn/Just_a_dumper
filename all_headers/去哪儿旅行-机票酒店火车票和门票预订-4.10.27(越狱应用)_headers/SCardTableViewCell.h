//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UITableView;

@interface SCardTableViewCell : UITableViewCell
{
    UITableView *_owner;
}

+ (double)rowHeightOfCell:(id)arg1;
+ (void)setCellStyle:(id)arg1 tableView:(id)arg2;
+ (id)reuseableCellOfTableView:(id)arg1 style:(long long)arg2 data:(id)arg3 parentVC:(id)arg4;
@property(nonatomic) __weak UITableView *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)setData:(id)arg1;

@end

