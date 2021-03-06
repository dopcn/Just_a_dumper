//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTKTableViewCell.h"

@class HTKTableViewItem, UIButton, UIImageView, UILabel, UIView;

@interface FTKSubmitOrderNoAssemblyCell : HTKTableViewCell
{
    HTKTableViewItem *_item;
    UIButton *_clickButton;
    UILabel *_titleLabel;
    UILabel *_iconLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImageView;
    UIView *_childrenView;
    UIImageView *_bgImageView;
    UIView *_childContentView;
}

@property(retain, nonatomic) UIView *childContentView; // @synthesize childContentView=_childContentView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *childrenView; // @synthesize childrenView=_childrenView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
- (id)item;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

