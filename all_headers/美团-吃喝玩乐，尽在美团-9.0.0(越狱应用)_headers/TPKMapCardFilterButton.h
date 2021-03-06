//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TPKMapFilterInfo, UIButton, UIImageView, UILabel;

@interface TPKMapCardFilterButton : UIView
{
    _Bool _selected;
    double _buttonWidth;
    CDUnknownBlockType _didSelectButtonBlock;
    UIButton *_maskButton;
    UIImageView *_icon;
    UILabel *_title;
    TPKMapFilterInfo *_info;
    double _space;
    double _titleWidth;
}

@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) double space; // @synthesize space=_space;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) TPKMapFilterInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(copy, nonatomic) CDUnknownBlockType didSelectButtonBlock; // @synthesize didSelectButtonBlock=_didSelectButtonBlock;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupUI;
- (void)setDataWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

