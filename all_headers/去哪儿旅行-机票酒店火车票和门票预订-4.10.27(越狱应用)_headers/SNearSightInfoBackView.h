//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SNearSightInfoBackView : UIView
{
    UIView *_borderView;
    CAShapeLayer *_arrowLayer;
    UIView *_arrowView;
}

@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
- (void).cxx_destruct;
- (void)setLineAlpha:(double)arg1;
- (void)setBackColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

