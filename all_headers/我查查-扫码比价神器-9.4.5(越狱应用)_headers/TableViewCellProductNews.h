//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ProductPrice, UIImageView, UILabel;

@interface TableViewCellProductNews : UITableViewCell
{
    ProductPrice *_productPrice;
    UILabel *_labelTitle;
    UIImageView *_imageViewBG;
}

@property(nonatomic) __weak UIImageView *imageViewBG; // @synthesize imageViewBG=_imageViewBG;
@property(nonatomic) __weak UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) ProductPrice *productPrice; // @synthesize productPrice=_productPrice;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initViews;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

