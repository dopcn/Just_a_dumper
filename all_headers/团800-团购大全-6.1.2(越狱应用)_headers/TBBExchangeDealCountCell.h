//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTableViewCell.h"

@class UIButton, UILabel, UIView;

@interface TBBExchangeDealCountCell : TBTableViewCell
{
    UILabel *_dealCount;
    UIView *_countBg;
    UIButton *_reduceBtn;
    UIButton *_addBtn;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) __weak UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(nonatomic) __weak UIButton *reduceBtn; // @synthesize reduceBtn=_reduceBtn;
@property(nonatomic) __weak UIView *countBg; // @synthesize countBg=_countBg;
@property(nonatomic) __weak UILabel *dealCount; // @synthesize dealCount=_dealCount;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

