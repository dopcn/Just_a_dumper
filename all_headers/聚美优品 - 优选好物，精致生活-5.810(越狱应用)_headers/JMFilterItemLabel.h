//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface JMFilterItemLabel : UIView
{
    _Bool _isSelected;
    _Bool _hideCheckedImageView;
    _Bool _unhighlightTitle;
    NSString *_title;
    double _titleLabelMarginLeft;
    double _checkMarkMarginRight;
    UIView *_separatorLine;
    UILabel *_titleLabel;
    UIImageView *_checkedImageView;
}

@property(retain, nonatomic) UIImageView *checkedImageView; // @synthesize checkedImageView=_checkedImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) double checkMarkMarginRight; // @synthesize checkMarkMarginRight=_checkMarkMarginRight;
@property(nonatomic) double titleLabelMarginLeft; // @synthesize titleLabelMarginLeft=_titleLabelMarginLeft;
@property(nonatomic) _Bool unhighlightTitle; // @synthesize unhighlightTitle=_unhighlightTitle;
@property(nonatomic) _Bool hideCheckedImageView; // @synthesize hideCheckedImageView=_hideCheckedImageView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGRect)checkedImageViewFrame;
- (struct CGRect)titleLabelFrame;
- (struct CGRect)separatorLineFrame;
- (void)layoutSubviews;
- (void)addViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

