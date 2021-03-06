//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WMComparisonSortButton;

@interface WMGoodsListSectionHeaderView : UIView
{
    _Bool _sortEnable;
    UIView *_topLineView;
    long long _sortType;
    CDUnknownBlockType _sortBlock;
    UIView *_contentBgView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_tailLabel;
    UIButton *_salesSortButton;
    UIView *_verticalLineView;
    WMComparisonSortButton *_priceSortButton;
}

@property(nonatomic) _Bool sortEnable; // @synthesize sortEnable=_sortEnable;
@property(retain, nonatomic) WMComparisonSortButton *priceSortButton; // @synthesize priceSortButton=_priceSortButton;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) UIButton *salesSortButton; // @synthesize salesSortButton=_salesSortButton;
@property(retain, nonatomic) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(copy, nonatomic) CDUnknownBlockType sortBlock; // @synthesize sortBlock=_sortBlock;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(readonly, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
- (void).cxx_destruct;
- (void)loadSectionHeaderViewWithTitle:(id)arg1 descrition:(id)arg2 sortType:(long long)arg3;
- (void)layoutSubviews;
- (void)setUpSectionHeaderView;
- (id)initWithFrame:(struct CGRect)arg1 sortEnable:(_Bool)arg2;

@end

