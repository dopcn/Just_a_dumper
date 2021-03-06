//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIFont, UILabel, UIView;

@interface ZJSwitch : UIControl
{
    _Bool _on;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIColor *_thumbTintColor;
    UIColor *_textColor;
    UIFont *_textFont;
    NSString *_onText;
    NSString *_offText;
    UIView *_containerView;
    UIView *_onContentView;
    UIView *_offContentView;
    UIView *_knobView;
    UILabel *_onLabel;
    UILabel *_offLabel;
}

@property(retain, nonatomic) UILabel *offLabel; // @synthesize offLabel=_offLabel;
@property(retain, nonatomic) UILabel *onLabel; // @synthesize onLabel=_onLabel;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) UIView *offContentView; // @synthesize offContentView=_offContentView;
@property(retain, nonatomic) UIView *onContentView; // @synthesize onContentView=_onContentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *offText; // @synthesize offText=_offText;
@property(retain, nonatomic) NSString *onText; // @synthesize onText=_onText;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;
- (void)handlePanGestureRecognizerEvent:(id)arg1;
- (void)handleTapTapGestureRecognizerEvent:(id)arg1;
- (struct CGRect)roundRect:(struct CGRect)arg1;
- (void)commonInit;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

