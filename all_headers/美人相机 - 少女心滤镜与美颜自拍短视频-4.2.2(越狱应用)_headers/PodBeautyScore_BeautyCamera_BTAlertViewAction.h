//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PodBeautyScore_BeautyCamera_BTAlertView, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface PodBeautyScore_BeautyCamera_BTAlertViewAction : NSObject
{
    double _innerSize;
    PodBeautyScore_BeautyCamera_BTAlertView *_alertView;
    long long _style;
    UILabel *_label;
    UIButton *_button;
    UITextField *_textField;
    UIImageView *_imageView;
    UIView *_customView;
    double _size;
    long long _index;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _actionBlankHandler;
    CDUnknownBlockType _stringHandler;
    struct UIEdgeInsets _edgeInsets;
}

@property(copy, nonatomic) CDUnknownBlockType stringHandler; // @synthesize stringHandler=_stringHandler;
@property(copy, nonatomic) CDUnknownBlockType actionBlankHandler; // @synthesize actionBlankHandler=_actionBlankHandler;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)replaceCustomView:(id)arg1;
- (double)labelHeightWithMaxWidth:(double)arg1;
- (double)labelWidth;
- (void)buttonAction:(id)arg1;
- (void)buttonBlankAction:(id)arg1;
- (void)textFieldEditingChangedAction:(id)arg1;
- (id)initWithAlertView:(id)arg1 style:(long long)arg2;

@end

