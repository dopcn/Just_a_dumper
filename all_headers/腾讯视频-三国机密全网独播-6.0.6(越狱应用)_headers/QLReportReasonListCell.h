//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface QLReportReasonListCell : UITableViewCell
{
    _Bool _isSelected;
    CDUnknownBlockType _reportOptionBlock;
    UILabel *_titleLabel;
    UIImageView *_checkMarkImgView;
}

@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) CDUnknownBlockType reportOptionBlock; // @synthesize reportOptionBlock=_reportOptionBlock;
- (void).cxx_destruct;
- (void)clickCell:(id)arg1;
- (void)setSelect:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

