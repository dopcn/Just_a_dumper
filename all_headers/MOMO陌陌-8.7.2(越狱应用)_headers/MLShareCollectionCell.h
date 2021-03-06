//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface MLShareCollectionCell : UICollectionViewCell
{
    NSLayoutConstraint *_iconTopConstraint;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSLayoutConstraint *iconTopConstraint; // @synthesize iconTopConstraint=_iconTopConstraint;
- (void).cxx_destruct;
- (void)setupWithTitle:(id)arg1 andIconName:(id)arg2;
- (void)awakeFromNib;

@end

