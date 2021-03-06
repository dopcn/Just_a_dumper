//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NVNumberButton, UIButton, UITextField;

@interface NVNumberPad : UIView
{
    _Bool _noTitleBar;
    long long _style;
    UITextField *_textField;
    UIView *_titleBar;
    UIButton *_completeButton;
    UIView *_topLine;
    UIView *_keyboradView;
    NSMutableArray *_buttons;
    NSMutableArray *_verticalLines;
    NSMutableArray *_horizatalLines;
    NVNumberButton *_leftBottomButton;
}

@property(retain, nonatomic) NVNumberButton *leftBottomButton; // @synthesize leftBottomButton=_leftBottomButton;
@property(retain, nonatomic) NSMutableArray *horizatalLines; // @synthesize horizatalLines=_horizatalLines;
@property(retain, nonatomic) NSMutableArray *verticalLines; // @synthesize verticalLines=_verticalLines;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIView *keyboradView; // @synthesize keyboradView=_keyboradView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UIView *titleBar; // @synthesize titleBar=_titleBar;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool noTitleBar; // @synthesize noTitleBar=_noTitleBar;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)delete:(id)arg1;
- (void)complete:(id)arg1;
- (void)clickButton:(id)arg1;
- (id)numFont;
- (long long)columnCount;
- (long long)rowCount;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

