//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RecommendProduct, UIImageView, UILabel, UIView;

@interface TableViewCellRecommededProduct : UITableViewCell
{
    RecommendProduct *_recommendProduct;
    UIView *_seperatorLine;
    UILabel *_labelProductName;
    UILabel *_labelPrice;
    UIImageView *_imageViewProduct;
}

@property(nonatomic) __weak UIImageView *imageViewProduct; // @synthesize imageViewProduct=_imageViewProduct;
@property(nonatomic) __weak UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(nonatomic) __weak UILabel *labelProductName; // @synthesize labelProductName=_labelProductName;
@property(nonatomic) __weak UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) RecommendProduct *recommendProduct; // @synthesize recommendProduct=_recommendProduct;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

