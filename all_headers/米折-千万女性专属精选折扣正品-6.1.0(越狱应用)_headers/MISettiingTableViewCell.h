//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface MISettiingTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_lineView;
    UIImageView *_rightView;
    NSLayoutConstraint *_subTitleLabRight;
}

@property(retain, nonatomic) NSLayoutConstraint *subTitleLabRight; // @synthesize subTitleLabRight=_subTitleLabRight;
@property(retain, nonatomic) UIImageView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

