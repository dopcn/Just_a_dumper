//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWIBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface TWISearchResultTitleCell : TWIBaseTableViewCell
{
    UIImageView *_leftIconImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
- (void).cxx_destruct;
- (void)_setupUI;
- (void)bindWithViewModel:(id)arg1;
- (void)setItem:(id)arg1;

@end

