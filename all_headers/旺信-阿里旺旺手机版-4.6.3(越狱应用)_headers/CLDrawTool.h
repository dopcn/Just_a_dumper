//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLImageToolBase.h"

@class CLToolbarMenuItem, UIColor, UIImageView, UISlider, UIView;

@interface CLDrawTool : CLImageToolBase
{
    UIImageView *_drawingView;
    struct CGSize _originalImageSize;
    struct CGPoint _prevDraggingPosition;
    UIView *_menuView;
    UISlider *_colorSlider;
    UISlider *_widthSlider;
    UIView *_strokePreview;
    UIView *_strokePreviewBackground;
    UIImageView *_eraserIcon;
    CLToolbarMenuItem *_colorBtn;
    UIColor *_strokeColor;
}

+ (id)optionalInfo;
+ (double)defaultDockedNumber;
+ (_Bool)isAvailable;
+ (id)defaultTitle;
+ (id)subtools;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (id)buildImage;
- (void)drawLine:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)drawingViewDidPan:(id)arg1;
- (void)strokePreviewDidTap:(id)arg1;
- (void)widthSliderDidChange:(id)arg1;
- (void)colorSliderDidChange:(id)arg1;
- (id)ovalPath;
- (void)setMenu;
- (void)changeColor:(id)arg1;
- (void)setColorButtons;
- (id)colorForValue:(double)arg1;
- (id)widthSliderBackground;
- (id)colorSliderBackground;
- (id)defaultSliderWithWidth:(double)arg1;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)cleanup;
- (void)setup;

@end

