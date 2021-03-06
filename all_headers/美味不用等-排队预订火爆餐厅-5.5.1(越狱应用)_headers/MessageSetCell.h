//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface MessageSetCell : TableViewCell
{
    UIImageView *_iconView;
    UIView *_iconNumberBgView;
    UILabel *_iconNumberLabel;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *iconNumberLabel; // @synthesize iconNumberLabel=_iconNumberLabel;
@property(retain, nonatomic) UIView *iconNumberBgView; // @synthesize iconNumberBgView=_iconNumberBgView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updateCellWithModel:(id)arg1 indexPath:(long long)arg2 isMakeZero:(_Bool)arg3;
- (void)makeConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end

