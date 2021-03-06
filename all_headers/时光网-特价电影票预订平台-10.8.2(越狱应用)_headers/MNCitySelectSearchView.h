//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UITextField;

@interface MNCitySelectSearchView : UIView
{
    UITextField *_textFieldSearch;
    UIButton *_btnSearch;
    UIView *_viewSearchBg;
    UIImageView *_imageViewMagnifier;
    UIView *_viewLine;
}

@property(retain, nonatomic) UIView *viewLine; // @synthesize viewLine=_viewLine;
@property(retain, nonatomic) UIImageView *imageViewMagnifier; // @synthesize imageViewMagnifier=_imageViewMagnifier;
@property(retain, nonatomic) UIView *viewSearchBg; // @synthesize viewSearchBg=_viewSearchBg;
@property(retain, nonatomic) UIButton *btnSearch; // @synthesize btnSearch=_btnSearch;
@property(retain, nonatomic) UITextField *textFieldSearch; // @synthesize textFieldSearch=_textFieldSearch;
- (void).cxx_destruct;
- (void)setSelectTarget:(id)arg1 searchBtnClick:(SEL)arg2;
- (void)setUpDatas;
- (void)updateSubviewsConstraints;
- (void)setupViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

