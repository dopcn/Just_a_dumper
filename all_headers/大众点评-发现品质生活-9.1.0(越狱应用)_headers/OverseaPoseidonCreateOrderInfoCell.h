//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseMarginCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, OverseaIndexBtn, UILabel, UITextField;

@interface OverseaPoseidonCreateOrderInfoCell : NVBaseMarginCell <UITextFieldDelegate>
{
    _Bool _isNumber;
    NSString *_title;
    NSString *_placeHolder;
    id _delegate;
    NSString *_info;
    UITextField *_textField;
    UILabel *_titleLabel;
    OverseaIndexBtn *_indexBtn;
}

+ (double)titleLabelWidth;
+ (id)titleLabelFont;
+ (double)titleLabelHeight:(id)arg1;
@property(retain, nonatomic) OverseaIndexBtn *indexBtn; // @synthesize indexBtn=_indexBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNumber; // @synthesize isNumber=_isNumber;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)initialer;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

