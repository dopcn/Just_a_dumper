//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, CATextLayer, NSMutableAttributedString, NSString;
@protocol ASValuePopUpViewDelegate;

@interface ASValuePopUpView : UIView <CAAnimationDelegate>
{
    _Bool _shouldAnimate;
    double _animDuration;
    NSMutableAttributedString *_attributedString;
    CAShapeLayer *_pathLayer;
    CATextLayer *_textLayer;
    double _arrowCenterOffset;
    CAShapeLayer *_colorAnimLayer;
    id <ASValuePopUpViewDelegate> _delegate;
    double _cornerRadius;
    double _arrowLength;
    double _yOffset;
    double _widthPaddingFactor;
    double _heightPaddingFactor;
}

+ (Class)layerClass;
@property(nonatomic) double heightPaddingFactor; // @synthesize heightPaddingFactor=_heightPaddingFactor;
@property(nonatomic) double widthPaddingFactor; // @synthesize widthPaddingFactor=_widthPaddingFactor;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double arrowLength; // @synthesize arrowLength=_arrowLength;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <ASValuePopUpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)pathForRect:(struct CGRect)arg1 withArrowOffset:(double)arg2;
- (void)animationDidStart:(id)arg1;
- (void)hideAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1;
- (struct CGSize)popUpSizeForString:(id)arg1;
- (void)animateBlock:(CDUnknownBlockType)arg1;
- (void)setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2 text:(id)arg3;
- (void)setAnimationOffset:(double)arg1 returnColor:(CDUnknownBlockType)arg2;
- (void)setAnimatedColors:(id)arg1 withKeyTimes:(id)arg2;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)opaqueColor;
- (void)setColor:(id)arg1;
- (id)color;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

