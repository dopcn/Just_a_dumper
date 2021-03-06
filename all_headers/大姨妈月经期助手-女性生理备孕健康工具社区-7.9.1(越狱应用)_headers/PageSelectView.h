//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol PageSelectViewDelegate;

@interface PageSelectView : UIView
{
    _Bool _leftButtonEnable;
    _Bool _rightButtonEnable;
    NSString *_title;
    id <PageSelectViewDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) _Bool rightButtonEnable; // @synthesize rightButtonEnable=_rightButtonEnable;
@property(nonatomic) _Bool leftButtonEnable; // @synthesize leftButtonEnable=_leftButtonEnable;
@property(nonatomic) __weak id <PageSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)formatYearDateFromDateline:(long long)arg1;
- (id)formatYearAndMonthDateFromDateline:(long long)arg1;
- (double)calculateWidth;
- (void)buttonPress:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

