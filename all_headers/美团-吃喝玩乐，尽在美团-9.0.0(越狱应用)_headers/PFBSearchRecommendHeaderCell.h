//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PFBSearchResultTableViewCell.h"

@class UILabel;

@interface PFBSearchRecommendHeaderCell : PFBSearchResultTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSearchResultItem:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 reuseIdentifier:(id)arg3;

@end

