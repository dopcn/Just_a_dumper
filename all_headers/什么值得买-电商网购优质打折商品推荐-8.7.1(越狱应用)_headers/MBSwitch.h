//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIColor;

@interface MBSwitch : UIControl <UIGestureRecognizerDelegate>
{
    CAShapeLayer *_thumbLayer;
    CAShapeLayer *_fillLayer;
    CAShapeLayer *_backLayer;
    _Bool _dragging;
    _Bool _on;
    _Bool _pressed;
    UIColor *_tintColor;
    UIColor *_onTintColor;
}

@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)dealloc;
- (struct CGRect)thumbFrameForState:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)toggleDragged:(id)arg1;
- (void)tapped:(id)arg1;
@property(nonatomic) UIColor *thumbTintColor;
@property(nonatomic) UIColor *offTintColor;
- (void)showFillLayer:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackgroundOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isOn) _Bool on;
- (void)configure;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

