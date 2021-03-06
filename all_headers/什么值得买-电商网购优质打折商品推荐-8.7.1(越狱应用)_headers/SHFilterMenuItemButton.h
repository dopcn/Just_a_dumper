//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIImageView, UILabel;

@interface SHFilterMenuItemButton : UIView
{
    _Bool _isSelected;
    _Bool _isForeverSelected;
    double _space;
    double _fontSize;
    UIColor *_textColor;
    long long _positionType;
    NSString *_title;
    NSString *_imageUrl;
    CDUnknownBlockType _menuItemButtonClickBlock;
    UIButton *_btnBackground;
    UILabel *_lblTitle;
    UIImageView *_imgArrow;
}

@property(retain, nonatomic) UIImageView *imgArrow; // @synthesize imgArrow=_imgArrow;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UIButton *btnBackground; // @synthesize btnBackground=_btnBackground;
@property(copy, nonatomic) CDUnknownBlockType menuItemButtonClickBlock; // @synthesize menuItemButtonClickBlock=_menuItemButtonClickBlock;
@property(nonatomic) _Bool isForeverSelected; // @synthesize isForeverSelected=_isForeverSelected;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double space; // @synthesize space=_space;
- (void).cxx_destruct;
- (void)resize;
- (void)layoutSubviews;
- (void)btnClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 positionType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 space:(double)arg2 positionType:(long long)arg3;

@end

