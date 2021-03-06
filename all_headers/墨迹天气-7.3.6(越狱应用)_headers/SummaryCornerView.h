//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface SummaryCornerView : UIView
{
    UIColor *_bgColor;
    double _cornerRadii;
    CAShapeLayer *_bgLayer;
}

+ (Class)layerClass;
@property(retain, nonatomic) CAShapeLayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(nonatomic) double cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)layoutPath;
- (void)redrawPath;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)shapeLayer;

@end

