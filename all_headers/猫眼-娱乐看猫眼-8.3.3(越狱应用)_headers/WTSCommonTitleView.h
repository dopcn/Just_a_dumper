//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSURL, UIButton, UIImageView, UILabel;

@interface WTSCommonTitleView : UIView
{
    _Bool _isShowMoreButton;
    NSString *_title;
    NSURL *_jumpURL;
    CDUnknownBlockType _didMoreButtonClicked;
    UILabel *_titleLabel;
    UILabel *_rightSideLabel;
    UIImageView *_rightSideArrowImageView;
    UIButton *_maskClickButton;
}

@property(retain, nonatomic) UIButton *maskClickButton; // @synthesize maskClickButton=_maskClickButton;
@property(retain, nonatomic) UIImageView *rightSideArrowImageView; // @synthesize rightSideArrowImageView=_rightSideArrowImageView;
@property(retain, nonatomic) UILabel *rightSideLabel; // @synthesize rightSideLabel=_rightSideLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType didMoreButtonClicked; // @synthesize didMoreButtonClicked=_didMoreButtonClicked;
@property(nonatomic) _Bool isShowMoreButton; // @synthesize isShowMoreButton=_isShowMoreButton;
@property(retain, nonatomic) NSURL *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didClickMaskButton;
- (void)setupUI;
- (id)init;

@end

