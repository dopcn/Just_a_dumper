//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTableViewCell.h"

@class NSMutableArray, SNLiveCategoryTableItem;

@interface SNLiveCategoryCell : TTTableViewCell
{
    NSMutableArray *_btnArray;
    SNLiveCategoryTableItem *_liveItem;
}

+ (double)cellHeight:(id)arg1;
+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) SNLiveCategoryTableItem *liveItem; // @synthesize liveItem=_liveItem;
- (void).cxx_destruct;
- (void)clickCategoryBtn:(id)arg1;
- (void)updateTheme;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

