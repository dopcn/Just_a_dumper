//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCustomeTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface CTInlandFlightListFilterDetailCell : CTCustomeTableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_checkIcon;
    UILabel *_contentLabel;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *checkIcon; // @synthesize checkIcon=_checkIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setCellSelected:(_Bool)arg1 checkType:(int)arg2;
- (void)setCellType:(int)arg1 isUnLimit:(_Bool)arg2;
- (void)awakeFromNib;

@end

