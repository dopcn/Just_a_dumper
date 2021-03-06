//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class CALayer, UIColor;

@interface MAYRoundedLabel : UILabel
{
    double _intriWidth;
    double _intriHeight;
    unsigned long long _corners;
    double _radius;
    UIColor *_borderColor;
    double _borderWidth;
    UIColor *_layerShadowColor;
    double _layerShadowRadius;
    CALayer *_shadowLayer;
    struct CGSize _layerShadowOffset;
    struct UIEdgeInsets _padding;
}

+ (id)labelWithFrame:(struct CGRect)arg1 textColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;
+ (id)labelWithFrame:(struct CGRect)arg1 textColor:(id)arg2 fontSize:(double)arg3;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) double layerShadowRadius; // @synthesize layerShadowRadius=_layerShadowRadius;
@property(retain, nonatomic) UIColor *layerShadowColor; // @synthesize layerShadowColor=_layerShadowColor;
@property(nonatomic) struct CGSize layerShadowOffset; // @synthesize layerShadowOffset=_layerShadowOffset;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
@property(nonatomic) double intriHeight; // @synthesize intriHeight=_intriHeight;
@property(nonatomic) double intriWidth; // @synthesize intriWidth=_intriWidth;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)clearBackgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize)arg1 shadowColor:(id)arg2 shadowRadius:(double)arg3;
- (void)setRoundCorners:(unsigned long long)arg1 radius:(double)arg2 borderColor:(id)arg3 borderWidth:(double)arg4;
- (void)setRoundCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)setAllCornersRadius:(double)arg1;

@end

