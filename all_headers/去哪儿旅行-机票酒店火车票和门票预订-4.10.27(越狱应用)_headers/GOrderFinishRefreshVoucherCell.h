//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOrderFinishCell.h"

@class UIButton, UILabel;

@interface GOrderFinishRefreshVoucherCell : GOrderFinishCell
{
    UIButton *_refrshButton;
    UILabel *_titleLabel;
}

+ (double)cellHeightWithData:(id)arg1 userInfo:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) __weak UIButton *refrshButton; // @synthesize refrshButton=_refrshButton;
- (void).cxx_destruct;
- (void)endRefresh;
- (void)refreshWithData:(id)arg1 userInfo:(id)arg2 atIndexPath:(id)arg3;
- (void)buttonClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

