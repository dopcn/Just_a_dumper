//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class QNPSimplePickerButtonData, UIFont, UILabel;

@interface QNPSimplePickerButton : UIButton
{
    QNPSimplePickerButtonData *_btnData;
    unsigned long long _textFieldType;
    UILabel *_pickerNameLabel;
    struct CGSize _titleTextSize;
}

+ (id)buttonWithFrame:(struct CGRect)arg1;
+ (id)buttonWithType:(long long)arg1;
@property(nonatomic) struct CGSize titleTextSize; // @synthesize titleTextSize=_titleTextSize;
@property(retain, nonatomic) UILabel *pickerNameLabel; // @synthesize pickerNameLabel=_pickerNameLabel;
@property(nonatomic) unsigned long long textFieldType; // @synthesize textFieldType=_textFieldType;
@property(retain, nonatomic) QNPSimplePickerButtonData *btnData; // @synthesize btnData=_btnData;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *btnFont;
- (void)setImage;
- (void)setTitle;
- (void)showPicker:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

