//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCTableViewCell.h"

@class TBCImageView, UILabel;

@interface TBCListOneStyleCell : TBCTableViewCell
{
    _Bool _lastItem;
    TBCImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) _Bool lastItem; // @synthesize lastItem=_lastItem;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBCImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

