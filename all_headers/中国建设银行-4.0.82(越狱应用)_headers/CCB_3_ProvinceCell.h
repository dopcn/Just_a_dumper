//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface CCB_3_ProvinceCell : UITableViewCell
{
    UIImageView *cellBackGroundImageView;
    UIImageView *cellselectedImageView;
    UILabel *cellTitleLabel;
    UILabel *cellDetailLabel;
    UIImageView *tableViewIconView;
    UILabel *cellDistanceLabel;
}

@property(retain, nonatomic) UILabel *cellDistanceLabel; // @synthesize cellDistanceLabel;
@property(retain, nonatomic) UIImageView *tableViewIconView; // @synthesize tableViewIconView;
@property(retain, nonatomic) UILabel *cellDetailLabel; // @synthesize cellDetailLabel;
@property(retain, nonatomic) UILabel *cellTitleLabel; // @synthesize cellTitleLabel;
@property(retain, nonatomic) UIImageView *cellselectedImageView; // @synthesize cellselectedImageView;
@property(retain, nonatomic) UIImageView *cellBackGroundImageView; // @synthesize cellBackGroundImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

