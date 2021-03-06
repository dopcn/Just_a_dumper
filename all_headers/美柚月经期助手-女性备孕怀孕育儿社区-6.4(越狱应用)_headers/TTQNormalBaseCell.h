//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYLineView, UIImageView, UILabel, UIView;

@interface TTQNormalBaseCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    UIImageView *_vipIcon;
    IMYLineView *_lineView;
    UIView *_nameIconContainer;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIView *nameIconContainer; // @synthesize nameIconContainer=_nameIconContainer;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)vipImageName:(long long)arg1;
- (void)configCell:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

